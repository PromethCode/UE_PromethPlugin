// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PromethPlugin/Public/RuntimeFilesDownloaderLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRuntimeFilesDownloaderLibrary() {}
// Cross Module References
	PROMETHPLUGIN_API UFunction* Z_Construct_UDelegateFunction_PromethPlugin_OnFilesDownloaderResult__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_PromethPlugin();
	PROMETHPLUGIN_API UEnum* Z_Construct_UEnum_PromethPlugin_DownloadResult();
	PROMETHPLUGIN_API UFunction* Z_Construct_UDelegateFunction_PromethPlugin_OnFilesDownloaderProgress__DelegateSignature();
	PROMETHPLUGIN_API UClass* Z_Construct_UClass_URuntimeFilesDownloaderLibrary_NoRegister();
	PROMETHPLUGIN_API UClass* Z_Construct_UClass_URuntimeFilesDownloaderLibrary();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_PromethPlugin_OnFilesDownloaderResult__DelegateSignature_Statics
	{
		struct _Script_PromethPlugin_eventOnFilesDownloaderResult_Parms
		{
			TEnumAsByte<DownloadResult> Result;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_PromethPlugin_OnFilesDownloaderResult__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_PromethPlugin_eventOnFilesDownloaderResult_Parms, Result), Z_Construct_UEnum_PromethPlugin_DownloadResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_PromethPlugin_OnFilesDownloaderResult__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PromethPlugin_OnFilesDownloaderResult__DelegateSignature_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_PromethPlugin_OnFilesDownloaderResult__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n * Declare a delegate that will be called on the download result\n */" },
		{ "ModuleRelativePath", "Public/RuntimeFilesDownloaderLibrary.h" },
		{ "ToolTip", "Declare a delegate that will be called on the download result" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_PromethPlugin_OnFilesDownloaderResult__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_PromethPlugin, nullptr, "OnFilesDownloaderResult__DelegateSignature", nullptr, nullptr, sizeof(_Script_PromethPlugin_eventOnFilesDownloaderResult_Parms), Z_Construct_UDelegateFunction_PromethPlugin_OnFilesDownloaderResult__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PromethPlugin_OnFilesDownloaderResult__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_PromethPlugin_OnFilesDownloaderResult__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PromethPlugin_OnFilesDownloaderResult__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_PromethPlugin_OnFilesDownloaderResult__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_PromethPlugin_OnFilesDownloaderResult__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BytesSent_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BytesSent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BytesReceived_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BytesReceived;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ContentLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ContentLength;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_PromethPlugin_OnFilesDownloaderProgress__DelegateSignature_Statics::NewProp_BytesSent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_PromethPlugin_OnFilesDownloaderProgress__DelegateSignature_Statics::NewProp_BytesSent = { "BytesSent", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_PromethPlugin_eventOnFilesDownloaderProgress_Parms, BytesSent), METADATA_PARAMS(Z_Construct_UDelegateFunction_PromethPlugin_OnFilesDownloaderProgress__DelegateSignature_Statics::NewProp_BytesSent_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PromethPlugin_OnFilesDownloaderProgress__DelegateSignature_Statics::NewProp_BytesSent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_PromethPlugin_OnFilesDownloaderProgress__DelegateSignature_Statics::NewProp_BytesReceived_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_PromethPlugin_OnFilesDownloaderProgress__DelegateSignature_Statics::NewProp_BytesReceived = { "BytesReceived", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_PromethPlugin_eventOnFilesDownloaderProgress_Parms, BytesReceived), METADATA_PARAMS(Z_Construct_UDelegateFunction_PromethPlugin_OnFilesDownloaderProgress__DelegateSignature_Statics::NewProp_BytesReceived_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PromethPlugin_OnFilesDownloaderProgress__DelegateSignature_Statics::NewProp_BytesReceived_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_PromethPlugin_OnFilesDownloaderProgress__DelegateSignature_Statics::NewProp_ContentLength_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_PromethPlugin_OnFilesDownloaderProgress__DelegateSignature_Statics::NewProp_ContentLength = { "ContentLength", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_PromethPlugin_eventOnFilesDownloaderProgress_Parms, ContentLength), METADATA_PARAMS(Z_Construct_UDelegateFunction_PromethPlugin_OnFilesDownloaderProgress__DelegateSignature_Statics::NewProp_ContentLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PromethPlugin_OnFilesDownloaderProgress__DelegateSignature_Statics::NewProp_ContentLength_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_PromethPlugin_OnFilesDownloaderProgress__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PromethPlugin_OnFilesDownloaderProgress__DelegateSignature_Statics::NewProp_BytesSent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PromethPlugin_OnFilesDownloaderProgress__DelegateSignature_Statics::NewProp_BytesReceived,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PromethPlugin_OnFilesDownloaderProgress__DelegateSignature_Statics::NewProp_ContentLength,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_PromethPlugin_OnFilesDownloaderProgress__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n * Declare delegate which will be called during the download process. Divide \"Bytes Received\" by \"Content Length\" to get the download percentage\n */" },
		{ "ModuleRelativePath", "Public/RuntimeFilesDownloaderLibrary.h" },
		{ "ToolTip", "Declare delegate which will be called during the download process. Divide \"Bytes Received\" by \"Content Length\" to get the download percentage" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_PromethPlugin_OnFilesDownloaderProgress__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_PromethPlugin, nullptr, "OnFilesDownloaderProgress__DelegateSignature", nullptr, nullptr, sizeof(_Script_PromethPlugin_eventOnFilesDownloaderProgress_Parms), Z_Construct_UDelegateFunction_PromethPlugin_OnFilesDownloaderProgress__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PromethPlugin_OnFilesDownloaderProgress__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_PromethPlugin_OnFilesDownloaderProgress__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PromethPlugin_OnFilesDownloaderProgress__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_PromethPlugin_OnFilesDownloaderProgress__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_PromethPlugin_OnFilesDownloaderProgress__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	static UEnum* DownloadResult_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PromethPlugin_DownloadResult, Z_Construct_UPackage__Script_PromethPlugin(), TEXT("DownloadResult"));
		}
		return Singleton;
	}
	template<> PROMETHPLUGIN_API UEnum* StaticEnum<DownloadResult>()
	{
		return DownloadResult_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_DownloadResult(DownloadResult_StaticEnum, TEXT("/Script/PromethPlugin"), TEXT("DownloadResult"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PromethPlugin_DownloadResult_Hash() { return 475430286U; }
	UEnum* Z_Construct_UEnum_PromethPlugin_DownloadResult()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PromethPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("DownloadResult"), 0, Get_Z_Construct_UEnum_PromethPlugin_DownloadResult_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "SuccessDownloading", (int64)SuccessDownloading },
				{ "DownloadFailed", (int64)DownloadFailed },
				{ "SaveFailed", (int64)SaveFailed },
				{ "DirectoryCreationFailed", (int64)DirectoryCreationFailed },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
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
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PromethPlugin,
				nullptr,
				"DownloadResult",
				"DownloadResult",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
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
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URuntimeFilesDownloaderLibrary_CreateDownloader_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeFilesDownloaderLibrary_eventCreateDownloader_Parms, ReturnValue), Z_Construct_UClass_URuntimeFilesDownloaderLibrary_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeFilesDownloaderLibrary_CreateDownloader_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeFilesDownloaderLibrary_CreateDownloader_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeFilesDownloaderLibrary_CreateDownloader_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Files Downloader" },
		{ "Comment", "/**\n\x09 * Instantiates a Files Downloader object, starts downloading and saves it when done\n\x09 *\n\x09 * @return The RuntimeFilesDownloader object. Bind to it's OnResult event to know when it is in the process of downloading and has been downloaded\n\x09 */" },
		{ "ModuleRelativePath", "Public/RuntimeFilesDownloaderLibrary.h" },
		{ "ToolTip", "Instantiates a Files Downloader object, starts downloading and saves it when done\n\n@return The RuntimeFilesDownloader object. Bind to it's OnResult event to know when it is in the process of downloading and has been downloaded" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeFilesDownloaderLibrary_CreateDownloader_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeFilesDownloaderLibrary, nullptr, "CreateDownloader", nullptr, nullptr, sizeof(RuntimeFilesDownloaderLibrary_eventCreateDownloader_Parms), Z_Construct_UFunction_URuntimeFilesDownloaderLibrary_CreateDownloader_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeFilesDownloaderLibrary_CreateDownloader_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeFilesDownloaderLibrary_CreateDownloader_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeFilesDownloaderLibrary_CreateDownloader_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeFilesDownloaderLibrary_CreateDownloader()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URuntimeFilesDownloaderLibrary_CreateDownloader_Statics::FuncParams);
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_URL_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_URL;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SavePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SavePath;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeOut;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeFilesDownloaderLibrary_DownloadFile_Statics::NewProp_URL_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URuntimeFilesDownloaderLibrary_DownloadFile_Statics::NewProp_URL = { "URL", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeFilesDownloaderLibrary_eventDownloadFile_Parms, URL), METADATA_PARAMS(Z_Construct_UFunction_URuntimeFilesDownloaderLibrary_DownloadFile_Statics::NewProp_URL_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeFilesDownloaderLibrary_DownloadFile_Statics::NewProp_URL_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeFilesDownloaderLibrary_DownloadFile_Statics::NewProp_SavePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URuntimeFilesDownloaderLibrary_DownloadFile_Statics::NewProp_SavePath = { "SavePath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeFilesDownloaderLibrary_eventDownloadFile_Parms, SavePath), METADATA_PARAMS(Z_Construct_UFunction_URuntimeFilesDownloaderLibrary_DownloadFile_Statics::NewProp_SavePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeFilesDownloaderLibrary_DownloadFile_Statics::NewProp_SavePath_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URuntimeFilesDownloaderLibrary_DownloadFile_Statics::NewProp_TimeOut = { "TimeOut", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeFilesDownloaderLibrary_eventDownloadFile_Parms, TimeOut), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URuntimeFilesDownloaderLibrary_DownloadFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RuntimeFilesDownloaderLibrary_eventDownloadFile_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URuntimeFilesDownloaderLibrary_DownloadFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RuntimeFilesDownloaderLibrary_eventDownloadFile_Parms), &Z_Construct_UFunction_URuntimeFilesDownloaderLibrary_DownloadFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeFilesDownloaderLibrary_DownloadFile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeFilesDownloaderLibrary_DownloadFile_Statics::NewProp_URL,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeFilesDownloaderLibrary_DownloadFile_Statics::NewProp_SavePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeFilesDownloaderLibrary_DownloadFile_Statics::NewProp_TimeOut,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeFilesDownloaderLibrary_DownloadFile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeFilesDownloaderLibrary_DownloadFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Files Downloader" },
		{ "Comment", "/**\n\x09 * Starts downloading a file and saves it when done\n\x09 *\n\x09 * @param URL The file URL to be downloaded\n\x09 * @param SavePath The absolute path and file name to save the downloaded file\n\x09 * @param TimeOut Maximum waiting time in case of zero download progress, in seconds\n\x09 * @return Whether the download was started successfully or not\n\x09 */" },
		{ "CPP_Default_TimeOut", "5.000000" },
		{ "ModuleRelativePath", "Public/RuntimeFilesDownloaderLibrary.h" },
		{ "ToolTip", "Starts downloading a file and saves it when done\n\n@param URL The file URL to be downloaded\n@param SavePath The absolute path and file name to save the downloaded file\n@param TimeOut Maximum waiting time in case of zero download progress, in seconds\n@return Whether the download was started successfully or not" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeFilesDownloaderLibrary_DownloadFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeFilesDownloaderLibrary, nullptr, "DownloadFile", nullptr, nullptr, sizeof(RuntimeFilesDownloaderLibrary_eventDownloadFile_Parms), Z_Construct_UFunction_URuntimeFilesDownloaderLibrary_DownloadFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeFilesDownloaderLibrary_DownloadFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeFilesDownloaderLibrary_DownloadFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeFilesDownloaderLibrary_DownloadFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeFilesDownloaderLibrary_DownloadFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URuntimeFilesDownloaderLibrary_DownloadFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_URuntimeFilesDownloaderLibrary_NoRegister()
	{
		return URuntimeFilesDownloaderLibrary::StaticClass();
	}
	struct Z_Construct_UClass_URuntimeFilesDownloaderLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnProgress_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnProgress;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnResult;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FileURL_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FileURL;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FileSavePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FileSavePath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URuntimeFilesDownloaderLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_PromethPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URuntimeFilesDownloaderLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URuntimeFilesDownloaderLibrary_CreateDownloader, "CreateDownloader" }, // 2424032266
		{ &Z_Construct_UFunction_URuntimeFilesDownloaderLibrary_DownloadFile, "DownloadFile" }, // 3877807915
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URuntimeFilesDownloaderLibrary_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Runtime Files Downloader" },
		{ "Comment", "/**\n * Library for downloading files by direct link to the specified folder\n */" },
		{ "IncludePath", "RuntimeFilesDownloaderLibrary.h" },
		{ "ModuleRelativePath", "Public/RuntimeFilesDownloaderLibrary.h" },
		{ "ToolTip", "Library for downloading files by direct link to the specified folder" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URuntimeFilesDownloaderLibrary_Statics::NewProp_OnProgress_MetaData[] = {
		{ "Category", "Runtime Files Downloader" },
		{ "Comment", "/**\n\x09 * Bind to know when the download is on progress.\n\x09 */" },
		{ "ModuleRelativePath", "Public/RuntimeFilesDownloaderLibrary.h" },
		{ "ToolTip", "Bind to know when the download is on progress." },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_URuntimeFilesDownloaderLibrary_Statics::NewProp_OnProgress = { "OnProgress", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URuntimeFilesDownloaderLibrary, OnProgress), Z_Construct_UDelegateFunction_PromethPlugin_OnFilesDownloaderProgress__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_URuntimeFilesDownloaderLibrary_Statics::NewProp_OnProgress_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeFilesDownloaderLibrary_Statics::NewProp_OnProgress_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URuntimeFilesDownloaderLibrary_Statics::NewProp_OnResult_MetaData[] = {
		{ "Category", "Runtime Files Downloader" },
		{ "Comment", "/**\n\x09 * Bind to know when the download is complete (even if it fails)\n\x09 */" },
		{ "ModuleRelativePath", "Public/RuntimeFilesDownloaderLibrary.h" },
		{ "ToolTip", "Bind to know when the download is complete (even if it fails)" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_URuntimeFilesDownloaderLibrary_Statics::NewProp_OnResult = { "OnResult", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URuntimeFilesDownloaderLibrary, OnResult), Z_Construct_UDelegateFunction_PromethPlugin_OnFilesDownloaderResult__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_URuntimeFilesDownloaderLibrary_Statics::NewProp_OnResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeFilesDownloaderLibrary_Statics::NewProp_OnResult_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URuntimeFilesDownloaderLibrary_Statics::NewProp_FileURL_MetaData[] = {
		{ "Category", "Runtime Files Downloader" },
		{ "Comment", "/**\n\x09 * URL where to start downloading the file\n\x09 */" },
		{ "ModuleRelativePath", "Public/RuntimeFilesDownloaderLibrary.h" },
		{ "ToolTip", "URL where to start downloading the file" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_URuntimeFilesDownloaderLibrary_Statics::NewProp_FileURL = { "FileURL", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URuntimeFilesDownloaderLibrary, FileURL), METADATA_PARAMS(Z_Construct_UClass_URuntimeFilesDownloaderLibrary_Statics::NewProp_FileURL_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeFilesDownloaderLibrary_Statics::NewProp_FileURL_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URuntimeFilesDownloaderLibrary_Statics::NewProp_FileSavePath_MetaData[] = {
		{ "Category", "Runtime Files Downloader" },
		{ "Comment", "/**\n\x09 * The path where to save the downloaded file\n\x09 */" },
		{ "ModuleRelativePath", "Public/RuntimeFilesDownloaderLibrary.h" },
		{ "ToolTip", "The path where to save the downloaded file" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_URuntimeFilesDownloaderLibrary_Statics::NewProp_FileSavePath = { "FileSavePath", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URuntimeFilesDownloaderLibrary, FileSavePath), METADATA_PARAMS(Z_Construct_UClass_URuntimeFilesDownloaderLibrary_Statics::NewProp_FileSavePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeFilesDownloaderLibrary_Statics::NewProp_FileSavePath_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URuntimeFilesDownloaderLibrary_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeFilesDownloaderLibrary_Statics::NewProp_OnProgress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeFilesDownloaderLibrary_Statics::NewProp_OnResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeFilesDownloaderLibrary_Statics::NewProp_FileURL,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeFilesDownloaderLibrary_Statics::NewProp_FileSavePath,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URuntimeFilesDownloaderLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URuntimeFilesDownloaderLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URuntimeFilesDownloaderLibrary_Statics::ClassParams = {
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
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URuntimeFilesDownloaderLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URuntimeFilesDownloaderLibrary, 2835098716);
	template<> PROMETHPLUGIN_API UClass* StaticClass<URuntimeFilesDownloaderLibrary>()
	{
		return URuntimeFilesDownloaderLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URuntimeFilesDownloaderLibrary(Z_Construct_UClass_URuntimeFilesDownloaderLibrary, &URuntimeFilesDownloaderLibrary::StaticClass, TEXT("/Script/PromethPlugin"), TEXT("URuntimeFilesDownloaderLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URuntimeFilesDownloaderLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
