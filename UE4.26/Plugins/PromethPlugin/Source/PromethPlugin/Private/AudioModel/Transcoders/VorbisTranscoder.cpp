#include "VorbisTranscoder.h"
#include "AudioModel/RuntimeAudioImporterTypes.h"
#include "AudioModel/Transcoders/RAWTranscoder.h"
#include "GenericPlatform/GenericPlatformProperties.h"

#define INCLUDE_VORBIS
#include "TranscodersIncludes.h"
#undef INCLUDE_VORBIS

bool VorbisTranscoder::CheckAudioFormat(const uint8* AudioData, int32 AudioDataSize)
{
	int32 ErrorCode;
	stb_vorbis* STBVorbis = stb_vorbis_open_memory(AudioData, AudioDataSize, &ErrorCode, nullptr);

	if (!STBVorbis)
	{
		RuntimeAudioImporter_TranscoderLogs::PrintError(TEXT("Failed to initialize vorbis encoder"));
		return false;
	}

	return true;
}

bool VorbisTranscoder::Encode(const FDecodedAudioStruct& DecodedData, FEncodedAudioStruct& EncodedData, uint8 Quality)
{
	RuntimeAudioImporter_TranscoderLogs::PrintLog(FString::Printf(TEXT("Encoding uncompressed audio data to Vorbis audio format.\nDecoded audio info: %s.\nQuality: %d"), *DecodedData.ToString(), Quality));
	
#if PLATFORM_SUPPORTS_VORBIS_CODEC

	TArray<uint8> EncodedAudioData;
	
	const uint32 NumOfFrames = DecodedData.PCMInfo.PCMNumOfFrames;
	const uint32 NumOfChannels = DecodedData.SoundWaveBasicInfo.NumOfChannels;
	const uint32 SampleRate = DecodedData.SoundWaveBasicInfo.SampleRate;

	const TArray<float> CopiedDecodedData{reinterpret_cast<float*>(DecodedData.PCMInfo.PCMData.GetView().GetData()), static_cast<int32>(DecodedData.PCMInfo.PCMData.GetView().Num()) / static_cast<int32>(sizeof(float))};

	{
		vorbis_info VorbisInfo;
		vorbis_info_init(&VorbisInfo);

		if (vorbis_encode_init_vbr(&VorbisInfo, NumOfChannels, SampleRate, static_cast<float>(Quality) / 100) < 0)
		{
			vorbis_info_clear(&VorbisInfo);
			
			RuntimeAudioImporter_TranscoderLogs::PrintError(TEXT("Failed to initialize vorbis encoder"));
			return false;
		}

		vorbis_comment VorbisComment;
		{
			vorbis_comment_init(&VorbisComment);
			vorbis_comment_add_tag(&VorbisComment, "ENCODER", "RuntimeAudioImporter");
		}

		vorbis_dsp_state VorbisDspState;
		vorbis_block VorbisBlock;
		{
			vorbis_analysis_init(&VorbisDspState, &VorbisInfo);
			vorbis_block_init(&VorbisDspState, &VorbisBlock);
		}

		ogg_packet OggPacket, OggComment, OggCode;
		ogg_page OggPage;
		ogg_stream_state OggStreamState;

		{
			ogg_stream_init(&OggStreamState, 0);
			vorbis_analysis_headerout(&VorbisDspState, &VorbisComment, &OggPacket, &OggComment, &OggCode);
			ogg_stream_packetin(&OggStreamState, &OggPacket);
			ogg_stream_packetin(&OggStreamState, &OggComment);
			ogg_stream_packetin(&OggStreamState, &OggCode);
		}

		while (ogg_stream_flush(&OggStreamState, &OggPage))
		{
			EncodedAudioData.Append(static_cast<uint8*>(OggPage.header), OggPage.header_len);
			EncodedAudioData.Append(static_cast<uint8*>(OggPage.body), OggPage.body_len);
		}

		uint32 FramesEncoded{0}, FramesRead{0};
		
		bool bEndOfBitstream{false};

		while (!bEndOfBitstream)
		{
			constexpr uint32 FramesSplitCount = 1024;
			
			uint32 FramesToEncode{NumOfFrames - FramesRead};

			float** AnalysisBuffer = vorbis_analysis_buffer(&VorbisDspState, FramesToEncode);

			if (FramesToEncode > FramesSplitCount)
			{
				FramesToEncode = FramesSplitCount;
			}

			if (!CopiedDecodedData.GetData() || !AnalysisBuffer)
			{
				RuntimeAudioImporter_TranscoderLogs::PrintError(TEXT("Failed to create analysis buffers"));
				return false;
			}

			for (uint32 FrameIndex = 0; FrameIndex < FramesToEncode; ++FrameIndex)
			{
				const float* Frame = CopiedDecodedData.GetData() + (FrameIndex + FramesEncoded) * NumOfChannels;
				
				for (uint32 ChannelIndex = 0; ChannelIndex < NumOfChannels; ++ChannelIndex)
				{
					AnalysisBuffer[ChannelIndex][FrameIndex] = Frame[ChannelIndex];
				}
			}

			if (vorbis_analysis_wrote(&VorbisDspState, FramesToEncode) < 0)
			{
				RuntimeAudioImporter_TranscoderLogs::PrintError(TEXT("Failed to read frames"));
				return false;
			}

			while (vorbis_analysis_blockout(&VorbisDspState, &VorbisBlock) == 1)
			{
				vorbis_analysis(&VorbisBlock, nullptr);

				vorbis_bitrate_addblock(&VorbisBlock);

				while (vorbis_bitrate_flushpacket(&VorbisDspState, &OggPacket))
				{
					ogg_stream_packetin(&OggStreamState, &OggPacket);

					while (!bEndOfBitstream)
					{
						if (!ogg_stream_pageout(&OggStreamState, &OggPage))
						{
							break;
						}

						EncodedAudioData.Append(static_cast<uint8*>(OggPage.header), OggPage.header_len);
						EncodedAudioData.Append(static_cast<uint8*>(OggPage.body), OggPage.body_len);

						if (ogg_page_eos(&OggPage))
						{
							bEndOfBitstream = true;
						}
					}
				}
			}

			FramesEncoded += FramesToEncode;
			FramesRead += FramesToEncode;
		}

		ogg_stream_clear(&OggStreamState);
		vorbis_block_clear(&VorbisBlock);
		vorbis_dsp_clear(&VorbisDspState);
		vorbis_comment_clear(&VorbisComment);
		vorbis_info_clear(&VorbisInfo);
	}

	{
		EncodedData.AudioData = FBulkDataBuffer<uint8>(static_cast<uint8*>(FMemory::Malloc(EncodedAudioData.Num())), EncodedAudioData.Num());
		EncodedData.AudioFormat = EAudioFormat::OggVorbis;
		FMemory::Memcpy(EncodedData.AudioData.GetView().GetData(), EncodedAudioData.GetData(), EncodedAudioData.Num());
	}
	
	RuntimeAudioImporter_TranscoderLogs::PrintLog(FString::Printf(TEXT("Successfully encoded uncompressed audio data to Vorbis audio format.\nEncoded audio info: %s"), *EncodedData.ToString()));

	return true;

	#undef FRAMES_SPLIT_COUNT

#else
	RuntimeAudioImporter_TranscoderLogs::PrintError(FString::Printf(TEXT("Your platform (%hs) does not support Vorbis encoding"), FGenericPlatformProperties::IniPlatformName()));
	return false;
#endif
}

bool VorbisTranscoder::Decode(const FEncodedAudioStruct& EncodedData, FDecodedAudioStruct& DecodedData)
{
	RuntimeAudioImporter_TranscoderLogs::PrintLog(FString::Printf(TEXT("Decoding Vorbis audio data to uncompressed audio format.\nEncoded audio info: %s"), *EncodedData.ToString()));
	
	int32 ErrorCode;
	stb_vorbis* Vorbis_Decoder = stb_vorbis_open_memory(EncodedData.AudioData.GetView().GetData(), EncodedData.AudioData.GetView().Num(), &ErrorCode, nullptr);

	if (!Vorbis_Decoder)
	{
		RuntimeAudioImporter_TranscoderLogs::PrintError(TEXT("Unable to initialize OGG Vorbis Decoder"));
		return false;
	}

	const int32 SamplesLimit{Vorbis_Decoder->channels * 4096};
	const int32 NumOfChannels{Vorbis_Decoder->channels};
	const int32 SampleRate{static_cast<int32>(Vorbis_Decoder->sample_rate)};

	int32 SamplesOffset = 0;
	int32 NumOfFrames = 0;

	int32 TotalSamples = SamplesLimit;

	int16* Int16RAWBuffer = static_cast<int16*>(FMemory::Malloc(TotalSamples * sizeof(int16)));
	if (!Int16RAWBuffer)
	{
		RuntimeAudioImporter_TranscoderLogs::PrintError(TEXT("Failed to allocate memory for OGG Vorbis Decoder"));
		stb_vorbis_close(Vorbis_Decoder);
		return false;
	}

	while (true)
	{
		const int32 CurrentFrames = stb_vorbis_get_frame_short_interleaved(Vorbis_Decoder, NumOfChannels, Int16RAWBuffer + SamplesOffset, TotalSamples - SamplesOffset);

		if (CurrentFrames == 0) break;

		NumOfFrames += CurrentFrames;
		SamplesOffset += CurrentFrames * NumOfChannels;

		if (SamplesOffset + SamplesLimit > TotalSamples)
		{
			TotalSamples *= 2;

			int16* Int16RAWBufferFrame = static_cast<int16*>(FMemory::Realloc(Int16RAWBuffer, TotalSamples * sizeof(int16)));

			if (!Int16RAWBufferFrame)
			{
				RuntimeAudioImporter_TranscoderLogs::PrintError(TEXT("Failed to allocate memory for OGG Vorbis Decoder"));

				FMemory::Free(Int16RAWBuffer);
				stb_vorbis_close(Vorbis_Decoder);

				return false;
			}

			Int16RAWBuffer = Int16RAWBufferFrame;
		}
	}

	stb_vorbis_close(Vorbis_Decoder);

	DecodedData.PCMInfo.PCMNumOfFrames = NumOfFrames;

	const int32 TempPCMDataSize = DecodedData.PCMInfo.PCMNumOfFrames * NumOfChannels * 2;

	{
		float* TempFloatBuffer;
		int32 TempFloatSize;

		RAWTranscoder::TranscodeRAWData<int16, float>(Int16RAWBuffer, TempPCMDataSize, TempFloatBuffer, TempFloatSize);
		DecodedData.PCMInfo.PCMData = FBulkDataBuffer<uint8>(reinterpret_cast<uint8*>(TempFloatBuffer), TempFloatSize);
	}
	
	FMemory::Free(Int16RAWBuffer);

	{
		DecodedData.SoundWaveBasicInfo.Duration = static_cast<float>(DecodedData.PCMInfo.PCMNumOfFrames) / SampleRate;
		DecodedData.SoundWaveBasicInfo.NumOfChannels = NumOfChannels;
		DecodedData.SoundWaveBasicInfo.SampleRate = SampleRate;
	}
	
	RuntimeAudioImporter_TranscoderLogs::PrintLog(FString::Printf(TEXT("Successfully decoded Vorbis audio data to uncompressed audio format.\nDecoded audio info: %s"), *DecodedData.ToString()));

	return true;
}
