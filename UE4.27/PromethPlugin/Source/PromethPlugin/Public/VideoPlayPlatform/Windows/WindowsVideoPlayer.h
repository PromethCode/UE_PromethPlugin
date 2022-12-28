// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "../mesh_decoder_types.h"
#include "../texture_decoder_types.h"
#include "../IVideoPlayer.h"
#include "PromethPlugin.h"
#include "Slate/SlateTextures.h"
#include "RHICommandList.h"

// OpenCallBackParam

typedef struct _CallBackParam {
	int32 Count = 0;
	bool OpenSucceed = true;				// 总时长
	TFunction<void(bool OpenSucceed, FString ID)> TargetCallBackFun;		//总帧数
} CallBackParam;

// Key
typedef void (*ExecuteLicenseKeyAuthorization)(const char* licenseKey, const char* keyType);

// Texture
typedef void(*_OpenVideo)(const char* videoFullPath, const char* sessionID, OpenVideoCompletionHandler completion);
typedef void (*StartPlay)(const char* decoderID);
typedef void (*StopPlay)(const char* decoderID);
typedef void (*SuspendPlay)(const char* decoderID);
typedef void (*ResumePlay)(const char* decoderID);
typedef void (*SeekAtFrameIndex)(const char* decoderID, const int frameIndex);
typedef TextureDescriptor(*TextureDataAtIndex)(const char* decoderID, unsigned int index);
typedef VideoStreamInfo(*GetVideoStreamInfo)(const char* decoderID);
typedef void(*AutoReplay)(const char* decoderID);

// Mesh
typedef void (*_openMeshFile)(const char* fileName, const char* sessionID, OpenMeshStreamCompletionHandler completionHandler);
typedef void (*_startRead)(const char* decoderID);
typedef void (*_stress)(const char* decoderID);
typedef void (*_stopRead)(const char* decoderID);
typedef void (*_seekAtIndex)(const char* decoderID, unsigned int index);
typedef void (*_suspendRead)(const char* decoderID);
typedef void (*_resumeRead)(const char* decoderID);
typedef Mesh* (*_meshObjectAtIndex)(const char* decoderID, unsigned int index);
typedef MeshStreamInfo(*_getMeshStreamInfo)(const char* decoderID);
typedef MeshItemSizeInfo(*_getMeshSizeItemInfo)(const char* decoderID, unsigned int index);
typedef void (*_updateMeshData)(const char* decoderID, unsigned int index, MeshItemPointers pointers);




class PROMETHPLUGIN_API WindowsVideoPlayer: IVideoPlayer
{
public:
	WindowsVideoPlayer();
public:
	virtual void SetVideoKey(FString VideoKey);
	virtual void OpenVideo(FString VideoPath, TFunction<void(bool OpenSucceed, FString ID)> OpenVideoCallBackFun);
	virtual VideoBaseParam GetVideoParam(FString ID);
	virtual void CloseVideo(FString ID);
	virtual void Play(FString ID);
	virtual void RePlay(FString ID);
	virtual bool FrameIsReady(int32 Frame, FString ID);
	virtual bool UpdateMeshAndTexture(int32 Frame, FRHICommandListImmediate& RHICmdList, FString ID, TFunction<void()> UpdateCallBackFun = []() {});
	virtual void SeekFrame(int32 Frame, FString ID);
	virtual void CreateMesh(FRHICommandListImmediate& RHICmdList, int Frame, UCatchlightMeshComponent* Mesh, MeshParam* InputMeshParam, UMaterialInterface* Material, FString ID);

// OpenCallBack
public:
	static void OpenVideoCallBack(bool success, const char* guid);
	static void OpenMeshCallBack(bool success, const char* guid);
	static TMap<FString, CallBackParam> OpenCallBackParam;


// API
public:
	ExecuteLicenseKeyAuthorization ExecuteLicenseKeyAuthorizationAPI;

	_OpenVideo	OpenVideoAPI;
	StartPlay		StartPlayAPI;
	StopPlay StopPlayAPI;
	SuspendPlay SuspendPlayAPI;
	ResumePlay ResumePlayAPI;
	SeekAtFrameIndex SeekAtFrameIndexAPI;
	TextureDataAtIndex TextureDataAtIndexAPI;
	GetVideoStreamInfo GetVideoStreamInfoAPI;
	AutoReplay AutoReplayAPI;

	_openMeshFile OpenMeshFileAPI;
	_startRead StartReadAPI;
	_stress StressAPI;
	_stopRead StopReadAPI;
	_seekAtIndex SeekAtIndexAPI;
	_suspendRead SuspendReadAPI;
	_resumeRead ResumeReadAPI;
	_meshObjectAtIndex MeshObjectAtIndexAPI;
	_getMeshStreamInfo GetMeshStreamInfoAPI;
	_getMeshSizeItemInfo GetMeshSizeItemInfoAPI;
	_updateMeshData UpdateMeshDataAPI;

public:
	FPromethPluginModule* PromethModule;

};
