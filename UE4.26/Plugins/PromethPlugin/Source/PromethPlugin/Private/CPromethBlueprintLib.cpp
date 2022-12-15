// Fill out your copyright notice in the Description page of Project Settings.


#include "CPromethBlueprintLib.h"
#if PLATFORM_WINDOWS
#include "Windows/AllowWindowsPlatformTypes.h"
#include "Windows/PreWindowsApi.h"
#include <stringapiset.h>
#include "Windows/PostWindowsApi.h"
#include "Windows/HideWindowsPlatformTypes.h"
#endif
#include "Misc/FileHelper.h"

int32 UCPromethBlueprintLib::clockTime = 0;
int32 UCPromethBlueprintLib::NowTimeThreadNum = 0;

double UCPromethBlueprintLib::getCurrentClockSecInPipe()
{
#ifdef _WIN32
	return double(clock()) / CLOCKS_PER_SEC;
#else
	struct timespec time1 = { 0, 0 };
	clock_gettime(CLOCK_REALTIME, &time1);
	return double(time1.tv_sec + time1.tv_nsec / 1.0e9);
#endif
}

void UCPromethBlueprintLib::PromethDebug(FString OutputStr, bool IsPrintParam, FString Prefix , bool bJustLog, float ShowTime, FColor Color)
{
	if (IsPrintParam) {
		if(bJustLog){
			UE_LOG(LogTemp, Warning, TEXT(" PromethPlugin : [ % s ] % s"), *Prefix, *OutputStr);
		}
		else{
			GEngine->AddOnScreenDebugMessage(-1, ShowTime, Color, TEXT(" PromethPlugin : [ ") + Prefix + TEXT(" ] ") + OutputStr);
			UE_LOG(LogTemp, Warning, TEXT(" PromethPlugin : [ % s ] % s"), *Prefix, *OutputStr);
		}
	}
}

void UCPromethBlueprintLib::ScanDirectory(TArray<FString>& Files, const FString& FilePath, const FString& Extension)
{
	FString SearchedFiles = FilePath + Extension;
	TArray<FString> FindedFiles;

	IFileManager::Get().FindFiles(FindedFiles, *SearchedFiles, true, false);

	FString SearchFile = "";

	for (int i = 0; i < FindedFiles.Num(); i++){
		SearchFile = FilePath + FindedFiles[i];
		Files.Add(SearchFile);
	}

}



bool UCPromethBlueprintLib::SaveTXT(FString Str,  FString Path)
{
	return FFileHelper::SaveStringToFile(Str, *Path);
}

StaticPromethPlatform UCPromethBlueprintLib::StaticGetPlatform()
{
	TEnumAsByte<StaticPromethPlatform> Res = StaticPromethPlatform::_None;
#if PLATFORM_WINDOWS
	Res = StaticPromethPlatform::_Windows;
#elif PLATFORM_ANDROID
	Res = StaticPromethPlatform::_Android;
#elif PLATFORM_IOS
	Res = StaticPromethPlatform::_IOS;
#elif PLATFORM_MAC
	Res = StaticPromethPlatform::_MAC;
#endif
	return Res;
}

template<typename T>
int UCPromethBlueprintLib::GetPtrLen(T* ptr)
{
	
	int len = 0;
	T* ptrIndex = ptr;
	do {
		if (ptrIndex) {
			++len;
			++ptr;
		}
		else
			break;
	} while (1);
	return len;
	
}

char* UCPromethBlueprintLib::TCHARToChar(TCHAR* pTchar)
{
	char* pChar = nullptr;
#if PLATFORM_WINDOWS
	int nLen = wcslen(pTchar) + 1;
	pChar = new char[nLen * 2];
	WideCharToMultiByte(CP_ACP, 0, pTchar, nLen, pChar, 2 * nLen, NULL, NULL);
#endif
	return pChar;
}

FString UCPromethBlueprintLib::GetNewName()
{
	FString ResName = "";
	if (UCPromethBlueprintLib::clockTime == clock()) {
		++UCPromethBlueprintLib::NowTimeThreadNum;
	}
	else {
		UCPromethBlueprintLib::clockTime = clock();
		UCPromethBlueprintLib::NowTimeThreadNum = 0;
	}
	ResName += FString::FromInt(UCPromethBlueprintLib::clockTime);
	ResName += TEXT("_");
	ResName += FString::FromInt(UCPromethBlueprintLib::NowTimeThreadNum);
	return ResName;
}

