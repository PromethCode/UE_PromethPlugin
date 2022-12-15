// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "CPromethBlueprintLib.h"
#include "CoreMinimal.h"
#include "CatchLightMesh.h"

/**
 * 
 */

 struct VideoBaseParam
  {
	int32 VideoHeight;
	int32 VideoWidth;
	int32 FrameCount;
  };



class PROMETHPLUGIN_API IVideoPlayer
{
/******Function******/
public:
	virtual void SetVideoKey(FString VideoKey) = 0;
	virtual void OpenVideo(FString VideoPath, TFunction<void(bool OpenSucceed, FString ID)> OpenVideoCallBackFun) = 0;
	virtual void CloseVideo(FString ID) = 0;
	virtual void Play(FString ID) = 0;
	virtual void RePlay(FString ID) = 0;
	virtual bool FrameIsReady(int32 Frame, FString ID) = 0;
	virtual bool UpdateMeshAndTexture(int32 Frame, FRHICommandListImmediate& RHICmdList, FString ID,TFunction<void()> UpdateCallBackFun = [](){}) = 0;
	virtual void SeekFrame(int32 Frame, FString ID) = 0;
	virtual void CreateMesh(FRHICommandListImmediate& RHICmdList, int Frame, UCatchlightMeshComponent* Mesh, MeshParam* InputMeshParam, UMaterialInterface* Material,FString ID) = 0;
	virtual VideoBaseParam GetVideoParam(FString ID) = 0;
public:
	//void initTexture(UTexture2D** ptexture, int width, int height, EPixelFormat format);
	static bool VideoPlayerDebug;

};
