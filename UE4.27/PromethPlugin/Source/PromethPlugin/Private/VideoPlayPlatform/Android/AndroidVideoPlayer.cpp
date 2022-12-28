// Fill out your copyright notice in the Description page of Project Settings.


#include "VideoPlayPlatform/Android/AndroidVideoPlayer.h"

TMap<FString, AndroidCallBackParam> AndroidVideoPlayer::OpenCallBackParam = TMap<FString, AndroidCallBackParam>();

AndroidVideoPlayer::AndroidVideoPlayer()
{
	//ExecuteLicenseKeyAuthorizationAPI = executeLicenseKeyAuthorization;
	
	OpenVideoAPI = openVideo;
	StartPlayAPI = startPlay;
	StopPlayAPI = stopPlay;
	SuspendPlayAPI = suspendPlay;
	ResumePlayAPI = resumePlay;
	SeekAtFrameIndexAPI = seekAtFrameIndex;
	TextureDataAtIndexAPI = textureDataAtIndex;
	GetVideoStreamInfoAPI = getVideoStreamInfo;
	AutoReplayAPI = autoReplay;


	MeshObjectAtIndexAPI = meshObjectAtIndex;
	GetMeshStreamInfoAPI = getMeshStreamInfo;

}

void AndroidVideoPlayer::SetVideoKey(FString VideoKey)
{
	//ExecuteLicenseKeyAuthorizationAPI(TCHAR_TO_UTF8(*VideoKey), "ue");
}

void AndroidVideoPlayer::OpenVideo(FString VideoPath, TFunction<void(bool OpenSucceed, FString ID)> OpenVideoCallBackFun)
{
	FString ID = UCPromethBlueprintLib::GetNewName();
	UCPromethBlueprintLib::PromethDebug("VideoPath :   " + VideoPath, IVideoPlayer::VideoPlayerDebug, "VideoPlayer_OpenVideo");
	UCPromethBlueprintLib::PromethDebug("FStrID :   " + ID, IVideoPlayer::VideoPlayerDebug, "VideoPlayer_OpenVideo");

	this->OpenCallBackParam.Add(ID, { true, OpenVideoCallBackFun });
	if(this->OpenVideoAPI) OpenVideoAPI(TCHAR_TO_UTF8(*VideoPath), TCHAR_TO_UTF8(*ID), this->OpenVideoCallBack);
	else UCPromethBlueprintLib::PromethDebug("OpenVideoAPI is Nullptr!!!!!!!!!!!!!!!!!!", IVideoPlayer::VideoPlayerDebug, "OpenVideo");
}

VideoBaseParam AndroidVideoPlayer::GetVideoParam(FString ID)
{
	auto PicParam = GetVideoStreamInfoAPI(TCHAR_TO_UTF8(*ID));
	VideoBaseParam Res;
	Res.FrameCount = PicParam.frameCount;
	Res.VideoWidth = PicParam.width;
	Res.VideoHeight = PicParam.height;
	return Res;
}

void AndroidVideoPlayer::CloseVideo(FString ID)
{
	StopPlayAPI(TCHAR_TO_UTF8(*ID));
	this->OpenCallBackParam.Remove(TCHAR_TO_UTF8(*ID));

}

void AndroidVideoPlayer::Play(FString ID)
{
	StartPlayAPI(TCHAR_TO_UTF8(*ID));
}

void AndroidVideoPlayer::RePlay(FString ID)
{
	AutoReplayAPI(TCHAR_TO_UTF8(*ID));
}

bool AndroidVideoPlayer::FrameIsReady(int32 Frame, FString ID)
{
	bool TextureSucceed = TextureDataAtIndexAPI(TCHAR_TO_UTF8(*ID), Frame).isValidData;

	return TextureSucceed;
}

bool AndroidVideoPlayer::UpdateMeshAndTexture(int32 Frame, FRHICommandListImmediate& RHICmdList, FString ID, TFunction<void()> UpdateCallBackFun)
{
	return false;
}

void AndroidVideoPlayer::SeekFrame(int32 Frame, FString ID)
{
	SeekAtFrameIndexAPI(TCHAR_TO_UTF8(*ID), Frame);
}

void AndroidVideoPlayer::CreateMesh(FRHICommandListImmediate& RHICmdList, int Frame, UCatchlightMeshComponent* Mesh, MeshParam* InputMeshParam, UMaterialInterface* Material, FString ID)
{
	auto ObjMeshData = this->MeshObjectAtIndexAPI(TCHAR_TO_UTF8(*ID), Frame);
	//MeshParam InputMeshParam;
	InputMeshParam->normals = ObjMeshData->pNormalsList->data();
	InputMeshParam->triangles = ObjMeshData->pTriangleList->data();
	InputMeshParam->uvs = ObjMeshData->pUVList->data();
	InputMeshParam->vertices = ObjMeshData->pVertexList->data();

	InputMeshParam->normalslen = ObjMeshData->pNormalsList->size();
	InputMeshParam->uvslen = ObjMeshData->pUVList->size();
	InputMeshParam->verticeslen = ObjMeshData->pVertexList->size();
	InputMeshParam->triangleslen = ObjMeshData->pTriangleList->size();

	Mesh->UpdateMesh(InputMeshParam, RHICmdList, Material);
	Mesh->SetVisibility(true);
}


void AndroidVideoPlayer::OpenVideoCallBack(bool success, const char* guid)
{
	AndroidVideoPlayer::OpenCallBackParam[guid].OpenSucceed = success;
	AndroidVideoPlayer::OpenCallBackParam[guid].TargetCallBackFun(success, guid);
	AndroidVideoPlayer::OpenCallBackParam.Remove(guid);
	
}