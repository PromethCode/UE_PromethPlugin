// Fill out your copyright notice in the Description page of Project Settings.

#include "CPromethActor.h"

#include "Engine/Engine.h"
#include "CPromethBlueprintLib.h"
#include <thread>
#include "CLAMBDAThread.h"
//----------- Texture .h
#include "MediaAssets/Public/MediaSource.h"
#include "RenderingThread.h"
#include "RHIDefinitions.h"
#include "GlobalShader.h"
#include "Runtime/Engine/Classes/Engine/Texture.h"
#include "Runtime/Engine/Classes/Engine/TextureDefines.h"
#include "Runtime/Engine/Classes/Engine/Texture2D.h"
#include "Runtime/Engine/Public/TextureResource.h"
#include "Textures/SlateShaderResource.h"
#include "MediaShaders.h"
#include "PipelineStateCache.h"
#include "RHIStaticStates.h"
#include "SceneUtils.h"
#include "ImageUtils.h"
#include "HighResScreenshot.h"
#include "Slate/SlateTextures.h"

#include "RenderUtils.h"
//----------- Texture .h End

//----------- Mesh .h
#include "CatchLightMesh.h"
#include "Kismet/GameplayStatics.h"
#include "HAL/FileManagerGeneric.h"
#include <string>

#if PLATFORM_IOS
#include "IOS/AppleMovieTexture2DResource.h"
#import <AVFoundation/AVFoundation.h>

#include "../../ThirdParty/PromethPluginLibrary/IOS/CoreVideo.framework/Versions/A/Headers/CVMetalTextureCache.h"
#endif

//#include "Android/AndroidPlatformFile.h"
//----------- Mesh .h End
// ---------- Android File
//#include "Runtime\Core\Public\Android\AndroidPlatformFile.h"
// ---------- Android File End



TWeakObjectPtr<ACPromethActor> ACPromethActor::OpeningPromethActor = nullptr;
IVideoPlayer* ACPromethActor::PromethAPI = nullptr;
IVideoPlayer* ACPromethActor::GetPromethAPI()
{
if(!PromethAPI){
#if PLATFORM_WINDOWS
	ACPromethActor::PromethAPI = (IVideoPlayer*)(new WindowsVideoPlayer);
#elif PLATFORM_ANDROID
	ACPromethActor::PromethAPI = (IVideoPlayer*)(new AndroidVideoPlayer);
#elif PLATFORM_IOS //|| PLATFORM_MAC
	ACPromethActor::PromethAPI = (IVideoPlayer*)(new IOSVideoPlayer);
#endif
}
return PromethAPI;
}

int32 ACPromethActor::CallBackConst = 0;
TMap<FString, TPair<TWeakObjectPtr<ACPromethActor>, int32>> ACPromethActor::AllPromethActor = {};




// Sets default values
ACPromethActor::ACPromethActor()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	/*this->MeshData.pNormals = malloc(this->MaxVertex * 3 * sizeof(float));
	this->MeshData.pTriangles = malloc(this->MaxVertex * 9 * sizeof(int));
	this->MeshData.pUVs = malloc(this->MaxVertex * 2 * sizeof(float));
	this->MeshData.pVertex = malloc(this->MaxVertex * 3 * sizeof(float));*/



	// 根组件
	this->RootComp = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	SetRootComponent(this->RootComp);

	// 网格组件
	this->Mesh = CreateDefaultSubobject<UCatchlightMeshComponent>(TEXT("DynamicMesh"));
	this->Mesh->SetRenderCustomDepth(false);
	this->Mesh->SetupAttachment(RootComp);


	IVideoPlayer::VideoPlayerDebug = this->bDebugLog;

}

ACPromethActor::~ACPromethActor()
{
	if (this->MeshData.pNormals) {
		free(this->MeshData.pNormals);
		free(this->MeshData.pTriangles);
		free(this->MeshData.pUVs);
		free(this->MeshData.pVertex);
	}
	if (VideoTexture2D)
	{
		this->VideoTexture2D->RemoveFromRoot();
		this->VideoTexture2D->ConditionalBeginDestroy();

	}

}

// Called when the game starts or when spawned
void ACPromethActor::BeginPlay()
{
	this->GetPromethAPI()->SetVideoKey(TCHAR_TO_UTF8(*this->Keys));
	// 初始化材质
	if (!this->MaterialInst) {
#if PLATFORM_WINDOWS
		if (this->WinMaterial) {
			this->MaterialInst = UMaterialInstanceDynamic::Create(this->WinMaterial, this);
		}
		else UCPromethBlueprintLib::PromethDebug("Material Interface is nullptr!!!!", this->bDebugLog, "OpenVideoCompletionFun");
#elif PLATFORM_IOS
		if (this->IOSMaterial) {
			this->MaterialInst = UMaterialInstanceDynamic::Create(this->IOSMaterial, this);
		}
		else UCPromethBlueprintLib::PromethDebug("Material Interface is nullptr!!!!", this->bDebugLog, "OpenVideoCompletionFun");
#elif PLATFORM_ANDROID
		if (this->AndroidMaterial) {
			this->MaterialInst = UMaterialInstanceDynamic::Create(this->AndroidMaterial, this);
		}
		else UCPromethBlueprintLib::PromethDebug("Material Interface is nullptr!!!!", this->bDebugLog, "OpenVideoCompletionFun");
#endif
	}

	Super::BeginPlay();

}

void ACPromethActor::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);

	this->CloseVideo();
	if (this->MaterialInst)
	{
		this->MaterialInst->RemoveFromRoot();
		this->MaterialInst = nullptr;
	}
	if (this->pTexture) {
		ENQUEUE_RENDER_COMMAND(FreeMovieTexture)(
			[=](FRHICommandListImmediate& RHICmdList)
			{
				this->pTexture->ReleaseResource();
				delete (this->pTexture);
				this->pTexture = nullptr;
			});
	}
}
// Called every frame
void ACPromethActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	if (this->MaterialInst && this->VideoTexture2D)
		this->MaterialInst->SetTextureParameterValue("BaseTexture", this->VideoTexture2D);

	if(this->bNonAsynPlay){
		NonAsynSeek();
		NonAsynPlay();
	}
}



void ACPromethActor::OnConstruction(const FTransform& Transform)
{
	Super::OnConstruction(Transform);
	if (!this->Mesh->IsRegistered())
		this->Mesh->RegisterComponent();
	this->Mesh->UpdateLocalBounds();
	this->Mesh->SetRelativeScale3D(FVector(-100, 100, 100));

}

void ACPromethActor::TestFun()
{
	std::thread seekthread([=]() {
		for (int32 i = 0; i < 100; ++i) {
			FPlatformProcess::Sleep(0.5f);
			GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Red, TEXT("This is Num :") + FString::FromInt(i));
		}
		});
	seekthread.detach();
}



/***************************************************  BaseFunction   *****************************************************************/


void ACPromethActor::OpenVideoCompletionFun(bool Succeed, FString ID)
{
    UCPromethBlueprintLib::PromethDebug("Start OpenVideoCompletionFun !", this->bDebugLog, "OpenVideoCompletionFun");
	if(!Succeed){
		UCPromethBlueprintLib::PromethDebug("OpenFailure!!!!!!!!!", this->bDebugLog, "OpenVideoCompletionFun", false, 20.f, FColor::Red);
		this->bOpening = false;
		return;
	}
	this->VideoID = ID;

	this->bOpened = true;

	// 初始化纹理参数
	auto VideoParam = this->GetPromethAPI()->GetVideoParam(this->VideoID);
	this->VideoHeight = VideoParam.VideoHeight;
	this->VideoWidth = VideoParam.VideoWidth;
	this->FrameCount = VideoParam.FrameCount;

#if PLATFORM_WINDOWS
	initTexture(&this->VideoTexture2D, this->VideoWidth, this->VideoHeight, PF_B8G8R8A8, &this->pTexture);
#elif PLATFORM_ANDROID
	initTexture(&this->AndroidTexture2DY, this->VideoWidth, this->VideoHeight, PF_R8);
	initTexture(&this->AndroidTexture2DUV, this->VideoWidth / 2, this->VideoHeight / 2, PF_R8G8);
#elif PLATFORM_IOS
    initTexture(&this->VideoTexture2D, this->VideoWidth, this->VideoHeight, PF_B8G8R8A8);

#endif

	// 设置网格材质
	if (this->OpenMesh) this->Mesh->SetMaterial(0, this->MaterialInst);



	UCPromethBlueprintLib::PromethDebug("InitSucceed", this->bDebugLog, "OpenVideoCompletionFun", false);


	// 初始化播放参数  主要是为Play()函数
	this->PlayingTime = 0;
	this->NowFrame = 0;

	// 自动播放
	if (this->bAutoPlay) {
		this->Play();
	}
	this->bOpening = false;

}

bool ACPromethActor::OpenVideo(const FString& Path_, UMediaSource* InMediaSource, bool InbIsPathOpen, const FString& IOSFileName)
{
	if(this->bOpening){
		UCPromethBlueprintLib::PromethDebug("文件正在打开中 。。。 请勿重复操作OpenVideo() ", bDebugLog, "OpenVideo", false, 20, FColor::Orange);
		return false;
	}
	this->bOpening = true;

	// 关闭已打开的Video
	this->bPlaying = false;

	//if(this->PlayedNowVideo && this->bOpened)
	if (this->PlayedNowVideo && this->bOpened)
		this->CloseVideo();
	/**************************  TestPath *****************************/
#if PLATFORM_ANDROID

	extern FString GFilePathBase;
	UCPromethBlueprintLib::PromethDebug("AndroidPath: " + GFilePathBase, bDebugLog, "OpenVideo", false, 20);
	UCPromethBlueprintLib::PromethDebug("AndroidPathObj: " + FPaths::ProjectContentDir(), bDebugLog, "OpenVideo", false, 20);
	if (FFileManagerGeneric::Get().FileExists(*Path_))
		UCPromethBlueprintLib::PromethDebug("Path is Vaild", bDebugLog, "OpenVideo", false, 20);

#endif
	TArray<FString> Files;

	UCPromethBlueprintLib::ScanDirectory(Files, FPaths::ProjectPersistentDownloadDir() + "/", "*");
	for (auto i : Files)
		UCPromethBlueprintLib::PromethDebug("HavePath: " + i, bDebugLog, "OpenVideo", false, 20);
	/**************************TestPathEnd*****************************/
	//PathToAndroidPaths()
	// 获取文件路径
#if PLATFORM_WINDOWS
	this->VideoPath = InbIsPathOpen ? Path_ : InMediaSource->GetUrl().RightChop(7);
#elif PLATFORM_IOS || PLATFORM_MAC
    //this->VideoPath = IOSFileName;
    this->VideoPath = Path_;

#elif PLATFORM_ANDROID
    this->VideoPath = Path_;
#endif
    if (this->VideoPath.IsEmpty()){
        UCPromethBlueprintLib::PromethDebug("The Path is Empty!!!!!!!!!!!", bDebugLog, "OpenVideo", false, 20, FColor::Red);
		this->bOpening = false;
		return false;
    }
    FString OpenStr;
#if PLATFORM_WINDOWS
	if (this->VideoPath[0] == '.')
		OpenStr = FPaths::ProjectContentDir() + this->VideoPath.RightChop(2);
	else
		OpenStr = this->VideoPath;

#elif PLATFORM_IOS || PLATFORM_MAC
    /*
    std::string home_path = std::string([NSHomeDirectory() UTF8String]);
    std::string target_path = home_path + "/tmp/" + TCHAR_TO_UTF8(*IOSFileName) + ".mp4";
    OpenStr = target_path.c_str();
    UCPromethBlueprintLib::PromethDebug(OpenStr, bDebugLog, "OpenVideo", false, 20);
    UCPromethBlueprintLib::PromethDebug((FFileManagerGeneric::Get().FileExists(*OpenStr) ? "Video is  valid ! " : "Video is not valid ! ") + OpenStr, bDebugLog, "OpenVideo", false, 20);
     */
    OpenStr = this->VideoPath;

#elif PLATFORM_ANDROID
	OpenStr = this->VideoPath;

	UCPromethBlueprintLib::PromethDebug((FFileManagerGeneric::Get().FileExists(*OpenStr) ? "Video is  valid ! " : "Video is not valid ! ") + OpenStr, bDebugLog, "OpenVideo", false, 20);

#endif
	this->NeedOpenPath = OpenStr;
	/******test******/
	/*
	auto* fileopen = fopen(TCHAR_TO_UTF8(*OpenStr), "r");
	UCPromethBlueprintLib::PromethDebug((fileopen ? "VideoOpen  is  valid ! " : "VideoOpen is not valid ! ") + OpenStr, bDebugLog, "OpenVideo", false, 20);
	*/
	/******test******/

#if PLATFORM_WINDOWS || PLATFORM_IOS
	if (!FFileManagerGeneric::Get().FileExists(*OpenStr)) {
		UCPromethBlueprintLib::PromethDebug("Video is not valid ! " + OpenStr, bDebugLog, "OpenVideo", false, 20);
		this->OpenVideoCompletion.Broadcast(false);
		this->bOpening = false;
		return false;
	}
#endif

	this->GetPromethAPI()->OpenVideo(OpenStr, [=](bool OpenSucceed, FString ID) {
		this->OpenVideoCompletionFun(OpenSucceed, ID);
	});


	return true;
}


void ACPromethActor::Play()
{
	if (!this->bOpened) { //判断是否已打开视频
		UCPromethBlueprintLib::PromethDebug("Playback failed because the video is not open ! ", bDebugLog, "Play", false);
		return;
	}
	if (this->bPlaying) {
		UCPromethBlueprintLib::PromethDebug(" 重复播放 ! ", bDebugLog, "Play", false);
		return;
	}
	if (this->bSeeking) {
		UCPromethBlueprintLib::PromethDebug(" 跳帧中--- ! ", bDebugLog, "Play", false);
		return;
	}

	this->bPlaying = true;
	this->PlayedNowVideo = true;
	this->UpdateTime = this->GetTime();

	// 判断是否为异步play  bNonAsynPlay为true则在Tick上执行
	if(this->bNonAsynPlay) return;

	FString PlayThread = LAMBDAThread::CreateObjectThread([=]() {
	LoopPlayStart:

		if (this->PlayingTime == 0) {
			if (this->isFinish()) {// 已播完后重播
				this->GetPromethAPI()->RePlay(this->VideoID);
			}
			else {// 第一次播放调StartPlay
				this->GetPromethAPI()->Play(this->VideoID);
			}
			this->NowFrame = 0;
			// 等待第0帧解码完成
			this->WaitFrameFun(0);
		}

		UCPromethBlueprintLib::PromethDebug("DataLoadSucceed ", bDebugLog, "WaitData", false);

		this->UpdateTime = this->GetTime();
		this->LastFrameTime = this->GetTime();

		while (this->bPlaying) {

			this->PlayingTime += (this->GetTime() - this->UpdateTime);
			this->UpdateTime = this->GetTime();
			if ((int)((float)this->PlayingTime / (1000. / (float)this->FPS)) > this->NowFrame && !this->bCreating) {
				// 获取底层解码情况
			
				bool LoadSucceed = this->GetPromethAPI()->FrameIsReady(this->NowFrame + 1, this->VideoID);
				// 输出加载情况
				if (LoadSucceed) {
					if (this->CreateTextureAndMesh(this->NowFrame + 1)) {
						++this->NowFrame;
						UCPromethBlueprintLib::PromethDebug("BuildTextureSucceed Frame: " + FString::FromInt(this->NowFrame) + "  Time:" + FString::FromInt(this->GetTime() - this->LastFrameTime), bDebugLog, "Play");
						this->LastFrameTime = this->GetTime();
					}
					// 判断是否播放到最后一帧
					if (this->isFinish()) {
						this->PlayingTime = 0;
						break;
					}
				}
			}
			FPlatformProcess::Sleep(this->PlayingWaitTime);

		}
		if (this->bPlaying && this->bLoop && this->isFinish()) {
			FPlatformProcess::Sleep(1. / this->FPS);
			goto LoopPlayStart;
		}
		else this->bPlaying = false;
		});
	LAMBDAThread::WakeUpThread(PlayThread);
}

void ACPromethActor::Pause()
{
	this->bPlaying = false;
}

bool ACPromethActor::Seek(int32 NewFrame, bool InAutoPlay)
{

	if (this->bSeeking)	return false;
	if (NewFrame == this->NowFrame) {
		if (!InAutoPlay) this->Pause();
		return true;
	}
	this->bSeeking = true;
	this->bPlaying = false;
	this->SeekFrame = NewFrame;
	this->SeekAutoPlay = InAutoPlay;

	if(this->bNonAsynPlay)	return true;

	FString SeekThread = LAMBDAThread::CreateObjectThread(
		[=]() {
			FPlatformProcess::Sleep(this->SeekDelayTime);
			if (this->isFinish()) {// 已播完后重播
				this->GetPromethAPI()->RePlay(this->VideoID);
				this->WaitFrameFun(0);
			}

			// WaitFrame
			this->GetPromethAPI()->SeekFrame(this->SeekFrame, this->VideoID);
			this->WaitFrameFun(this->SeekFrame);

			/*SeekFinish*/
			this->PlayingTime = this->SeekFrame * (1000. / (float)this->FPS) + 1;
			this->NowFrame = this->SeekFrame;
			this->CreateTextureAndMesh(this->NowFrame);
			// this->SeekCallBack.Broadcast(this->SeekFrame);
			if (this->isFinish()) {
				this->PlayingTime = 0;
			}
			this->bSeeking = false;
			if (this->SeekAutoPlay)
				this->Play();
			this->SeekCallBack.Broadcast(this->NowFrame);
		}
	);
	LAMBDAThread::WakeUpThread(SeekThread);


	return true;
}



void ACPromethActor::NonAsynPlay()
{
	// 判断是否正在播放
	if(!this->bPlaying)
		return;

	if (this->PlayingTime == 0) {
		if(!bWaitFrame0){
			if (this->isFinish()) {// 已播完后重播
                UCPromethBlueprintLib::PromethDebug("RePlayAPI ", bDebugLog, "NonAsynPlay");
				this->GetPromethAPI()->RePlay(this->VideoID);
				/*bWaitFrame0 = true;
				this->NowFrame = 0;
				this->Pause();
				return;*/
			}
			else {// 第一次播放调StartPlay
                UCPromethBlueprintLib::PromethDebug("PlayAPI ", bDebugLog, "NonAsynPlay");
				this->GetPromethAPI()->Play(this->VideoID);
			}
			this->NowFrame = 0;
		}

		// 等待第0帧解码完成
		bWaitFrame0 = true;
        UCPromethBlueprintLib::PromethDebug("GetReadyAPI ", bDebugLog, "NonAsynPlay");
		if(!this->GetPromethAPI()->FrameIsReady(0, this->VideoID)) return;
		bWaitFrame0 = false;

		// 防止进入PlayingTime == 0 的判断
		this->PlayingTime = 1;

		this->UpdateTime = this->GetTime();
		this->LastFrameTime = this->GetTime();
		UCPromethBlueprintLib::PromethDebug("DataLoadSucceed ", bDebugLog, "NonAsynPlay");
	}

	// 获取时间差
	this->PlayingTime += (this->GetTime() - this->UpdateTime);
	this->UpdateTime = this->GetTime();
	if ((int)((float)this->PlayingTime / (1000. / (float)this->FPS)) > this->NowFrame && !this->bCreating &&( this->NowFrame + 1) < this->FrameCount) {
		// 获取底层解码情况
        UCPromethBlueprintLib::PromethDebug("GetReadyAPI -- 2 ", bDebugLog, "NonAsynPlay");
		bool LoadSucceed = this->GetPromethAPI()->FrameIsReady(this->NowFrame + 1, this->VideoID);
		// 输出加载情况
		if (LoadSucceed) {
            UCPromethBlueprintLib::PromethDebug("Create Texture And Mesh", bDebugLog, "NonAsynPlay");
			if (this->CreateTextureAndMesh(this->NowFrame + 1)) {
				++this->NowFrame;
				UCPromethBlueprintLib::PromethDebug("BuildTextureSucceed Frame: " + FString::FromInt(this->NowFrame) + "  Time:" + FString::FromInt(this->GetTime() - this->LastFrameTime), bDebugLog, "NonAsynPlay");
				this->LastFrameTime = this->GetTime();
			}
			
		}
	}


	// 	判断是否播放到最后一帧
	if (this->isFinish()) {
		this->PlayingTime = 0;
		if(!this->bLoop) this->bPlaying = false;
	}
	
}

void ACPromethActor::NonAsynSeek()
{
	if(!this->bSeeking || this->bPlaying)	return;

	// SeekAPI
	if(!this->bSeekWaiting)	this->GetPromethAPI()->SeekFrame(this->SeekFrame, this->VideoID);
	
	bSeekWaiting = true;
	// 判断对应帧是否解码完成
	if(!this->GetPromethAPI()->FrameIsReady(this->SeekFrame, this->VideoID)) return;
	bSeekWaiting = false;

	/*SeekFinish*/
	this->PlayingTime = this->SeekFrame * (1000. / (float)this->FPS) + 1;
	this->NowFrame = this->SeekFrame;
	this->CreateTextureAndMesh(this->NowFrame);
	this->SeekCallBack.Broadcast(this->NowFrame);
	this->bSeeking = false;

	if (this->isFinish()) this->PlayingTime = 0;
	if (this->SeekAutoPlay) this->Play();

}

/***************************************************BaseFunctionEnd*****************************************************************/

/***************************************************  OtherFunction   *****************************************************************/

bool ACPromethActor::isFinish()
{
	return this->NowFrame >= (this->FrameCount - 1);
}

void ACPromethActor::CloseVideo()
{
	
	if (this->bOpened && this->PlayedNowVideo) {
		this->Pause();
		this->GetPromethAPI()->CloseVideo(this->VideoID);
		LAMBDAThread::ClearFinishThread();
		this->bOpened = false;
		this->PlayedNowVideo = false;
	}
}

void ACPromethActor::ChangeMaterial(UMaterialInterface* NewMaterial)
{
	if (this->MaterialInst)
	{
		this->MaterialInst->RemoveFromRoot();
		this->MaterialInst = nullptr;
	}

	this->MaterialInst = UMaterialInstanceDynamic::Create(NewMaterial, this);
	this->Mesh->SetMaterial(0, this->MaterialInst);
	this->MaterialInst->SetTextureParameterValue("BaseTexture", this->VideoTexture2D);
}


/***************************************************OtherFunctionEnd*****************************************************************/






void ACPromethActor::WaitFrameFun(int32 Frame)
{
	bool WaitStartFrame = true;
	while (WaitStartFrame && (this->bPlaying || this->bSeeking)) {//等待纹理、网格底层解码的第Frame帧解码完成
		//auto TextureSucceed = this->OpenTexture ?	ReadPromethFun::GetAPIInst()->TextureDataAtIndexAPI(TCHAR_TO_UTF8(*this->VideoID), Frame).isValidData : 1;
		bool LoadSucceed = this->GetPromethAPI()->FrameIsReady(Frame, this->VideoID);
			
		WaitStartFrame = !LoadSucceed;

		if (WaitStartFrame)
			FPlatformProcess::Sleep(this->GetDataWaitTime);
		else {
			UCPromethBlueprintLib::PromethDebug("BuildTextureSucceed Frame:  " + FString::FromInt(Frame), bDebugLog, "WaitFrameFun");
			//this->CreateTextureAndMesh(Frame);
		}
	}
}



long ACPromethActor::GetTime()
{
	if (GetWorld())
		return this->IsGameTime ? (long)(GetWorld()->GetTimeSeconds() * 1000) : clock();

	UCPromethBlueprintLib::PromethDebug("World Is None!!!!!!!!!!!!!!!!!!!!!!!!!!!", this->bDebugLog, "GetTime", false);
	return this->UpdateTime;
}

void ACPromethActor::initTexture(UTexture2D** ptexture, int width, int height, EPixelFormat format, FSlateTexture2DRHIRef** SlateTexture2DRHI)
{
	FScopeLock lock(&this->VideoTracksLoadingLock);

	UTexture2D* texture = *ptexture;

	bool bValid = texture && texture->IsValidLowLevel();
	bool bChange = false;
	if (bValid) {
		int twidth = texture->GetSizeX();
		int theight = texture->GetSizeY();
		bChange = (twidth != width) || (theight != height);
		if (bChange) {
			texture->RemoveFromRoot();
			texture->ConditionalBeginDestroy();
			texture = nullptr;
		}
		UCPromethBlueprintLib::PromethDebug(" Texture is Valid  ", this->bDebugLog, "initTexture");
	}
	if (!bValid || bChange) {
		// UTexture2DExternal
		*ptexture = UTexture2D::CreateTransient(width, height, format);//PF_R8G8B8A8)
																	   // 
		if (*ptexture)
		{
			//(*ptexture)->MipGenSettings = TMGS_NoMipmaps;
			(*ptexture)->CompressionSettings = TextureCompressionSettings::TC_VectorDisplacementmap;
			(*ptexture)->SRGB = true;
			(*ptexture)->UpdateResource();
			(*ptexture)->AddToRoot();

			if(SlateTexture2DRHI){
				ENQUEUE_RENDER_COMMAND(InitMovieTexture)(
					[=](FRHICommandListImmediate& RHICmdList)
					{
						if ((*SlateTexture2DRHI))
						{
							//(*SlateTexture2DRHI)->ReleaseResource();
							(*SlateTexture2DRHI)->ReleaseResource();
							delete (*SlateTexture2DRHI);
						}
						// this->pTexture = new FSlateTexture2DRHIRef(this->VideoWidth, this->VideoHeight, format, NULL, ETextureCreateFlags::TexCreate_RenderTargetable, true);
						(*SlateTexture2DRHI) = new FSlateTexture2DRHIRef(width, height, format, NULL, TexCreate_RenderTargetable, true);
						(*SlateTexture2DRHI)->InitResource();
					});
			}
		}
		UCPromethBlueprintLib::PromethDebug(" Texture ChangeSize  ", this->bDebugLog, "initTexture");

	}

}

bool ACPromethActor::CreateTextureAndMesh(int32 Frame)
{



	ENQUEUE_RENDER_COMMAND(UpdateMovieTexture)([this/*, TextureYUYVData*/, Frame](FRHICommandListImmediate& RHICmdList) {
		this->bCreating = true;
		if (this->OpenTexture) {
			FScopeLock lock(&this->VideoTracksLoadingLock);
#if PLATFORM_WINDOWS
			this->RHICreateTexture(RHICmdList, Frame);
#elif PLATFORM_ANDROID
			this->AndroidRHICreateTexture(RHICmdList, Frame);
#elif PLATFORM_IOS
			this->IOSRHICreateTexture(RHICmdList, Frame);
#endif
		}
		if (this->OpenMesh) {
			FScopeLock LockMeshRead(&this->MeshTracksLock);
			this->RHICreateMesh(RHICmdList, Frame);
		}
		this->bCreating = false;

	});

	//ENQUEUE_RENDER_COMMAND(UpdateMovieTexture)([this/*, TextureYUYVData*/, Frame](FRHICommandListImmediate& RHICmdList) {
	//	this->bCreating = true;
	//	if (this->OpenTexture) {
	//		FScopeLock lock(&this->VideoTracksLoadingLock);
	//		this->AndroidRHICreateTexture(RHICmdList, Frame);
	//	}
	//	if (this->OpenMesh) {
	//		FScopeLock LockMeshRead(&this->MeshTracksLock);
	//		this->RHICreateMesh(RHICmdList, Frame);
	//	}
	//	this->bCreating = false;

	//});

	return true;
}

void ACPromethActor::RHICreateTexture(FRHICommandListImmediate& RHICmdList, int Frame)
{
#if PLATFORM_WINDOWS

	// Texture
	TextureDescriptor PicData = ((WindowsVideoPlayer*)this->GetPromethAPI())->TextureDataAtIndexAPI(TCHAR_TO_UTF8(*this->VideoID), Frame);
	bool bisValidData = PicData.isValidData;
	int32 InstIndex = PicData.index;
	if (bisValidData) {
		unsigned char* TextureYUYVData = (unsigned char*)PicData.nativeTex;
		{
			//FRHITexture2D* InputTexture = nullptr;
			FSlateTexture2DRHIRef*& CurrentTexture = pTexture;
			if (CurrentTexture && !CurrentTexture->IsInitialized())
				CurrentTexture->InitResource();
			if (TextureYUYVData != nullptr) {
				const bool SrgbOutput = false;
				const bool bSampleIsOutputSrgb = false;
				const EPixelFormat InputPixelFormat = EPixelFormat::PF_B8G8R8A8;
				const bool SrgbTexture = false;
				//const uint32 OutputCreateFlags = ETextureCreateFlags::TexCreate_Dynamic | (SrgbOutput ? TexCreate_SRGB : 0);;// | TexCreate_None;
				const ETextureCreateFlags OutputCreateFlags = TexCreate_Dynamic | (SrgbTexture ? TexCreate_SRGB : TexCreate_None);

				if (!InputTarget.IsValid() || InputTarget->GetSizeX() != this->VideoWidth / 2 || InputTarget->GetSizeY() != this->VideoHeight)
				{
					TRefCountPtr<FRHITexture2D> DummyTexture2DRHI;
					FRHIResourceCreateInfo CreateInfo(TEXT("CreateRHI"));
					RHICreateTargetableShaderResource2D(
						this->VideoWidth / 2,
						this->VideoHeight,
						InputPixelFormat,
						1,
						OutputCreateFlags,
						TexCreate_RenderTargetable,
						false,
						CreateInfo,
						InputTarget,
						DummyTexture2DRHI
					);
				}
			}

			// copy sample data to input render target
			FUpdateTextureRegion2D Region(0, 0, 0, 0, this->VideoWidth / 2, this->VideoHeight);
			RHIUpdateTexture2D(InputTarget, 0, Region, this->VideoWidth * 2, TextureYUYVData);
			//FRHICommandListImmediate& CommandList = RHICmdList;
			
			{
				//SCOPED_DRAW_EVENT(CommandList, MediaTextureConvertResource);


				FRHITexture2D* RenderTarget = CurrentTexture->GetRHIRef();
				//CommandList.Transition(FRHITransitionInfo(RenderTarget, ERHIAccess::Unknown, ERHIAccess::None));
				RHICmdList.Transition(FRHITransitionInfo(RenderTarget, ERHIAccess::Unknown, ERHIAccess::RTV));

				FRHIRenderPassInfo RPInfo(RenderTarget, ERenderTargetActions::Load_Store);
				RHICmdList.BeginRenderPass(RPInfo, TEXT("TextureConvertI420toRGB"));

				FGraphicsPipelineStateInitializer GraphicsPSOInit;
				RHICmdList.ApplyCachedRenderTargets(GraphicsPSOInit);
				RHICmdList.SetViewport(0, 0, 0.0f, this->VideoWidth, this->VideoHeight, 1.0f);

				GraphicsPSOInit.DepthStencilState = TStaticDepthStencilState<false, CF_Always>::GetRHI();
				GraphicsPSOInit.RasterizerState = TStaticRasterizerState<>::GetRHI();
				GraphicsPSOInit.BlendState = TStaticBlendStateWriteMask<CW_RGBA, CW_NONE, CW_NONE, CW_NONE, CW_NONE, CW_NONE, CW_NONE, CW_NONE>::GetRHI();
				GraphicsPSOInit.PrimitiveType = PT_TriangleStrip;

				// configure media shaders
				auto ShaderMap = GetGlobalShaderMap(GMaxRHIFeatureLevel);
				TShaderMapRef<FMediaShadersVS> VertexShader(ShaderMap);
				GraphicsPSOInit.BoundShaderState.VertexDeclarationRHI = GMediaVertexDeclaration.VertexDeclarationRHI;
				GraphicsPSOInit.BoundShaderState.VertexShaderRHI = VertexShader.GetVertexShader();
				//case EMediaTextureSampleFormat::CharYUY2:
				{
					TShaderMapRef<FYUY2ConvertPS> ConvertShader(ShaderMap);
					GraphicsPSOInit.BoundShaderState.PixelShaderRHI = ConvertShader.GetPixelShader();
					SetGraphicsPipelineState(RHICmdList, GraphicsPSOInit);
					ConvertShader->SetParameters(RHICmdList, InputTarget, FIntPoint(this->VideoWidth, this->VideoHeight), MediaShaders::YuvToSrgbPs4, MediaShaders::YUVOffset8bits, false);
				}

				/**********************/

				// draw full size quad into render target

				FVertexBufferRHIRef VertexBuffer = CreateTempMediaVertexBuffer();
				RHICmdList.SetStreamSource(0, VertexBuffer, 0);
				RHICmdList.SetViewport(0, 0, 0.0f, this->VideoWidth, this->VideoHeight, 1.0f);
				RHICmdList.DrawPrimitive(0, 2, 1);
				auto dstRHI = this->VideoTexture2D->Resource->GetTexture2DRHI();
				RHICmdList.EndRenderPass();
				RHICmdList.Transition(FRHITransitionInfo(RenderTarget, ERHIAccess::Unknown, ERHIAccess::SRVGraphics));

				/*
				FTextureReferenceRHIRef MyTextureRHI = this->VideoTexture2D->TextureReference.TextureReferenceRHI;
				FRHITexture* TexRef = MyTextureRHI->GetTextureReference()->GetReferencedTexture();
				FRHITexture2D* TexRef2D = (FRHITexture2D*)RenderTarget;
				FRHITexture2D* Tex = this->VideoTexture2D->Resource->GetTexture2DRHI();
				RHICmdList.CopySharedMips(Tex, TexRef2D);
				*/
				FRHICommandListExecutor::GetImmediateCommandList().CopyTexture(RenderTarget, this->VideoTexture2D->Resource->GetTexture2DRHI(), FRHICopyTextureInfo());

				/***************/
			}
			//this->MaterialInst->SetTextureParameterValue("BaseTexture", this->VideoTexture2D);
		}
	}
#endif

}

void ACPromethActor::AndroidRHICreateTexture(FRHICommandListImmediate& RHICmdList, int Frame)
{
	double AndroidRHITime = UCPromethBlueprintLib::getCurrentClockSecInPipe();

#if PLATFORM_ANDROID
	TextureItem PicData = ((AndroidVideoPlayer*)(this->GetPromethAPI()))->TextureDataAtIndexAPI(TCHAR_TO_UTF8(*this->VideoID), Frame);

	// __TextureDataItems PicData = ReadPromethFun::GetAPIInst()->TextureDataAtIndexAPI(TCHAR_TO_UTF8(*this->VideoID), Frame);
	uint8_t* yData = PicData.yData;
	uint8_t* uvData = PicData.uvData;
	//UCPromethBlueprintLib::PromethDebug("last_num:  " + FString::FromInt(last_num), this->bDebugLog, "AndroidRHICreateTexture", false);


	if (yData != nullptr && uvData != nullptr) {

		if(this->CreateTextureY){
			int32 AndroidTexture2DYWidth = this->VideoWidth;
			int32 AndroidTexture2DYHeight = this->VideoHeight;
			FUpdateTextureRegion2D RegionY(0, 0, 0, 0, AndroidTexture2DYWidth, AndroidTexture2DYHeight);
			//RHIUpdateTexture2D(this->AndroidInputTargetY, 0, RegionY, this->VideoWidth, yData);
			//this->AndroidTexture2DY->PlatformData->Mips[0].BulkData.Lock(LOCK_READ_WRITE);
			double TimeTempY = UCPromethBlueprintLib::getCurrentClockSecInPipe();
			RHIUpdateTexture2D(this->AndroidTexture2DY->Resource->GetTexture2DRHI(), 0, RegionY, AndroidTexture2DYWidth, yData);
			UCPromethBlueprintLib::PromethDebug("Android Create Texture Time Y  : !    " + FString::FromInt((int)(UCPromethBlueprintLib::getCurrentClockSecInPipe() - TimeTempY) * 1000), this->bDebugLog, "AndroidCreate");

			// AndroidMovieStreamer.cpp 的刷新模式
			/*uint32 DestStrideYIn = 1;
			void* DestTextureData = RHILockTexture2D(this->AndroidTexture2DY->Resource->GetTexture2DRHI(), 0, RLM_WriteOnly, DestStrideYIn, false);
			FMemory::Memcpy(DestTextureData, yData, AndroidTexture2DYWidth* AndroidTexture2DYHeight);
			RHIUnlockTexture2D(this->AndroidTexture2DY->Resource->GetTexture2DRHI(), 0, false);*/

			//RHICmdList.UpdateTexture2D(this->AndroidTexture2DY->Resource->GetTexture2DRHI(), 0, RegionY, this->VideoWidth, yData);
			//this->AndroidTexture2DY->UpdateTextureRegions(0, 1, &RegionY, 1, this->VideoWidth, yData);
			//this->AndroidTexture2DY->UpdateTextureRegions(0, 1, &RegionY, this->VideoWidth, this->VideoHeight, yData);

			//this->AndroidTexture2DY->PlatformData->Mips[0].BulkData.Unlock();

			//FRHITexture2D* TexY = this->AndroidTexture2DY->Resource->GetTexture2DRHI();
			//UCPromethBlueprintLib::PromethDebug("TexY  2D:  " + TexY->GetSizeXY().ToString() + "  3D : " + TexY->GetSizeXYZ().ToString(), this->bDebugLog, "AndroidRHICreateTexture", false, 10.f, FColor::Green);
			//UCPromethBlueprintLib::PromethDebug("this->AndroidInputTargetY  2D:  " + this->AndroidInputTargetY->GetSizeXY().ToString() + "  3D : " + this->AndroidInputTargetY->GetSizeXYZ().ToString(), this->bDebugLog, "AndroidRHICreateTexture", false, 10.f, FColor::Green);		
			//RHICmdList.CopySharedMips(TexY, this->AndroidInputTargetY);
			//RHICopySharedMips(TexY, this->AndroidInputTargetY);
			//return;
		}
		if(this->CreateTextureUV){
			
			int32 AndroidTexture2DUVWidth = this->VideoWidth / 2;
			int32 AndroidTexture2DUVHeight = this->VideoHeight / 2;

			FUpdateTextureRegion2D RegionUV(0, 0, 0, 0, AndroidTexture2DUVWidth, AndroidTexture2DUVHeight);
			//RHIUpdateTexture2D(this->AndroidInputTargetUV, 0, RegionUV, this->VideoWidth / 2, uvData);
			//this->AndroidTexture2DUV->PlatformData->Mips[0].BulkData.Lock(LOCK_READ_WRITE);
		
			//RHIUpdateTexture2D(this->AndroidTexture2DUV->Resource->GetTexture2DRHI(), 0, RegionUV, AndroidTexture2DUVWidth, uvData);
			// AndroidMovieStreamer.cpp 的刷新模式
			uint32 DestStrideUVIn = 2;
			double TimeTempUV = UCPromethBlueprintLib::getCurrentClockSecInPipe();
			void* DestTextureDataUV = RHILockTexture2D(this->AndroidTexture2DUV->Resource->GetTexture2DRHI(), 0, RLM_WriteOnly, DestStrideUVIn, false);
			FMemory::Memcpy(DestTextureDataUV, uvData, this->VideoWidth * this->VideoHeight / 2);
			RHIUnlockTexture2D(this->AndroidTexture2DUV->Resource->GetTexture2DRHI(), 0, false);
			UCPromethBlueprintLib::PromethDebug("Android Create Texture Time UV: !    " + FString::FromInt((int)(UCPromethBlueprintLib::getCurrentClockSecInPipe() - TimeTempUV) * 1000), this->bDebugLog, "AndroidCreate");


			//RHICmdList.UpdateTexture2D(this->AndroidTexture2DUV->Resource->GetTexture2DRHI(), 0, RegionUV, this->VideoWidth / 2, uvData);
			//this->AndroidTexture2DUV->UpdateTextureRegions(0, 1, &RegionUV, 2, this->VideoWidth / 2, uvData);
			//this->AndroidTexture2DUV->UpdateTextureRegions(0, 1, &RegionUV, this->VideoWidth / 2, this->VideoHeight / 2, uvData);

			//this->AndroidTexture2DUV->PlatformData->Mips[0].BulkData.Unlock();

			//FRHITexture2D* TexUV = this->AndroidTexture2DUV->Resource->GetTexture2DRHI();
			//RHICmdList.CopySharedMips(TexUV, this->AndroidInputTargetUV);
		}
		this->MaterialInst->SetTextureParameterValue("BaseTextureY", this->AndroidTexture2DY);
		this->MaterialInst->SetTextureParameterValue("BaseTextureUV", this->AndroidTexture2DUV);

	}
#endif
	UCPromethBlueprintLib::PromethDebug("Android Create Texture Time AndroidRHITime  : !    " + FString::FromInt((int)(UCPromethBlueprintLib::getCurrentClockSecInPipe() - AndroidRHITime) * 1000), this->bDebugLog, "AndroidCreate");

}

void ACPromethActor::IOSRHICreateTexture(FRHICommandListImmediate& RHICmdList, int Frame)
{
#if PLATFORM_IOS 
	if (MetalTextureCache == NULL && FApp::CanEverRender())
	{
		id<MTLDevice> Device = (id<MTLDevice>)GDynamicRHI->RHIGetNativeDevice();
		check(Device != nil);

		CVReturn Return = CVMetalTextureCacheCreate(kCFAllocatorDefault, nullptr, Device, nullptr, &MetalTextureCache);
		check(Return == kCVReturnSuccess);
		check(MetalTextureCache != NULL);
	}
	if (MetalTextureCache == NULL)
	{
		UE_LOG(LogTemp, Warning, TEXT("MetalTextureCache is not nullptr"));
		return;// this->VideoTexture2D;
	}



	UE_LOG(LogTemp, Warning, TEXT("TextureDataAtIndex triggered Index:%d"), Frame);
    if(!((IOSVideoPlayer*)this->GetPromethAPI())->TextureDataAtIndexAPI){
        UCPromethBlueprintLib::PromethDebug("TextureDataAtIndexAPI is nullptr", this->bDebugLog, "IOSRHICreateTexture");
        return;
    }
    //TextureDescriptor PicData = ReadPromethFun::GetAPIInst()->TextureDataAtIndexAPI(TCHAR_TO_UTF8(*this->VideoID), Frame);
    
    
    UE418TextureDescriptor PicData = ((IOSVideoPlayer*)this->GetPromethAPI())->UE418_TextureDataAtIndexAPI(TCHAR_TO_UTF8(*this->VideoID), Frame);
    UCPromethBlueprintLib::PromethDebug("TextureDataAtIndex 1", this->bDebugLog, "IOSRHICreateTexture");
    
	if (PicData.isValidData)
	{
        /*
        if(!(unsigned char*)PicData.nativeTex){
            UCPromethBlueprintLib::PromethDebug("PicData.nativeTex is nullptr", this->bDebugLog, "IOSRHICreateTexture");

        }
        if(!(((unsigned char*)PicData.nativeTex) + 2048*2048*3 - 1)){
            UCPromethBlueprintLib::PromethDebug("PicData.nativeTex 2048*2048*3 - 1 is nullptr", this->bDebugLog, "IOSRHICreateTexture");

        }
        UCPromethBlueprintLib::PromethDebug("TextureDataAtIndex 2", this->bDebugLog, "IOSRHICreateTexture");
        */
        CVMetalTextureRef TextureCacheRef = PicData.textureRef;
        
        /*
		CVImageBufferRef pPixelBuffer = (CVImageBufferRef)PicData.nativeTex;
        //CVImageBufferRef pPixelBuffer = CMSampleBufferGetImageBuffer(PicData.nativeTex);
        
        UCPromethBlueprintLib::PromethDebug("TextureDataAtIndex 3", this->bDebugLog, "IOSRHICreateTexture");
        
		CVMetalTextureRef TextureCacheRef = NULL;
        UCPromethBlueprintLib::PromethDebug("TextureDataAtIndex 4", this->bDebugLog, "IOSRHICreateTexture");
        if(pPixelBuffer){
            UCPromethBlueprintLib::PromethDebug("pPixelBuffer is valid", this->bDebugLog, "IOSRHICreateTexture");
        }
        else{
            UCPromethBlueprintLib::PromethDebug("pPixelBuffer is not valid", this->bDebugLog, "IOSRHICreateTexture");
        }
		CVReturn Result = CVMetalTextureCacheCreateTextureFromImage(kCFAllocatorDefault, MetalTextureCache, pPixelBuffer, nullptr, MTLPixelFormatBGRA8Unorm, this->VideoWidth, this->VideoHeight, 0, &TextureCacheRef);
         
         //var kCVReturnAllocationFailed: CVReturn缓冲区或缓冲池的内存分配失败。
         //var kCVReturnError: CVReturn发生了一个未定义的错误。
         //var kCVReturnInvalidArgument: CVReturn函数参数无效。例如，超出范围或类型错误。
         //var kCVReturnUnsupported: CVReturn
         //var kCVReturnLast: CVReturn用于标记核心视频结果代码结尾的占位符（不由任何函数返回） 
         //var kCVReturnFirst: CVReturn用于标记核心视频结果代码开始的占位符（不由任何函数返回）。
        
        if(Result == kCVReturnSuccess){
            UCPromethBlueprintLib::PromethDebug("Result == KCVReturnSuccess", this->bDebugLog, "IOSRHICreateTexture");
        }
        if(Result == kCVReturnAllocationFailed){
            UCPromethBlueprintLib::PromethDebug("Result == kCVReturnAllocationFailed: ", this->bDebugLog, "IOSRHICreateTexture");
        }
         if(Result == kCVReturnError){
             UCPromethBlueprintLib::PromethDebug("Result == kCVReturnError: ", this->bDebugLog, "IOSRHICreateTexture");
         }
         if(Result == kCVReturnInvalidArgument){
             UCPromethBlueprintLib::PromethDebug("Result == kCVReturnInvalidArgument: ", this->bDebugLog, "IOSRHICreateTexture");
         }
         if(Result == kCVReturnUnsupported){
             UCPromethBlueprintLib::PromethDebug("Result == kCVReturnUnsupported: ", this->bDebugLog, "IOSRHICreateTexture");
         }
         if(Result == kCVReturnLast){
             UCPromethBlueprintLib::PromethDebug("Result == kCVReturnLast: ", this->bDebugLog, "IOSRHICreateTexture");
         }
         if(Result == kCVReturnFirst){
             UCPromethBlueprintLib::PromethDebug("Result == kCVReturnFirst: ", this->bDebugLog, "IOSRHICreateTexture");
         }
         */
                                                                     
        if(TextureCacheRef){
            UCPromethBlueprintLib::PromethDebug("TextureCacheRef is valid", this->bDebugLog, "IOSRHICreateTexture");
        }
        else{
            UCPromethBlueprintLib::PromethDebug("TextureCacheRef is not valid", this->bDebugLog, "IOSRHICreateTexture");
        }
        
        check(TextureCacheRef);
        UCPromethBlueprintLib::PromethDebug("TextureDataAtIndex 5", this->bDebugLog, "IOSRHICreateTexture");
        
		FRHIResourceCreateInfo CreateInfo(new FAppleMovieStreamerTexture2DResourceWrapper_My(TextureCacheRef));
        UCPromethBlueprintLib::PromethDebug("TextureDataAtIndex 6", this->bDebugLog, "IOSRHICreateTexture");

		FTexture2DRHIRef MediaWrappedTexture = RHICreateTexture2D(this->VideoWidth, this->VideoHeight, PF_R8G8B8A8, 1, 1, TexCreate_Dynamic | TexCreate_NoTiling, CreateInfo);

        UCPromethBlueprintLib::PromethDebug("TextureDataAtIndex 7", this->bDebugLog, "IOSRHICreateTexture");
 
        FTextureReferenceRHIRef MyTextureRHI = this->VideoTexture2D->TextureReference.TextureReferenceRHI;
        UCPromethBlueprintLib::PromethDebug("TextureDataAtIndex 9", this->bDebugLog, "IOSRHICreateTexture");
        
        FRHITexture2D* TexSource = MediaWrappedTexture.GetReference();
        UCPromethBlueprintLib::PromethDebug("TextureDataAtIndex 10", this->bDebugLog, "IOSRHICreateTexture");
        
        MyTextureRHI->SetReferencedTexture(TexSource);
        UCPromethBlueprintLib::PromethDebug("TextureDataAtIndex 11", this->bDebugLog, "IOSRHICreateTexture");


	}
    this->MaterialInst->SetTextureParameterValue("BaseTexture", this->VideoTexture2D);

#endif
}

void ACPromethActor::RHICreateMesh(FRHICommandListImmediate& RHICmdList, int Frame) {
	this->GetPromethAPI()->CreateMesh(RHICmdList, Frame, this->Mesh, &InputMeshParam, this->MaterialInst, this->VideoID);
}






