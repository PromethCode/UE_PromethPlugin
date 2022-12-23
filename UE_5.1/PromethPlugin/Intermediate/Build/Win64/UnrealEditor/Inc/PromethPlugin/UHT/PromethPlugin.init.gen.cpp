// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePromethPlugin_init() {}
	PROMETHPLUGIN_API UFunction* Z_Construct_UDelegateFunction_PromethPlugin_OnFilesDownloaderProgress__DelegateSignature();
	PROMETHPLUGIN_API UFunction* Z_Construct_UDelegateFunction_PromethPlugin_OnFilesDownloaderResult__DelegateSignature();
	PROMETHPLUGIN_API UFunction* Z_Construct_UDelegateFunction_PromethPlugin_OpenVideoSucceed__DelegateSignature();
	PROMETHPLUGIN_API UFunction* Z_Construct_UDelegateFunction_PromethPlugin_SeekSucceed__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_PromethPlugin;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_PromethPlugin()
	{
		if (!Z_Registration_Info_UPackage__Script_PromethPlugin.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_PromethPlugin_OnFilesDownloaderProgress__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_PromethPlugin_OnFilesDownloaderResult__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_PromethPlugin_OpenVideoSucceed__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_PromethPlugin_SeekSucceed__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/PromethPlugin",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xFF2D30A3,
				0x12AE4075,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_PromethPlugin.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_PromethPlugin.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_PromethPlugin(Z_Construct_UPackage__Script_PromethPlugin, TEXT("/Script/PromethPlugin"), Z_Registration_Info_UPackage__Script_PromethPlugin, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xFF2D30A3, 0x12AE4075));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
