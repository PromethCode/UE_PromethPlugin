#pragma once

#include "CoreMinimal.h"

struct FDecodedAudioStruct;
struct FEncodedAudioStruct;

UENUM()
enum class EWAVEncodingFormat : uint8
{
	FORMAT_PCM,
	FORMAT_ADPCM,
	FORMAT_IEEE_FLOAT,
	FORMAT_ALAW,
	FORMAT_MULAW,
	FORMAT_DVI_ADPCM,
	FORMAT_EXTENSIBLE
};

struct FWAVEncodingFormat
{
	EWAVEncodingFormat Format;

	uint32 BitsPerSample;

	FWAVEncodingFormat(EWAVEncodingFormat Format, uint32 BitsPerSample)
		: Format(Format)
	  , BitsPerSample(BitsPerSample)
	{
	}

	FString ToString() const
	{
		return FString::Printf(TEXT("Format: %s, bits per sample: %d"), *UEnum::GetValueAsName(Format).ToString(), BitsPerSample);
	}
};

class PROMETHPLUGIN_API WAVTranscoder
{
public:
	/**
	 * 检查带有RIFF容器的WAV音频数据是否具有正确的字节大小
	 */
	static bool CheckAndFixWavDurationErrors(TArray<uint8>& WavData);

	/**
	 * 检查给定的WAV音频数据是否有效
	 */
	static bool CheckAudioFormat(const uint8* AudioData, int32 AudioDataSize);

	/**
	 * 将未压缩的数据编码为WAV格式
	 */
	static bool Encode(const FDecodedAudioStruct& DecodedData, FEncodedAudioStruct& EncodedData, FWAVEncodingFormat Format);

	/**
	 * 解码压缩的WAV数据为PCM格式
	 */
	static bool Decode(const FEncodedAudioStruct& EncodedData, FDecodedAudioStruct& DecodedData);
};
