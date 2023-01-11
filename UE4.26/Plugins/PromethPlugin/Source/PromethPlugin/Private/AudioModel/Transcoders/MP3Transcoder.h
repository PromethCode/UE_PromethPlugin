#pragma once

#include "CoreMinimal.h"

struct FDecodedAudioStruct;
struct FEncodedAudioStruct;

class PROMETHPLUGIN_API MP3Transcoder
{
public:
	/**
	 * 检查给定的MP3音频数据是否有效
	 */
	static bool CheckAudioFormat(const uint8* AudioData, int32 AudioDataSize);

	/**
	 * 解码压缩MP3数据到PCM格式
	 */
	static bool Decode(const FEncodedAudioStruct& EncodedData, FDecodedAudioStruct& DecodedData);
};
