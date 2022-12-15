//
// Created by Z690 on 2022/9/9.
//

#pragma once

extern "C" {
    #pragma pack(1)
    typedef struct __VideoStreamInfo {
        int width;
        int height;
        double fps;
        unsigned long duration;
        long frameCount;
    } VideoStreamInfo;

    typedef struct __TextureDataItems {
        size_t yDataBytes;
        uint8_t *yData;
        size_t uvDataSize;
        uint8_t *uvData;
    } TextureDataItems;

    typedef struct _TextureItem {
        uint8_t *yData;
        uint8_t *uvData;
        bool isValidData;
        unsigned int index;
    }TextureItem;
    #pragma pack()

    typedef void (*OpenVideoCompletionHandler)(bool success, const char *decoderID);
}