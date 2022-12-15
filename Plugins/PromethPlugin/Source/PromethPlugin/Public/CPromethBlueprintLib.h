// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "CPromethBlueprintLib.generated.h"

/**
 * 
 */
 UENUM(BlueprintType, Blueprintable)
	 enum StaticPromethPlatform{
	 _None,
	 _Windows,
	 _IOS,
	 _Android,
	 _MAC
 };

UCLASS()
class PROMETHPLUGIN_API UCPromethBlueprintLib : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:
	/*
	- FString OutputStr					输出
	- bool IsPrintParam = true		控制输出的布尔
	- FString Prefix = ""				前缀
	- bool bJustLog = true				仅在log界面输出  为false则还会在屏幕输出
	*/
	UFUNCTION(BlueprintCallable, Category = "PromethStaticFun")
		static void PromethDebug(FString OutputStr, bool IsPrintParam = true, FString Prefix = "", bool bJustLog = true, float ShowTime = 5.f, FColor Color = FColor::Blue);
	UFUNCTION(BlueprintCallable, Category = "PromethStaticFun")
		static void ScanDirectory(TArray<FString>& Files, const FString& FilePath, const FString& Extension);

	UFUNCTION(BlueprintCallable, Category = "PromethStaticFun")
		static bool SaveTXT( FString Str,  FString Path);
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "PromethStaticFun")
		static StaticPromethPlatform StaticGetPlatform();


public:
	// 获取指针长度
	template<typename T>
	static int GetPtrLen(T* ptr) ;
	static char* TCHARToChar(TCHAR* pTchar);
	static FString GetNewName();
	static int32 clockTime;
	static int32 NowTimeThreadNum;


// PlatfromGetTime
public:
	static double getCurrentClockSecInPipe();
	
};

