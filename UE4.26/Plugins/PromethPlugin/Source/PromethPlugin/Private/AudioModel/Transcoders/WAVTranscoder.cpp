#include "WAVTranscoder.h"
#include "AudioModel/RuntimeAudioImporterDefines.h"
#include "AudioModel/RuntimeAudioImporterTypes.h"

#define INCLUDE_WAV
#include "TranscodersIncludes.h"
#undef INCLUDE_WAV

bool WAVTranscoder::CheckAndFixWavDurationErrors(TArray<uint8>& WavData)
{
	drwav WAV;

	if (!drwav_init_memory(&WAV, WavData.GetData(), WavData.Num(), nullptr))
	{
		RuntimeAudioImporter_TranscoderLogs::PrintError(TEXT("Unable to initialize WAV Decoder"));
		return false;
	}

	if (WAV.container != drwav_container_riff)
	{
		drwav_uninit(&WAV);
		return true;
	}

	if (BytesToHex(WavData.GetData() + 4, 4) == "FFFFFFFF")
	{
		const int32 ActualFileSize = WavData.Num() - 8;
		FMemory::Memcpy(WavData.GetData() + 4, &ActualFileSize, 4);
	}

	uint32 DataSizeLocation = INDEX_NONE;
	for (uint32 Index = 36; Index < static_cast<uint32>(WavData.Num()) - 4; ++Index)
	{
		if (BytesToHex(WavData.GetData() + Index, 4) == "64617461")
		{
			DataSizeLocation = Index + 4;
			break;
		}
	}

	if (DataSizeLocation == INDEX_NONE)
	{
		drwav_uninit(&WAV);

		return false;
	}

	if (BytesToHex(WavData.GetData() + DataSizeLocation, 4) == "FFFFFFFF")
	{
		const uint32 ActualDataSize = WavData.Num() - DataSizeLocation - 4;

		FMemory::Memcpy(WavData.GetData() + DataSizeLocation, &ActualDataSize, 4);
	}

	drwav_uninit(&WAV);

	return true;
}

bool WAVTranscoder::CheckAudioFormat(const uint8* AudioData, int32 AudioDataSize)
{
	drwav WAV;

	if (!drwav_init_memory(&WAV, AudioData, AudioDataSize, nullptr))
	{
		return false;
	}

	return true;
}

uint32 ConvertFormat(EWAVEncodingFormat Format)
{
	switch (Format)
	{
	case EWAVEncodingFormat::FORMAT_PCM:
		return DR_WAVE_FORMAT_PCM;
	case EWAVEncodingFormat::FORMAT_ADPCM:
		return DR_WAVE_FORMAT_ADPCM;
	case EWAVEncodingFormat::FORMAT_IEEE_FLOAT:
		return DR_WAVE_FORMAT_IEEE_FLOAT;
	case EWAVEncodingFormat::FORMAT_ALAW:
		return DR_WAVE_FORMAT_ALAW;
	case EWAVEncodingFormat::FORMAT_MULAW:
		return DR_WAVE_FORMAT_MULAW;
	case EWAVEncodingFormat::FORMAT_DVI_ADPCM:
		return DR_WAVE_FORMAT_DVI_ADPCM;
	case EWAVEncodingFormat::FORMAT_EXTENSIBLE:
		return DR_WAVE_FORMAT_EXTENSIBLE;
	default:
		return DR_WAVE_FORMAT_PCM;
	}
}

bool WAVTranscoder::Encode(const FDecodedAudioStruct& DecodedData, FEncodedAudioStruct& EncodedData, FWAVEncodingFormat Format)
{
	RuntimeAudioImporter_TranscoderLogs::PrintLog(FString::Printf(TEXT("Encoding uncompressed audio data to WAV audio format.\nDecoded audio info: %s.\nEncoding audio format: %s"),
	                                                                *DecodedData.ToString(), *Format.ToString()));

	drwav WAV_Encoder;

	drwav_data_format WAV_Format;
	{
		WAV_Format.container = drwav_container_riff;
		WAV_Format.format = ConvertFormat(Format.Format);
		WAV_Format.channels = DecodedData.SoundWaveBasicInfo.NumOfChannels;
		WAV_Format.sampleRate = DecodedData.SoundWaveBasicInfo.SampleRate;
		WAV_Format.bitsPerSample = Format.BitsPerSample;
	}

	void* AudioData = nullptr;
	size_t AudioDataSize;

	if (!drwav_init_memory_write(&WAV_Encoder, &AudioData, &AudioDataSize, &WAV_Format, nullptr))
	{
		RuntimeAudioImporter_TranscoderLogs::PrintError(TEXT("Unable to initialize WAV Encoder"));
		return false;
	}

	drwav_write_pcm_frames(&WAV_Encoder, DecodedData.PCMInfo.PCMNumOfFrames, DecodedData.PCMInfo.PCMData.GetView().GetData());
	drwav_uninit(&WAV_Encoder);

	{
		EncodedData.AudioData = FBulkDataBuffer<uint8>(static_cast<uint8*>(AudioData), AudioDataSize);
		EncodedData.AudioFormat = EAudioFormat::Wav;
	}
	
	RuntimeAudioImporter_TranscoderLogs::PrintLog(FString::Printf(TEXT("Successfully encoded uncompressed audio data to WAV audio format.\nEncoded audio info: %s"), *EncodedData.ToString()));

	return true;
}

bool WAVTranscoder::Decode(const FEncodedAudioStruct& EncodedData, FDecodedAudioStruct& DecodedData)
{
	RuntimeAudioImporter_TranscoderLogs::PrintLog(FString::Printf(TEXT("Decoding WAV audio data to uncompressed audio format.\nEncoded audio info: %s"), *EncodedData.ToString()));

	drwav WAV_Decoder;

	if (!drwav_init_memory(&WAV_Decoder, EncodedData.AudioData.GetView().GetData(), EncodedData.AudioData.GetView().Num(), nullptr))
	{
		RuntimeAudioImporter_TranscoderLogs::PrintError(TEXT("Unable to initialize WAV Decoder"));
		return false;
	}

	uint8* TempPCMData = static_cast<uint8*>(FMemory::Malloc(WAV_Decoder.totalPCMFrameCount * WAV_Decoder.channels * sizeof(float)));

	DecodedData.PCMInfo.PCMNumOfFrames = drwav_read_pcm_frames_f32(&WAV_Decoder, WAV_Decoder.totalPCMFrameCount, reinterpret_cast<float*>(TempPCMData));

	const int32 TempPCMDataSize = static_cast<int32>(DecodedData.PCMInfo.PCMNumOfFrames * WAV_Decoder.channels * sizeof(float));

	DecodedData.PCMInfo.PCMData =FBulkDataBuffer<uint8>(TempPCMData, TempPCMDataSize);

	{
		DecodedData.SoundWaveBasicInfo.Duration = static_cast<float>(WAV_Decoder.totalPCMFrameCount) / WAV_Decoder.sampleRate;
		DecodedData.SoundWaveBasicInfo.NumOfChannels = WAV_Decoder.channels;
		DecodedData.SoundWaveBasicInfo.SampleRate = WAV_Decoder.sampleRate;
	}

	drwav_uninit(&WAV_Decoder);
	
	RuntimeAudioImporter_TranscoderLogs::PrintLog(FString::Printf(TEXT("Successfully decoded WAV audio data to uncompressed audio format.\nDecoded audio info: %s"), *DecodedData.ToString()));

	return true;
}
