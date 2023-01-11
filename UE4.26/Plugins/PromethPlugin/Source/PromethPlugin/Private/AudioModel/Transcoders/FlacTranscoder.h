#pragma once

#include "CoreMinimal.h"

struct FDecodedAudioStruct;
struct FEncodedAudioStruct;

class PROMETHPLUGIN_API FlacTranscoder
{
public:
	/**
	 * 检查给定的FLAC音频数据是否有效
	 */
	static bool CheckAudioFormat(const uint8* AudioData, int32 AudioDataSize);

	/**
	 * 解码压缩FLAC数据为PCM格式
	 */
	static bool Decode(const FEncodedAudioStruct& EncodedData, FDecodedAudioStruct& DecodedData);
};
