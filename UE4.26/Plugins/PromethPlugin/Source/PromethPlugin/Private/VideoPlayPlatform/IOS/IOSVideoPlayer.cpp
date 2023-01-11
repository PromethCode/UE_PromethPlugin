// Fill out your copyright notice in the Description page of Project Settings.


#include "VideoPlayPlatform/IOS/IOSVideoPlayer.h"

IOSVideoPlayer::IOSVideoPlayer()
{
	ExecuteLicenseKeyAuthorizationAPI = executeLicenseKeyAuthorization;

	OpenVideoAPI = openVideo;
	StartPlayAPI = startPlay;
	StopPlayAPI = stopPlay;
	SuspendPlayAPI = suspendPlay;
	ResumePlayAPI = resumePlay;
	SeekAtFrameIndexAPI = seekAtFrameIndex;
	TextureDataAtIndexAPI = textureDataAtIndex;
	GetVideoStreamInfoAPI = getVideoStreamInfo;
	AutoReplayAPI = autoReplay;

	OpenMeshFileAPI = openMeshFile;
	StartReadAPI = startRead;
	StressAPI = stress;
	StopReadAPI = stopRead;
	SeekAtIndexAPI = seekAtIndex;
	SuspendReadAPI = suspendRead;
	ResumeReadAPI = resumeRead;
	MeshObjectAtIndexAPI = meshObjectAtIndex;
	GetMeshStreamInfoAPI = getMeshStreamInfo;
	GetMeshSizeItemInfoAPI = getMeshSizeItemInfo;
	//UpdateMeshDataAPI = updateMeshData;
}


void IOSVideoPlayer::SetVideoKey(FString VideoKey)
{
	ExecuteLicenseKeyAuthorizationAPI(TCHAR_TO_UTF8(*VideoKey), "ue");
}

void IOSVideoPlayer::OpenVideo(FString VideoPath, TFunction<void(bool OpenSucceed, FString ID)> OpenVideoCallBackFun)
{
	char* ID = TCHAR_TO_UTF8(*UCPromethBlueprintLib::GetNewName());
	this->OpenCallBackParam.Add(ID, { 0, true, OpenVideoCallBackFun });
	UCPromethBlueprintLib::PromethDebug("Add  AllPromethActor Num ! :   " + FString::FromInt(this->OpenCallBackParam.Num()), IVideoPlayer::VideoPlayerDebug, "OpenVideo", true, 20);
	OpenVideoAPI(TCHAR_TO_UTF8(*VideoPath), ID, this->OpenVideoCallBack);
	OpenMeshFileAPI(TCHAR_TO_UTF8(*VideoPath), ID, this->OpenMeshCallBack);
}

VideoBaseParam IOSVideoPlayer::GetVideoParam(FString ID)
{
	auto PicParam = GetVideoStreamInfoAPI(TCHAR_TO_UTF8(*ID));
	VideoBaseParam Res;
	Res.FrameCount = PicParam.frameCount;
	Res.VideoWidth = PicParam.width;
	Res.VideoHeight = PicParam.height;
	return Res;
}
void IOSVideoPlayer::CloseVideo(FString ID)
{
	StopReadAPI(TCHAR_TO_UTF8(*ID));
	StopPlayAPI(TCHAR_TO_UTF8(*ID));
	UCPromethBlueprintLib::PromethDebug("Remove AllPromethActor Num ! :   " + FString::FromInt(this->OpenCallBackParam.Num()), IVideoPlayer::VideoPlayerDebug, "OpenVideo", true, 20);

}

void IOSVideoPlayer::Play(FString ID)
{
	StartPlayAPI(TCHAR_TO_UTF8(*ID));
	StartReadAPI(TCHAR_TO_UTF8(*ID));
	this->OpenCallBackParam.Remove(TCHAR_TO_UTF8(*ID));
}

void IOSVideoPlayer::RePlay(FString ID)
{
	AutoReplayAPI(TCHAR_TO_UTF8(*ID));
	StressAPI(TCHAR_TO_UTF8(*ID));
}

bool IOSVideoPlayer::FrameIsReady(int32 Frame, FString ID)
{
	bool TextureSucceed = TextureDataAtIndexAPI(TCHAR_TO_UTF8(*ID), Frame).isValidData;
	bool MeshSucceed = (bool)GetMeshSizeItemInfoAPI(TCHAR_TO_UTF8(*ID), Frame).vertexCount;

	UCPromethBlueprintLib::PromethDebug(
		"Texture : " + FString::FromInt(TextureSucceed)
		+ " Mesh : " + FString::FromInt(MeshSucceed)
		+ " Frame: " + FString::FromInt(Frame)
		, this->VideoPlayerDebug, "FrameIsReady"
	);

	return TextureSucceed && MeshSucceed;
}

bool IOSVideoPlayer::UpdateMeshAndTexture(int32 Frame, FRHICommandListImmediate& RHICmdList, FString ID, TFunction<void()> UpdateCallBackFun)
{

	return false;
}

void IOSVideoPlayer::SeekFrame(int32 Frame, FString ID)
{
	SeekAtFrameIndexAPI(TCHAR_TO_UTF8(*ID), Frame);
	SeekAtIndexAPI(TCHAR_TO_UTF8(*ID), Frame);

}

void IOSVideoPlayer::CreateMesh(FRHICommandListImmediate& RHICmdList, int Frame, UCatchlightMeshComponent* Mesh, MeshParam* InputMeshParam, UMaterialInterface* Material, FString ID)
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



void IOSVideoPlayer::OpenVideoCallBack(bool success, const char* guid)
{
	int32 CallBackNum = ++IOSVideoPlayer::OpenCallBackParam[guid].Count;
	IOSVideoPlayer::OpenCallBackParam[guid].OpenSucceed &= success;
	if (CallBackNum >= 2) {
		IOSVideoPlayer::OpenCallBackParam[guid].TargetCallBackFun(success, guid);
		IOSVideoPlayer::OpenCallBackParam.Remove(guid);
	}
}

void IOSVideoPlayer::OpenMeshCallBack(bool success, const char* guid)
{
	int32 CallBackNum = ++IOSVideoPlayer::OpenCallBackParam[guid].Count;
	IOSVideoPlayer::OpenCallBackParam[guid].OpenSucceed &= success;
	if (CallBackNum >= 2) {
		IOSVideoPlayer::OpenCallBackParam[guid].TargetCallBackFun(success, guid);
		IOSVideoPlayer::OpenCallBackParam.Remove(guid);
	}
}