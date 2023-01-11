#pragma once

#include "CoreMinimal.h"

struct FDecodedAudioStruct;
struct FEncodedAudioStruct;

class PROMETHPLUGIN_API VorbisTranscoder
{
public:
	/**
	 * 检查给定的Vorbis音频数据是否有效
	 */
	static bool CheckAudioFormat(const uint8* AudioData, int32 AudioDataSize);

	/**
	 * 将未压缩数据编码为Vorbis格式
	 */
	static bool Encode(const FDecodedAudioStruct& DecodedData, FEncodedAudioStruct& EncodedData, uint8 Quality);

	/**
	 * 解码压缩Vorbis数据到PCM格式
	 */
	static bool Decode(const FEncodedAudioStruct& EncodedData, FDecodedAudioStruct& DecodedData);
};
