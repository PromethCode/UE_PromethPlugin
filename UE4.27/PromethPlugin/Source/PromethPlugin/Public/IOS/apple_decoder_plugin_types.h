//
//  apple_decoder_plugin_types.h
//  apple_decoder_plugin
//
//  Created by Angel on 2022/7/6.
//

#pragma once

//extern "C" {
//
//#pragma pack(1)
//
//typedef struct _TextureDescriptor {
//    void* nativeTex;                       // id<MTLTextue>
//    bool isValidData;                       // 数据有效
//    unsigned int index;                   // 纹理帧数据索引 这个用于分析排查问题 保留字段
//} TextureDescriptor;
//
////    typedef struct _VideoStreamInfo{
////        unsigned int width;
////        unsigned int height;
////        double fps;
////        int64_t duration;
////        uint64_t frameCount;
////    } VideoStreamInfo;
//
//typedef struct _VideoStreamInfo{
//    unsigned int width;
//    unsigned int height;
//    double fps;
//    unsigned long duration;
//    unsigned long frameCount;
//} VideoStreamInfo;
//
//#pragma pack()
//
//// 打开文件成功回调函数
//typedef void (*OpenVideoCompletionHandler)(bool success, const char* decoderID);
//
//}
//
//  apple_decoder_plugin_types.h
//  apple_decoder_plugin
//
//  Created by Angel on 2022/7/6.
//



#include <CoreVideo/CVMetalTexture.h>

extern "C" {

    #pragma pack(1)

    typedef struct _TextureDescriptor {
        void* nativeTex;                       // id<MTLTextue>
        bool isValidData;                       // 数据有效
        unsigned int index;                   // 纹理帧数据索引 这个用于分析排查问题 保留字段
    } TextureDescriptor;

    typedef struct _UE418TextureDescriptor {
        CVMetalTextureRef textureRef;                       // id<MTLTextue>
        bool isValidData;                       // 数据有效
        unsigned int index;                   // 纹理帧数据索引 这个用于分析排查问题 保留字段
    } UE418TextureDescriptor;


    //    typedef struct _VideoStreamInfo{
    //        unsigned int width;
    //        unsigned int height;
    //        double fps;
    //        int64_t duration;
    //        uint64_t frameCount;
    //    } VideoStreamInfo;

    typedef struct _VideoStreamInfo{
        unsigned int width;
        unsigned int height;
        double fps;
        unsigned long duration;
        unsigned long frameCount;
    } VideoStreamInfo;

    #pragma pack()

    // 打开文件成功回调函数
    typedef void (*OpenVideoCompletionHandler)(bool success, const char* decoderID);

}
