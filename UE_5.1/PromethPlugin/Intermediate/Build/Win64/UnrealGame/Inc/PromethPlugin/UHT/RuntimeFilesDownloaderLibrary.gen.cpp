// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PromethPlugin/Public/RuntimeFilesDownloaderLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRuntimeFilesDownloaderLibrary() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	PROMETHPLUGIN_API UClass* Z_Construct_UClass_URuntimeFilesDownloaderLibrary();
	PROMETHPLUGIN_API UClass* Z_Construct_UClass_URuntimeFilesDownloaderLibrary_NoRegister();
	PROMETHPLUGIN_API UEnum* Z_Construct_UEnum_PromethPlugin_DownloadResult();
	PROMETHPLUGIN_API UFunction* Z_Construct_UDelegateFunction_PromethPlugin_OnFilesDownloaderProgress__DelegateSignature();
	PROMETHPLUGIN_API UFunction* Z_Construct_UDelegateFunction_PromethPlugin_OnFilesDownloaderResult__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_PromethPlugin();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_DownloadResult;
	static UEnum* DownloadResult_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_DownloadResult.OuterSingleton)
		{
			Z_Registration_Info_UEnum_DownloadResult.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PromethPlugin_DownloadResult, Z_Construct_UPackage__Script_PromethPlugin(), TEXT("DownloadResult"));
		}
		return Z_Registration_Info_UEnum_DownloadResult.OuterSingleton;
	}
	template<> PROMETHPLUGIN_API UEnum* StaticEnum<DownloadResult>()
	{
		return DownloadResult_StaticEnum();
	}
	struct Z_Construct_UEnum_PromethPlugin_DownloadResult_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_PromethPlugin_DownloadResult_Statics::Enumerators[] = {
		{ "SuccessDownloading", (int64)SuccessDownloading },
		{ "DownloadFailed", (int64)DownloadFailed },
		{ "SaveFailed", (int64)SaveFailed },
		{ "DirectoryCreationFailed", (int64)DirectoryCreationFailed },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_PromethPlugin_DownloadResult_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Runtime Files Downloader" },
		{ "Comment", "/**\n * Possible results from a download request.\n */" },
		{ "DirectoryCreationFailed.DisplayName", "Directory creation failed" },
		{ "DirectoryCreationFailed.Name", "DirectoryCreationFailed" },
		{ "DownloadFailed.DisplayName", "Download failed" },
		{ "DownloadFailed.Name", "DownloadFailed" },
		{ "ModuleRelativePath", "Public/RuntimeFilesDownloaderLibrary.h" },
		{ "SaveFailed.DisplayName", "Save failed" },
		{ "SaveFailed.Name", "SaveFailed" },
		{ "SuccessDownloading.DisplayName", "Success" },
		{ "SuccessDownloading.Name", "SuccessDownloading" },
		{ "ToolTip", "Possible results from a download request." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PromethPlugin_DownloadResult_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_PromethPlugin,
		nullptr,
		"DownloadResult",
		"DownloadResult",
		Z_Construct_UEnum_PromethPlugin_DownloadResult_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_PromethPlugin_DownloadResult_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_PromethPlugin_DownloadResult_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_PromethPlugin_DownloadResult_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_PromethPlugin_DownloadResult()
	{
		if (!Z_Registration_Info_UEnum_DownloadResult.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_DownloadResult.InnerSingleton, Z_Construct_UEnum_PromethPlugin_DownloadResult_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_DownloadResult.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_PromethPlugin_OnFilesDownloaderProgress__DelegateSignature_Statics
	{
		struct _Script_PromethPlugin_eventOnFilesDownloaderProgress_Parms
		{
			int32 BytesSent;
			int32 BytesReceived;
			int32 ContentLength;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BytesSent_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_BytesSent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BytesReceived_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_BytesReceived;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContentLength_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ContentLength;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_PromethPlugin_OnFilesDownloaderProgress__DelegateSignature_Statics::NewProp_BytesSent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_PromethPlugin_OnFilesDownloaderProgress__DelegateSignature_Statics::NewProp_BytesSent = { "BytesSent", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_PromethPlugin_eventOnFilesDownloaderProgress_Parms, BytesSent), METADATA_PARAMS(Z_Construct_UDelegateFunction_PromethPlugin_OnFilesDownloaderProgress__DelegateSignature_Statics::NewProp_BytesSent_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PromethPlugin_OnFilesDownloaderProgress__DelegateSignature_Statics::NewProp_BytesSent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_PromethPlugin_OnFilesDownloaderProgress__DelegateSignature_Statics::NewProp_BytesReceived_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_PromethPlugin_OnFilesDownloaderProgress__DelegateSignature_Statics::NewProp_BytesReceived = { "BytesReceived", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_PromethPlugin_eventOnFilesDownloaderProgress_Parms, BytesReceived), METADATA_PARAMS(Z_Construct_UDelegateFunction_PromethPlugin_OnFilesDownloaderProgress__DelegateSignature_Statics::NewProp_BytesReceived_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PromethPlugin_OnFilesDownloaderProgress__DelegateSignature_Statics::NewProp_BytesReceived_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_PromethPlugin_OnFilesDownloaderProgress__DelegateSignature_Statics::NewProp_ContentLength_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_PromethPlugin_OnFilesDownloaderProgress__DelegateSignature_Statics::NewProp_ContentLength = { "ContentLength", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_PromethPlugin_eventOnFilesDownloaderProgress_Parms, ContentLength), METADATA_PARAMS(Z_Construct_UDelegateFunction_PromethPlugin_OnFilesDownloaderProgress__DelegateSignature_Statics::NewProp_ContentLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PromethPlugin_OnFilesDownloaderProgress__DelegateSignature_Statics::NewProp_ContentLength_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_PromethPlugin_OnFilesDownloaderProgress__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PromethPlugin_OnFilesDownloaderProgress__DelegateSignature_Statics::NewProp_BytesSent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PromethPlugin_OnFilesDownloaderProgress__DelegateSignature_Statics::NewProp_BytesReceived,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PromethPlugin_OnFilesDownloaderProgress__DelegateSignature_Statics::NewProp_ContentLength,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_PromethPlugin_OnFilesDownloaderProgress__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n * Declare delegate which will be called during the download process. Divide \"Bytes Received\" by \"Content Length\" to get the download percentage\n */" },
		{ "ModuleRelativePath", "Public/RuntimeFilesDownloaderLibrary.h" },
		{ "ToolTip", "Declare delegate which will be called during the download process. Divide \"Bytes Received\" by \"Content Length\" to get the download percentage" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_PromethPlugin_OnFilesDownloaderProgress__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_PromethPlugin, nullptr, "OnFilesDownloaderProgress__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_PromethPlugin_OnFilesDownloaderProgress__DelegateSignature_Statics::_Script_PromethPlugin_eventOnFilesDownloaderProgress_Parms), Z_Construct_UDelegateFunction_PromethPlugin_OnFilesDownloaderProgress__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PromethPlugin_OnFilesDownloaderProgress__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_PromethPlugin_OnFilesDownloaderProgress__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PromethPlugin_OnFilesDownloaderProgress__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_PromethPlugin_OnFilesDownloaderProgress__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_PromethPlugin_OnFilesDownloaderProgress__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_PromethPlugin_OnFilesDownloaderResult__DelegateSignature_Statics
	{
		struct _Script_PromethPlugin_eventOnFilesDownloaderResult_Parms
		{
			TEnumAsByte<DownloadResult> Result;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_PromethPlugin_OnFilesDownloaderResult__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_PromethPlugin_eventOnFilesDownloaderResult_Parms, Result), Z_Construct_UEnum_PromethPlugin_DownloadResult, METADATA_PARAMS(nullptr, 0) }; // 1227702931
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_PromethPlugin_OnFilesDownloaderResult__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PromethPlugin_OnFilesDownloaderResult__DelegateSignature_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_PromethPlugin_OnFilesDownloaderResult__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n * Declare a delegate that will be called on the download result\n */" },
		{ "ModuleRelativePath", "Public/RuntimeFilesDownloaderLibrary.h" },
		{ "ToolTip", "Declare a delegate that will be called on the download result" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_PromethPlugin_OnFilesDownloaderResult__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_PromethPlugin, nullptr, "OnFilesDownloaderResult__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_PromethPlugin_OnFilesDownloaderResult__DelegateSignature_Statics::_Script_PromethPlugin_eventOnFilesDownloaderResult_Parms), Z_Construct_UDelegateFunction_PromethPlugin_OnFilesDownloaderResult__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PromethPlugin_OnFilesDownloaderResult__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_PromethPlugin_OnFilesDownloaderResult__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PromethPlugin_OnFilesDownloaderResult__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_PromethPlugin_OnFilesDownloaderResult__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_PromethPlugin_OnFilesDownloaderResult__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(URuntimeFilesDownloaderLibrary::execDownloadFile)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_URL);
		P_GET_PROPERTY(FStrProperty,Z_Param_SavePath);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeOut);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->DownloadFile(Z_Param_URL,Z_Param_SavePath,Z_Param_TimeOut);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeFilesDownloaderLibrary::execCreateDownloader)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(URuntimeFilesDownloaderLibrary**)Z_Param__Result=URuntimeFilesDownloaderLibrary::CreateDownloader();
		P_NATIVE_END;
	}
	void URuntimeFilesDownloaderLibrary::StaticRegisterNativesURuntimeFilesDownloaderLibrary()
	{
		UClass* Class = URuntimeFilesDownloaderLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateDownloader", &URuntimeFilesDownloaderLibrary::execCreateDownloader },
			{ "DownloadFile", &URuntimeFilesDownloaderLibrary::execDownloadFile },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URuntimeFilesDownloaderLibrary_CreateDownloader_Statics
	{
		struct RuntimeFilesDownloaderLibrary_eventCreateDownloader_Parms
		{
			URuntimeFilesDownloaderLibrary* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URuntimeFilesDownloaderLibrary_CreateDownloader_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeFilesDownloaderLibrary_eventCreateDownloader_Parms, ReturnValue), Z_Construct_UClass_URuntimeFilesDownloaderLibrary_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeFilesDownloaderLibrary_CreateDownloader_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeFilesDownloaderLibrary_CreateDownloader_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeFilesDownloaderLibrary_CreateDownloader_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Files Downloader" },
		{ "Comment", "/**\n\x09 * Instantiates a Files Downloader object, starts downloading and saves it when done\n\x09 *\n\x09 * @return The RuntimeFilesDownloader object. Bind to it's OnResult event to know when it is in the process of downloading and has been downloaded\n\x09 */" },
		{ "ModuleRelativePath", "Public/RuntimeFilesDownloaderLibrary.h" },
		{ "ToolTip", "Instantiates a Files Downloader object, starts downloading and saves it when done\n\n@return The RuntimeFilesDownloader object. Bind to it's OnResult event to know when it is in the process of downloading and has been downloaded" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeFilesDownloaderLibrary_CreateDownloader_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeFilesDownloaderLibrary, nullptr, "CreateDownloader", nullptr, nullptr, sizeof(Z_Construct_UFunction_URuntimeFilesDownloaderLibrary_CreateDownloader_Statics::RuntimeFilesDownloaderLibrary_eventCreateDownloader_Parms), Z_Construct_UFunction_URuntimeFilesDownloaderLibrary_CreateDownloader_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeFilesDownloaderLibrary_CreateDownloader_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeFilesDownloaderLibrary_CreateDownloader_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeFilesDownloaderLibrary_CreateDownloader_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeFilesDownloaderLibrary_CreateDownloader()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URuntimeFilesDownloaderLibrary_CreateDownloader_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeFilesDownloaderLibrary_DownloadFile_Statics
	{
		struct RuntimeFilesDownloaderLibrary_eventDownloadFile_Parms
		{
			FString URL;
			FString SavePath;
			float TimeOut;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_URL_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_URL;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SavePath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SavePath;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeOut;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeFilesDownloaderLibrary_DownloadFile_Statics::NewProp_URL_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URuntimeFilesDownloaderLibrary_DownloadFile_Statics::NewProp_URL = { "URL", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeFilesDownloaderLibrary_eventDownloadFile_Parms, URL), METADATA_PARAMS(Z_Construct_UFunction_URuntimeFilesDownloaderLibrary_DownloadFile_Statics::NewProp_URL_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeFilesDownloaderLibrary_DownloadFile_Statics::NewProp_URL_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeFilesDownloaderLibrary_DownloadFile_Statics::NewProp_SavePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URuntimeFilesDownloaderLibrary_DownloadFile_Statics::NewProp_SavePath = { "SavePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeFilesDownloaderLibrary_eventDownloadFile_Parms, SavePath), METADATA_PARAMS(Z_Construct_UFunction_URuntimeFilesDownloaderLibrary_DownloadFile_Statics::NewProp_SavePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeFilesDownloaderLibrary_DownloadFile_Statics::NewProp_SavePath_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URuntimeFilesDownloaderLibrary_DownloadFile_Statics::NewProp_TimeOut = { "TimeOut", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeFilesDownloaderLibrary_eventDownloadFile_Parms, TimeOut), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URuntimeFilesDownloaderLibrary_DownloadFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RuntimeFilesDownloaderLibrary_eventDownloadFile_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URuntimeFilesDownloaderLibrary_DownloadFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RuntimeFilesDownloaderLibrary_eventDownloadFile_Parms), &Z_Construct_UFunction_URuntimeFilesDownloaderLibrary_DownloadFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeFilesDownloaderLibrary_DownloadFile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeFilesDownloaderLibrary_DownloadFile_Statics::NewProp_URL,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeFilesDownloaderLibrary_DownloadFile_Statics::NewProp_SavePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeFilesDownloaderLibrary_DownloadFile_Statics::NewProp_TimeOut,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeFilesDownloaderLibrary_DownloadFile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeFilesDownloaderLibrary_DownloadFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Files Downloader" },
		{ "Comment", "/**\n\x09 * Starts downloading a file and saves it when done\n\x09 *\n\x09 * @param URL The file URL to be downloaded\n\x09 * @param SavePath The absolute path and file name to save the downloaded file\n\x09 * @param TimeOut Maximum waiting time in case of zero download progress, in seconds\n\x09 * @return Whether the download was started successfully or not\n\x09 */" },
		{ "CPP_Default_TimeOut", "5.000000" },
		{ "ModuleRelativePath", "Public/RuntimeFilesDownloaderLibrary.h" },
		{ "ToolTip", "Starts downloading a file and saves it when done\n\n@param URL The file URL to be downloaded\n@param SavePath The absolute path and file name to save the downloaded file\n@param TimeOut Maximum waiting time in case of zero download progress, in seconds\n@return Whether the download was started successfully or not" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeFilesDownloaderLibrary_DownloadFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeFilesDownloaderLibrary, nullptr, "DownloadFile", nullptr, nullptr, sizeof(Z_Construct_UFunction_URuntimeFilesDownloaderLibrary_DownloadFile_Statics::RuntimeFilesDownloaderLibrary_eventDownloadFile_Parms), Z_Construct_UFunction_URuntimeFilesDownloaderLibrary_DownloadFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeFilesDownloaderLibrary_DownloadFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeFilesDownloaderLibrary_DownloadFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeFilesDownloaderLibrary_DownloadFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeFilesDownloaderLibrary_DownloadFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URuntimeFilesDownloaderLibrary_DownloadFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URuntimeFilesDownloaderLibrary);
	UClass* Z_Construct_UClass_URuntimeFilesDownloaderLibrary_NoRegister()
	{
		return URuntimeFilesDownloaderLibrary::StaticClass();
	}
	struct Z_Construct_UClass_URuntimeFilesDownloaderLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnProgress_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnProgress;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnResult_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnResult;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FileURL_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FileURL;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FileSavePath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FileSavePath;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URuntimeFilesDownloaderLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_PromethPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URuntimeFilesDownloaderLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URuntimeFilesDownloaderLibrary_CreateDownloader, "CreateDownloader" }, // 1672319098
		{ &Z_Construct_UFunction_URuntimeFilesDownloaderLibrary_DownloadFile, "DownloadFile" }, // 3950028222
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URuntimeFilesDownloaderLibrary_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Runtime Files Downloader" },
		{ "Comment", "/**\n * Library for downloading files by direct link to the specified folder\n */" },
		{ "IncludePath", "RuntimeFilesDownloaderLibrary.h" },
		{ "ModuleRelativePath", "Public/RuntimeFilesDownloaderLibrary.h" },
		{ "ToolTip", "Library for downloading files by direct link to the specified folder" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URuntimeFilesDownloaderLibrary_Statics::NewProp_OnProgress_MetaData[] = {
		{ "Category", "Runtime Files Downloader" },
		{ "Comment", "/**\n\x09 * Bind to know when the download is on progress.\n\x09 */" },
		{ "ModuleRelativePath", "Public/RuntimeFilesDownloaderLibrary.h" },
		{ "ToolTip", "Bind to know when the download is on progress." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_URuntimeFilesDownloaderLibrary_Statics::NewProp_OnProgress = { "OnProgress", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URuntimeFilesDownloaderLibrary, OnProgress), Z_Construct_UDelegateFunction_PromethPlugin_OnFilesDownloaderProgress__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_URuntimeFilesDownloaderLibrary_Statics::NewProp_OnProgress_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeFilesDownloaderLibrary_Statics::NewProp_OnProgress_MetaData)) }; // 3046329201
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URuntimeFilesDownloaderLibrary_Statics::NewProp_OnResult_MetaData[] = {
		{ "Category", "Runtime Files Downloader" },
		{ "Comment", "/**\n\x09 * Bind to know when the download is complete (even if it fails)\n\x09 */" },
		{ "ModuleRelativePath", "Public/RuntimeFilesDownloaderLibrary.h" },
		{ "ToolTip", "Bind to know when the download is complete (even if it fails)" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_URuntimeFilesDownloaderLibrary_Statics::NewProp_OnResult = { "OnResult", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URuntimeFilesDownloaderLibrary, OnResult), Z_Construct_UDelegateFunction_PromethPlugin_OnFilesDownloaderResult__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_URuntimeFilesDownloaderLibrary_Statics::NewProp_OnResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeFilesDownloaderLibrary_Statics::NewProp_OnResult_MetaData)) }; // 826979760
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URuntimeFilesDownloaderLibrary_Statics::NewProp_FileURL_MetaData[] = {
		{ "Category", "Runtime Files Downloader" },
		{ "Comment", "/**\n\x09 * URL where to start downloading the file\n\x09 */" },
		{ "ModuleRelativePath", "Public/RuntimeFilesDownloaderLibrary.h" },
		{ "ToolTip", "URL where to start downloading the file" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_URuntimeFilesDownloaderLibrary_Statics::NewProp_FileURL = { "FileURL", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URuntimeFilesDownloaderLibrary, FileURL), METADATA_PARAMS(Z_Construct_UClass_URuntimeFilesDownloaderLibrary_Statics::NewProp_FileURL_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeFilesDownloaderLibrary_Statics::NewProp_FileURL_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URuntimeFilesDownloaderLibrary_Statics::NewProp_FileSavePath_MetaData[] = {
		{ "Category", "Runtime Files Downloader" },
		{ "Comment", "/**\n\x09 * The path where to save the downloaded file\n\x09 */" },
		{ "ModuleRelativePath", "Public/RuntimeFilesDownloaderLibrary.h" },
		{ "ToolTip", "The path where to save the downloaded file" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_URuntimeFilesDownloaderLibrary_Statics::NewProp_FileSavePath = { "FileSavePath", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URuntimeFilesDownloaderLibrary, FileSavePath), METADATA_PARAMS(Z_Construct_UClass_URuntimeFilesDownloaderLibrary_Statics::NewProp_FileSavePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeFilesDownloaderLibrary_Statics::NewProp_FileSavePath_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URuntimeFilesDownloaderLibrary_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeFilesDownloaderLibrary_Statics::NewProp_OnProgress,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeFilesDownloaderLibrary_Statics::NewProp_OnResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeFilesDownloaderLibrary_Statics::NewProp_FileURL,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeFilesDownloaderLibrary_Statics::NewProp_FileSavePath,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URuntimeFilesDownloaderLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URuntimeFilesDownloaderLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URuntimeFilesDownloaderLibrary_Statics::ClassParams = {
		&URuntimeFilesDownloaderLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_URuntimeFilesDownloaderLibrary_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeFilesDownloaderLibrary_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URuntimeFilesDownloaderLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeFilesDownloaderLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URuntimeFilesDownloaderLibrary()
	{
		if (!Z_Registration_Info_UClass_URuntimeFilesDownloaderLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URuntimeFilesDownloaderLibrary.OuterSingleton, Z_Construct_UClass_URuntimeFilesDownloaderLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URuntimeFilesDownloaderLibrary.OuterSingleton;
	}
	template<> PROMETHPLUGIN_API UClass* StaticClass<URuntimeFilesDownloaderLibrary>()
	{
		return URuntimeFilesDownloaderLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URuntimeFilesDownloaderLibrary);
	URuntimeFilesDownloaderLibrary::~URuntimeFilesDownloaderLibrary() {}
	struct Z_CompiledInDeferFile_FID_G_Test51_Plugins_PromethPlugin_Source_PromethPlugin_Public_RuntimeFilesDownloaderLibrary_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_G_Test51_Plugins_PromethPlugin_Source_PromethPlugin_Public_RuntimeFilesDownloaderLibrary_h_Statics::EnumInfo[] = {
		{ DownloadResult_StaticEnum, TEXT("DownloadResult"), &Z_Registration_Info_UEnum_DownloadResult, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1227702931U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_G_Test51_Plugins_PromethPlugin_Source_PromethPlugin_Public_RuntimeFilesDownloaderLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URuntimeFilesDownloaderLibrary, URuntimeFilesDownloaderLibrary::StaticClass, TEXT("URuntimeFilesDownloaderLibrary"), &Z_Registration_Info_UClass_URuntimeFilesDownloaderLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URuntimeFilesDownloaderLibrary), 801494383U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_G_Test51_Plugins_PromethPlugin_Source_PromethPlugin_Public_RuntimeFilesDownloaderLibrary_h_3153918639(TEXT("/Script/PromethPlugin"),
		Z_CompiledInDeferFile_FID_G_Test51_Plugins_PromethPlugin_Source_PromethPlugin_Public_RuntimeFilesDownloaderLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_G_Test51_Plugins_PromethPlugin_Source_PromethPlugin_Public_RuntimeFilesDownloaderLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_G_Test51_Plugins_PromethPlugin_Source_PromethPlugin_Public_RuntimeFilesDownloaderLibrary_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_G_Test51_Plugins_PromethPlugin_Source_PromethPlugin_Public_RuntimeFilesDownloaderLibrary_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
