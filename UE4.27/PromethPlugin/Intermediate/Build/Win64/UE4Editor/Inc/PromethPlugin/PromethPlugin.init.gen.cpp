// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePromethPlugin_init() {}
	PROMETHPLUGIN_API UFunction* Z_Construct_UDelegateFunction_PromethPlugin_OpenVideoSucceed__DelegateSignature();
	PROMETHPLUGIN_API UFunction* Z_Construct_UDelegateFunction_PromethPlugin_SeekSucceed__DelegateSignature();
	PROMETHPLUGIN_API UFunction* Z_Construct_UDelegateFunction_PromethPlugin_OnFilesDownloaderProgress__DelegateSignature();
	PROMETHPLUGIN_API UFunction* Z_Construct_UDelegateFunction_PromethPlugin_OnFilesDownloaderResult__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_PromethPlugin()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_PromethPlugin_OpenVideoSucceed__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_PromethPlugin_SeekSucceed__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_PromethPlugin_OnFilesDownloaderProgress__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_PromethPlugin_OnFilesDownloaderResult__DelegateSignature,
			};
			static const UE4CodeGen_Private::FPackageParams PackageParams = {
				"/Script/PromethPlugin",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xDDA5E94D,
				0xDA472557,
				METADATA_PARAMS(nullptr, 0)
			};
			UE4CodeGen_Private::ConstructUPackage(ReturnPackage, PackageParams);
		}
		return ReturnPackage;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
