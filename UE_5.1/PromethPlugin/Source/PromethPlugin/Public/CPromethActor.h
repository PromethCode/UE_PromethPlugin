// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
//#include "ReadPromethFun.h"
#include"VideoPlayPlatform/IVideoPlayer.h"
#include <string>
#if PLATFORM_WINDOWS
#include"VideoPlayPlatform/Windows/WindowsVideoPlayer.h"
#elif PLATFORM_ANDROID
#include"VideoPlayPlatform/Android/AndroidVideoPlayer.h"
#elif PLATFORM_IOS  || PLATFORM_MAC
#include "VideoPlayPlatform/IOS/IOSVideoPlayer.h"
#endif

#include "CPromethActor.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOpenVideoSucceed, bool, Succeed);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSeekSucceed, int32, Frame);

UCLASS()
class PROMETHPLUGIN_API ACPromethActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACPromethActor();
	~ACPromethActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	// 蓝图构造函数
	virtual void OnConstruction(const FTransform& Transform) override;

public:
	void TestFun();

public:

	// Base Function  ---------------------------------------------------------------------------------------------------------------

	UFUNCTION(BlueprintCallable, Category = "BaseFunction")
		bool OpenVideo(const FString& Path_, UMediaSource* InMediaSource = nullptr, bool InbIsPathOpen = true, const FString& IOSFileName = "ue4-37-228");
	UFUNCTION(BlueprintCallable, Category = "BaseFunction")
		void Play();
	UFUNCTION(BlueprintCallable, Category = "BaseFunction")
		void Pause();
	UFUNCTION(BlueprintCallable, Category = "BaseFunction")
		bool Seek(int32 NewFrame, bool InAutoPlay = false);
	
	void NonAsynPlay();
	void NonAsynSeek();
	// Other Function  ---------------------------------------------------------------------------------------------------------------

	UFUNCTION(BlueprintCallable, Category = "OtherFunction")
		bool isFinish();
	UFUNCTION(BlueprintCallable, Category = "OtherFunction")
		void CloseVideo();
	UFUNCTION(BlueprintCallable, Category = "OtherFunction")
		void ChangeMaterial(UMaterialInterface* NewMaterial);
   


public:
	// 时间相关函数   ---------------------------------------------------------------------------------------------------------------
	//void PlayingLoop();
	void WaitFrameFun(int32 Frame);
	int32 WaitFrame;
	void WaitHandleFun();
	void (*WaitCallBackFun)(ACPromethActor* PromethActor);
	//void seekWaitFrame();
	long GetTime();

public:
	// Open 回調
	void OpenVideoCompletionFun(bool Succeed, FString ID);

private:
	// 纹理构造         ---------------------------------------------------------------------------------------------------------------

	bool CreateTextureAndMesh(int32 Frame);	// 异步调用构造纹理和网格
	void RHICreateTexture(FRHICommandListImmediate& RHICmdList, int Frame);
	void AndroidRHICreateTexture(FRHICommandListImmediate& RHICmdList, int Frame);
	void IOSRHICreateTexture(FRHICommandListImmediate& RHICmdList, int Frame);

	void initTexture(UTexture2D** ptexture, int width, int height, EPixelFormat format, class FSlateTexture2DRHIRef** SlateTexture2DRHI = nullptr);

	// 网格构造           ---------------------------------------------------------------------------------------------------------------
	void RHICreateMesh(FRHICommandListImmediate& RHICmdList, int Frame);
	






/****************************************************************成员变量***********************************************************************************/


public:
	// 组件  纹理       ---------------------------------------------------------------------------------------------------------------
	// 纹理
	UPROPERTY(BlueprintReadOnly, Category = "Render")
		UTexture2D *VideoTexture2D;
	UPROPERTY(BlueprintReadOnly, Category = "Render")
		UTexture2D *AndroidTexture2DY;
	UPROPERTY(BlueprintReadOnly, Category = "Render")
		UTexture2D* AndroidTexture2DUV;
	// 根组件
	UPROPERTY(BlueprintReadWrite, Category = "Prometh")
		class USceneComponent* RootComp;
	// 网格
	UPROPERTY(BlueprintReadWrite, Category = "MeshComponent")
		class UCatchlightMeshComponent* Mesh;
	 
public:
	// SettingBase  ---------------------------------------------------------------------------------------------------------------
	// 输出Log
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SettingBase")
		bool bDebugLog = true;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SettingBase")
		FString LogSavePath = "C:/Users/a1/Desktop/Log.txt";
	// Key
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SettingBase")
		FString Keys;
	// 文件已经打开
	UPROPERTY(BlueprintReadOnly, Category = "SettingBase")
		bool bOpened = false;
	// 正在播放
	UPROPERTY(BlueprintReadOnly, Category = "SettingBase")
		bool bPlaying = false;
	// 正在打开文件
	UPROPERTY(BlueprintReadOnly, Category = "SettingBase")
		bool bOpening = false;
	// 正在播放
	UPROPERTY(BlueprintReadOnly, Category = "SettingBase")
		bool bSeeking = false;
	// 循环播放
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SettingBase")
		bool bLoop = false;
	// 自动播放
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SettingBase")
		bool bAutoPlay = false;
	// 总帧数
	UPROPERTY(BlueprintReadOnly, Category = "SettingBase")
		int32 FrameCount;
	// 帧率
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SettingBase")
		int32 FPS = 22;
	// 当前帧数
	UPROPERTY(BlueprintReadOnly, Category = "SettingBase")
		int32 NowFrame;
	// 非异步播放  Windows可选择false 非异步播放及构造  其他移动端平台选择则可能出现崩溃的现象
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SettingBase")
		bool bNonAsynPlay = true;

	// 构造纹理
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "SettingBase")
		bool OpenTexture = true;
	// 构造网格
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "SettingBase")
		bool OpenMesh = true;
	// true: 以GameTime作为视频播放的时间搓  false: 以系统时间作为视频播放的时间搓
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "SettingBase")
		bool IsGameTime = false;
	
	// 纹理视频解码的ID
	UPROPERTY(BlueprintReadOnly, Category = "VideoParam")
		FString VideoID;

	UPROPERTY(BlueprintReadWrite, Category = "SettingBase")
		FString NeedOpenPath = "";



	// Android Setting
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AndroidSetting")
		bool CreateTextureY = true;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AndroidSetting")
		bool CreateTextureUV = true;
	// SettingPath  ---------------------------------------------------------------------------------------------------------------

	// 以路径打开视频
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SettingPath")
		bool bIsPathOpen = false;
	// 路径视频
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SettingPath")
		FString VideoPath = "";
	//视频资产，注意：打包需要将视频文件放入Movies文件夹
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SettingPath")
		class UMediaSource* MediaSource;

	// SettingRendering  ---------------------------------------------------------------------------------------------------------------

	// 动态材质实例 
	UPROPERTY(BlueprintReadWrite, Category = "SettingRendering")
		UMaterialInstanceDynamic* MaterialInst;
	// Windows材质
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SettingRendering")
		UMaterialInterface* WinMaterial;
	// IOS材质
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SettingRendering")
		UMaterialInterface* IOSMaterial;
	// Android材质
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SettingRendering")
		UMaterialInterface* AndroidMaterial;
	// 纹理宽
	UPROPERTY(BlueprintReadOnly, Category = "SettingRendering")
		int32 VideoHeight;
	// 纹理高
	UPROPERTY(BlueprintReadOnly, Category = "SettingRendering")
		int32 VideoWidth;


public:
	// 文件打开及回调  ---------------------------------------------------------------------------------------------------------------


	std::string MeshIDChar;
	char* inputpath;
	// 视频打开成功的回调函数
	UPROPERTY(BlueprintAssignable, BlueprintReadWrite, Category = "VideoBack")
		FOpenVideoSucceed OpenVideoCompletion;
	UPROPERTY(BlueprintAssignable, BlueprintReadWrite, Category = "VideoBack")
		FSeekSucceed	SeekCallBack;

public:
	// 时间相关变量   ---------------------------------------------------------------------------------------------------------------
	// OpenVideo 等待时间
	float OpenWaitTime = 0.02f;
	// 循环等待底层解码的时间
	float GetDataWaitTime = 0.02f;
	// 播放等待时间
	float PlayingWaitTime = 0.005f;
	// 跳帧等待时间
	float SeekDelayTime = 0.01f;
	// 更新的时间搓
	long UpdateTime = 0;
	// 当前播放的时间单位ms
	long PlayingTime = 0;

	FTimerHandle PlayingTimeHandle;
	FTimerHandle WaitFrameTimeHandle;
	FTimerHandle SeekWaitFrameHandle;
	FTimerHandle OpenWaitHandle;

	
private:

    // 构造参数			---------------------------------------------------------------------------------------------------------------

    bool bCreating = false;

    // IOS || Win10
    class FSlateTexture2DRHIRef* pTexture;
    TRefCountPtr<FRHITexture2D> InputTarget;
    // Android
    /*class FSlateTexture2DRHIRef* pAndroidTextureY;
    TRefCountPtr<FRHITexture2D> AndroidInputTargetY;
    class FSlateTexture2DRHIRef* pAndroidTextureUV;
    TRefCountPtr<FRHITexture2D> AndroidInputTargetUV;*/
    // 纹理临界及纹理data临界
    FCriticalSection VideoTracksLoadingLock;
    FCriticalSection VideoDataLock;
    FCriticalSection MeshTracksLock;

#if PLATFORM_IOS
    CVMetalTextureCacheRef MetalTextureCache;
#endif
    
    // 网格构造           ---------------------------------------------------------------------------------------------------------------
private:
	MeshParam InputMeshParam;
public:
	MeshItemPointers MeshData;
	int MaxVertex = 30000;

private:
	// 播放参数			---------------------------------------------------------------------------------------------------------------
	bool PlayedNowVideo = false;
	int32 SeekFrame;
	bool SeekAutoPlay;
	long LastFrameTime = 0;
	bool bWaitFrame0 = false;
	bool bSeekWaiting = false;

public:
	
	// Static Function And Param ---------------------------------------------------------------------------------------------------------------

	static TWeakObjectPtr<ACPromethActor> OpeningPromethActor;
	//static void OpenVideoCallBack(bool success, const char* guid);
	//static void OpenMeshCallBack(bool success, const char* guid);
	static IVideoPlayer* GetPromethAPI();
	static IVideoPlayer* PromethAPI;
	static int32 CallBackConst;
	static TMap<FString, TPair<TWeakObjectPtr<ACPromethActor>, int32>>AllPromethActor;
public:
	// TestParam
	float aveLocation = 0;

};
