// Fill out your copyright notice in the Description page of Project Settings.


//#include "ReadPromethFun.h"
//
//ReadPromethFun::ReadPromethFun()
//{
//}
//
//ReadPromethFun::~ReadPromethFun()
//{
//}
//void ReadPromethFun::InitAPIFunPtr()
//{
//#if PLATFORM_WINDOWS
//	this->PromethModule = static_cast<FPromethPluginModule*>(FModuleManager::Get().GetModule("PromethPlugin"));
//	if (this->PromethModule) {
//		OpenVideoAPI					= this->PromethModule->GetMeshPlayerPluginFunction<OpenVideo>("openVideo");
//		StartPlayAPI						= this->PromethModule->GetMeshPlayerPluginFunction<StartPlay>("startPlay");
//		StopPlayAPI						= this->PromethModule->GetMeshPlayerPluginFunction<StopPlay>("stopPlay");
//		SuspendPlayAPI					= this->PromethModule->GetMeshPlayerPluginFunction<SuspendPlay>("suspendPlay");
//		ResumePlayAPI					= this->PromethModule->GetMeshPlayerPluginFunction<ResumePlay>("resumePlay");
//		SeekAtFrameIndexAPI		= this->PromethModule->GetMeshPlayerPluginFunction<SeekAtFrameIndex>("seekAtFrameIndex");
//		TextureDataAtIndexAPI		= this->PromethModule->GetMeshPlayerPluginFunction<TextureDataAtIndex>("textureDataAtIndex");
//		GetVideoStreamInfoAPI		= this->PromethModule->GetMeshPlayerPluginFunction<GetVideoStreamInfo>("getVideoStreamInfo");
//		AutoReplayAPI					= this->PromethModule->GetMeshPlayerPluginFunction<AutoReplay>("autoReplay");
//
//		OpenMeshFileAPI				= this->PromethModule->GetMeshPlayerPluginFunction<_openMeshFile>("openMeshFile");
//		StartReadAPI						= this->PromethModule->GetMeshPlayerPluginFunction<_startRead>("startRead");
//		StressAPI							= this->PromethModule->GetMeshPlayerPluginFunction<_stress>("stress");
//		StopReadAPI						= this->PromethModule->GetMeshPlayerPluginFunction<_stopRead>("stopRead");
//		SeekAtIndexAPI					= this->PromethModule->GetMeshPlayerPluginFunction<_seekAtIndex>("seekAtIndex");
//		SuspendReadAPI				= this->PromethModule->GetMeshPlayerPluginFunction<_suspendRead>("suspendRead");
//		ResumeReadAPI					= this->PromethModule->GetMeshPlayerPluginFunction<_resumeRead>("resumeRead");
//		MeshObjectAtIndexAPI		= this->PromethModule->GetMeshPlayerPluginFunction<_meshObjectAtIndex>("meshObjectAtIndex");
//		GetMeshStreamInfoAPI		= this->PromethModule->GetMeshPlayerPluginFunction<_getMeshStreamInfo>("getMeshStreamInfo");
//		GetMeshSizeItemInfoAPI	= this->PromethModule->GetMeshPlayerPluginFunction<_getMeshSizeItemInfo>("getMeshSizeItemInfo");
//		UpdateMeshDataAPI			= this->PromethModule->GetMeshPlayerPluginFunction<_updateMeshData>("updateMeshData");
//
//		ExecuteLicenseKeyAuthorizationAPI = this->PromethModule->GetMeshPlayerPluginFunction<ExecuteLicenseKeyAuthorization>("executeLicenseKeyAuthorization");
//
//		GetPublicLogAPI = this->PromethModule->GetMeshPlayerPluginFunction<_GetPublicLog>("GetPublicLog");
//		GetMeshPublicLogAPI = this->PromethModule->GetMeshPlayerPluginFunction<_GetMeshPublicLog>("GetMeshPublicLog");
//	}
//	else {
//		UE_LOG(LogTemp, Warning, TEXT("APILoad Failure!"));
//	}
//#elif PLATFORM_ANDROID
//	//OpenVideoAPI = [](const char* videoFullPath, OpenVideoCompletionHandler completion)->bool {return 1; };
//
//	OpenVideoAPI = openVideo;
//	StartPlayAPI = startPlay;
//	StopPlayAPI = stopPlay;
//	SuspendPlayAPI = suspendPlay;
//	ResumePlayAPI = resumePlay;
//	SeekAtFrameIndexAPI = seekAtFrameIndex;
//	TextureDataAtIndexAPI = textureDataAtIndex;
//	GetVideoStreamInfoAPI = getVideoStreamInfo;
//	AutoReplayAPI = autoReplay;
//
//	OpenMeshFileAPI = openMeshFile;
//	StartReadAPI = startRead;
//	StressAPI = stress;
//	StopReadAPI = stopRead;
//	SeekAtIndexAPI = seekAtIndex;
//	SuspendReadAPI = suspendRead;
//	ResumeReadAPI = resumeRead;
//	MeshObjectAtIndexAPI = meshObjectAtIndex;
//	GetMeshStreamInfoAPI = getMeshStreamInfo;
//	GetMeshSizeItemInfoAPI = getMeshSizeItemInfo;
//	//UpdateMeshDataAPI = updateMeshData;
//#elif PLATFORM_IOS
//	OpenVideoAPI						= openVideo;
//	StartPlayAPI							= startPlay;
//	StopPlayAPI							= stopPlay;
//	SuspendPlayAPI						= suspendPlay;
//	ResumePlayAPI						= resumePlay;
//	SeekAtFrameIndexAPI			= seekAtFrameIndex;
//	TextureDataAtIndexAPI			= ue418TextureDataAtIndex;
//	GetVideoStreamInfoAPI			= getVideoStreamInfo;
//	AutoReplayAPI						= autoReplay;
//#endif
//
//}
//ReadPromethFun* ReadPromethFun::ReadDecodeVideoAPIInstance = nullptr;
//ReadPromethFun* ReadPromethFun::GetAPIInst()
//{
//	if (ReadPromethFun::ReadDecodeVideoAPIInstance) {
//		if (ReadPromethFun::ReadDecodeVideoAPIInstance->PromethModule)
//			return ReadPromethFun::ReadDecodeVideoAPIInstance;
//		ReadPromethFun::ReadDecodeVideoAPIInstance->InitAPIFunPtr();
//		return ReadPromethFun::ReadDecodeVideoAPIInstance;
//	}
//	else {
//		ReadPromethFun::ReadDecodeVideoAPIInstance = new ReadPromethFun;
//		ReadPromethFun::ReadDecodeVideoAPIInstance->InitAPIFunPtr();
//		return ReadDecodeVideoAPIInstance;
//	}
//}


