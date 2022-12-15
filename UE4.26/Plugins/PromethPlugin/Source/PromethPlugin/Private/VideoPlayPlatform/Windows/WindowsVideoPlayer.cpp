// Fill out your copyright notice in the Description page of Project Settings.


#include "VideoPlayPlatform/Windows/WindowsVideoPlayer.h"
#include "CLAMBDAThread.h"
#include "..\..\..\Public\VideoPlayPlatform\Windows\WindowsVideoPlayer.h"


TMap<FString, CallBackParam> WindowsVideoPlayer::OpenCallBackParam = TMap<FString, CallBackParam>();
TMap<FString, TFunction<void(bool OpenSucceed, FString ID)>> OpenCallBackFun = TMap<FString, TFunction<void(bool OpenSucceed, FString ID)>>();


WindowsVideoPlayer::WindowsVideoPlayer()
{
	this->PromethModule = static_cast<FPromethPluginModule*>(FModuleManager::Get().GetModule("PromethPlugin"));
	if (this->PromethModule) {
		
		ExecuteLicenseKeyAuthorizationAPI = this->PromethModule->GetMeshPlayerPluginFunction<ExecuteLicenseKeyAuthorization>("executeLicenseKeyAuthorization");

		OpenVideoAPI = this->PromethModule->GetMeshPlayerPluginFunction<_OpenVideo>("openVideo");
		StartPlayAPI = this->PromethModule->GetMeshPlayerPluginFunction<StartPlay>("startPlay");
		StopPlayAPI = this->PromethModule->GetMeshPlayerPluginFunction<StopPlay>("stopPlay");
		SuspendPlayAPI = this->PromethModule->GetMeshPlayerPluginFunction<SuspendPlay>("suspendPlay");
		ResumePlayAPI = this->PromethModule->GetMeshPlayerPluginFunction<ResumePlay>("resumePlay");
		SeekAtFrameIndexAPI = this->PromethModule->GetMeshPlayerPluginFunction<SeekAtFrameIndex>("seekAtFrameIndex");
		TextureDataAtIndexAPI = this->PromethModule->GetMeshPlayerPluginFunction<TextureDataAtIndex>("textureDataAtIndex");
		GetVideoStreamInfoAPI = this->PromethModule->GetMeshPlayerPluginFunction<GetVideoStreamInfo>("getVideoStreamInfo");
		AutoReplayAPI = this->PromethModule->GetMeshPlayerPluginFunction<AutoReplay>("autoReplay");

		OpenMeshFileAPI = this->PromethModule->GetMeshPlayerPluginFunction<_openMeshFile>("openMeshFile");
		StartReadAPI = this->PromethModule->GetMeshPlayerPluginFunction<_startRead>("startRead");
		StressAPI = this->PromethModule->GetMeshPlayerPluginFunction<_stress>("stress");
		StopReadAPI = this->PromethModule->GetMeshPlayerPluginFunction<_stopRead>("stopRead");
		SeekAtIndexAPI = this->PromethModule->GetMeshPlayerPluginFunction<_seekAtIndex>("seekAtIndex");
		SuspendReadAPI = this->PromethModule->GetMeshPlayerPluginFunction<_suspendRead>("suspendRead");
		ResumeReadAPI = this->PromethModule->GetMeshPlayerPluginFunction<_resumeRead>("resumeRead");
		MeshObjectAtIndexAPI = this->PromethModule->GetMeshPlayerPluginFunction<_meshObjectAtIndex>("meshObjectAtIndex");
		GetMeshStreamInfoAPI = this->PromethModule->GetMeshPlayerPluginFunction<_getMeshStreamInfo>("getMeshStreamInfo");
		GetMeshSizeItemInfoAPI = this->PromethModule->GetMeshPlayerPluginFunction<_getMeshSizeItemInfo>("getMeshSizeItemInfo");
		UpdateMeshDataAPI = this->PromethModule->GetMeshPlayerPluginFunction<_updateMeshData>("updateMeshData");

	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("APILoad Failure!"));
	}
}



void WindowsVideoPlayer::SetVideoKey(FString VideoKey)
{
	ExecuteLicenseKeyAuthorizationAPI(TCHAR_TO_UTF8(*VideoKey), "ue");
}

void WindowsVideoPlayer::OpenVideo(FString VideoPath, TFunction<void(bool OpenSucceed, FString ID)> OpenVideoCallBackFun)
{
	char* ID = TCHAR_TO_UTF8(*UCPromethBlueprintLib::GetNewName());
	this->OpenCallBackParam.Add(ID, {0, true, OpenVideoCallBackFun });
	UCPromethBlueprintLib::PromethDebug("Add  AllPromethActor Num ! :   " + FString::FromInt(this->OpenCallBackParam.Num()), IVideoPlayer::VideoPlayerDebug, "OpenVideo", true, 20);
	OpenVideoAPI(TCHAR_TO_UTF8(*VideoPath), ID, this->OpenVideoCallBack);
	OpenMeshFileAPI(TCHAR_TO_UTF8(*VideoPath), ID, this->OpenMeshCallBack);
}

VideoBaseParam WindowsVideoPlayer::GetVideoParam(FString ID)
{
	auto PicParam = GetVideoStreamInfoAPI(TCHAR_TO_UTF8(*ID));
	VideoBaseParam Res;
	Res.FrameCount = PicParam.frameCount;
	Res.VideoWidth = PicParam.width;
	Res.VideoHeight= PicParam.height;
	return Res;
}
void WindowsVideoPlayer::CloseVideo(FString ID)
{
	StopReadAPI(TCHAR_TO_UTF8(*ID));
	StopPlayAPI(TCHAR_TO_UTF8(*ID));
	UCPromethBlueprintLib::PromethDebug("Remove AllPromethActor Num ! :   " + FString::FromInt(this->OpenCallBackParam.Num()), IVideoPlayer::VideoPlayerDebug, "OpenVideo", true, 20);

}

void WindowsVideoPlayer::Play(FString ID)
{
	StartPlayAPI(TCHAR_TO_UTF8(*ID));
	StartReadAPI(TCHAR_TO_UTF8(*ID));
	this->OpenCallBackParam.Remove(TCHAR_TO_UTF8(*ID));
}

void WindowsVideoPlayer::RePlay(FString ID)
{
	AutoReplayAPI(TCHAR_TO_UTF8(*ID));
	StressAPI(TCHAR_TO_UTF8(*ID));
}

bool WindowsVideoPlayer::FrameIsReady(int32 Frame, FString ID)
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

bool WindowsVideoPlayer::UpdateMeshAndTexture(int32 Frame, FRHICommandListImmediate& RHICmdList, FString ID, TFunction<void()> UpdateCallBackFun)
{
	
	return false;
}

void WindowsVideoPlayer::SeekFrame(int32 Frame, FString ID)
{
	SeekAtFrameIndexAPI(TCHAR_TO_UTF8(*ID), Frame);
	SeekAtIndexAPI(TCHAR_TO_UTF8(*ID), Frame);
	
}

void WindowsVideoPlayer::CreateMesh(FRHICommandListImmediate& RHICmdList, int Frame, UCatchlightMeshComponent* Mesh, MeshParam* InputMeshParam, UMaterialInterface* Material, FString ID)
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



void WindowsVideoPlayer::OpenVideoCallBack(bool success, const char* guid)
{
	int32 CallBackNum = ++WindowsVideoPlayer::OpenCallBackParam[guid].Count;
	WindowsVideoPlayer::OpenCallBackParam[guid].OpenSucceed &= success;
	if(CallBackNum >= 2){
		WindowsVideoPlayer::OpenCallBackParam[guid].TargetCallBackFun(success, guid);
		WindowsVideoPlayer::OpenCallBackParam.Remove(guid);
	}
}

void WindowsVideoPlayer::OpenMeshCallBack(bool success, const char* guid)
{
	int32 CallBackNum = ++WindowsVideoPlayer::OpenCallBackParam[guid].Count;
	WindowsVideoPlayer::OpenCallBackParam[guid].OpenSucceed &= success;
	if (CallBackNum >= 2) {
		WindowsVideoPlayer::OpenCallBackParam[guid].TargetCallBackFun(success, guid);
		WindowsVideoPlayer::OpenCallBackParam.Remove(guid);
	}
}
