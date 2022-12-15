//
//  apple_decoder_plugin.h
//  apple_decoder_plugin
//
//  Created by Angel on 2022/6/10.
//

#pragma once
#include "apple_decoder_plugin_types.h"

//#ifdef TARGET_OS_MAC
//    #define PLUGIN_EXPORT_API    extern "C"
//#else
 //   #define PLUGIN_EXPORT_API   /*  */
//#endif

#define PLUGIN_EXPORT_API  

extern "C"{
    // 打开文件 需要传递一个完整路径的文件名
    PLUGIN_EXPORT_API void openVideo(const char *videoFullPath, const char* sessionID, OpenVideoCompletionHandler completion);
    
    // 获取打开文件的流信息数据
    PLUGIN_EXPORT_API VideoStreamInfo  getVideoStreamInfo(const char* decoderID);
    
    // 开始播放
    PLUGIN_EXPORT_API void startPlay(const char* decoderID);
    
    // 停止播放
    PLUGIN_EXPORT_API void stopPlay(const char* decoderID);
    
    // 自动重播
    PLUGIN_EXPORT_API void autoReplay(const char* decoderID);
    
    // 暂停播放
    PLUGIN_EXPORT_API void suspendPlay(const char* decoderID);
    
    // 恢复播放
    PLUGIN_EXPORT_API void resumePlay(const char* decoderID);
    
    // 跳到指定帧播放
    PLUGIN_EXPORT_API void seekAtFrameIndex(const char* decoderID, const int frameIndex);
    
    // 根据帧索引获取纹理数据
    PLUGIN_EXPORT_API TextureDescriptor textureDataAtIndex(const char* decoderID, unsigned int index);
    
    
    PLUGIN_EXPORT_API void dbgLog(const char* log);
   

    PLUGIN_EXPORT_API const char *getDebugVideoFileName(void);
    
};
// 初始化bugly
//void initBugly(void);

// 工具函数 辅助接口，用于测试代码
//long long videoDuration(void);
//uint64_t videoFramesCount(void);
//void seekAtTime(long long timeValue);
//unsigned int frameIndexAtTime(double time);


