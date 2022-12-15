//
// Created by Z690 on 2022/9/26.
//

#pragma once
#include "android_texture_decoder_types.h"
class TextureData;

#define NDK_EXPORT_API __attribute__ ((visibility("default")))

extern "C" {
  // 打开视频文件
  NDK_EXPORT_API void openVideo(const char *fileName, const char *sessionID, OpenVideoCompletionHandler completionHandler);

  // 取打开的视频流相关的数据
  NDK_EXPORT_API VideoStreamInfo  getVideoStreamInfo(const char* sessionID);

  // 开始播放
  NDK_EXPORT_API void startPlay(const char* sessionID);

  // 停止播放
  NDK_EXPORT_API void stopPlay(const char* sessionID);

  // 自动重播
  NDK_EXPORT_API void autoReplay(const char* sessionID);

  // 暂停播放
  NDK_EXPORT_API void suspendPlay(const char* sessionID);

  // 恢复播放
  NDK_EXPORT_API void resumePlay(const char* sessionID);

  // 跳到指定帧播放
  NDK_EXPORT_API void seekAtFrameIndex(const char* sessionID, const int frameIndex);

  // 根据帧索引获取纹理数据
  NDK_EXPORT_API TextureItem textureDataAtIndex(const char* sessionID, unsigned int index);

  // 更新指定帧索引的纹理数据
  NDK_EXPORT_API bool updateTextureData(const char* sessionID, const unsigned int index, TextureDataItems items);

  NDK_EXPORT_API const char* getVideoID(const char *fileName);

  NDK_EXPORT_API const char *getVideoFileName(void);

  NDK_EXPORT_API void debugEntry();

  NDK_EXPORT_API void dbgLog(const char* log);

  NDK_EXPORT_API const char* getDebugVideoFileName();

};


