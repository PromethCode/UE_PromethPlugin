#include "AudioModel/Transcoders/MP3Transcoder.h"
#include "AudioModel/RuntimeAudioImporterDefines.h"
#include "AudioModel/RuntimeAudioImporterTypes.h"

#define INCLUDE_MP3
#include "TranscodersIncludes.h"
#undef INCLUDE_MP3

bool MP3Transcoder::CheckAudioFormat(const uint8* AudioData, int32 AudioDataSize)
{
	drmp3 MP3;
	
	if (!drmp3_init_memory(&MP3, AudioData, AudioDataSize, nullptr))
	{
		return false;
	}

	return true;
}

bool MP3Transcoder::Decode(const FEncodedAudioStruct& EncodedData, FDecodedAudioStruct& DecodedData)
{
	RuntimeAudioImporter_TranscoderLogs::PrintLog(FString::Printf(TEXT("Decoding MP3 audio data to uncompressed audio format.\nEncoded audio info: %s"), *EncodedData.ToString()));
	
	drmp3 MP3_Decoder;

	if (!drmp3_init_memory(&MP3_Decoder, EncodedData.AudioData.GetView().GetData(), EncodedData.AudioData.GetView().Num(), nullptr))
	{
		RuntimeAudioImporter_TranscoderLogs::PrintError(TEXT("Unable to initialize MP3 Decoder"));
		return false;
	}

	uint8* TempPCMData = static_cast<uint8*>(FMemory::Malloc(drmp3_get_pcm_frame_count(&MP3_Decoder) * MP3_Decoder.channels * sizeof(float)));

	DecodedData.PCMInfo.PCMNumOfFrames = drmp3_read_pcm_frames_f32(&MP3_Decoder, drmp3_get_pcm_frame_count(&MP3_Decoder), reinterpret_cast<float*>(TempPCMData));

	const int32 TempPCMDataSize = static_cast<int32>(DecodedData.PCMInfo.PCMNumOfFrames * MP3_Decoder.channels * sizeof(float));

	DecodedData.PCMInfo.PCMData = FBulkDataBuffer<uint8>(TempPCMData, TempPCMDataSize);

	{
		DecodedData.SoundWaveBasicInfo.Duration = static_cast<float>(drmp3_get_pcm_frame_count(&MP3_Decoder)) / MP3_Decoder.sampleRate;
		DecodedData.SoundWaveBasicInfo.NumOfChannels = MP3_Decoder.channels;
		DecodedData.SoundWaveBasicInfo.SampleRate = MP3_Decoder.sampleRate;
	}

	drmp3_uninit(&MP3_Decoder);

	RuntimeAudioImporter_TranscoderLogs::PrintLog(FString::Printf(TEXT("Successfully decoded MP3 audio data to uncompressed audio format.\nDecoded audio info: %s"), *DecodedData.ToString()));

	return true;
}
