//
// Created by Z690 on 2022/9/9.
//

#pragma once
#include "CoreMinimal.h"

#if  PLATFORM_ANDROID
typedef struct __VideoStreamInfo {
	int width;
	int height;
	double fps;
	unsigned long duration;
	long frameCount;
} VideoStreamInfo;

typedef struct __TextureDataItems {
	size_t yDataBytes;
	uint8_t* yData;
	size_t uvDataSize;
	uint8_t* uvData;
} TextureDataItems;

typedef struct _TextureItem {
	uint8_t* yData;
	uint8_t* uvData;
	bool isValidData;
	unsigned int index;
}TextureItem;
#elif  PLATFORM_WINDOWS
struct VideoStreamInfo {
	int  width;
	int height;
	double fps;
	int64 duration;
	int64 frameCount;
};
typedef struct _TextureDescriptor {
	void* nativeTex;
	bool isValidData;
	unsigned int index;
} TextureDescriptor;
#elif PLATFORM_IOS || PLATFORM_MAC
#endif


 typedef void (*OpenVideoCompletionHandler)(bool success, const char *decoderID);
