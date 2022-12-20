// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PromethPlugin/Public/CPromethBlueprintLib.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCPromethBlueprintLib() {}
// Cross Module References
	PROMETHPLUGIN_API UEnum* Z_Construct_UEnum_PromethPlugin_StaticPromethPlatform();
	UPackage* Z_Construct_UPackage__Script_PromethPlugin();
	PROMETHPLUGIN_API UClass* Z_Construct_UClass_UCPromethBlueprintLib_NoRegister();
	PROMETHPLUGIN_API UClass* Z_Construct_UClass_UCPromethBlueprintLib();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
// End Cross Module References
	static UEnum* StaticPromethPlatform_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PromethPlugin_StaticPromethPlatform, Z_Construct_UPackage__Script_PromethPlugin(), TEXT("StaticPromethPlatform"));
		}
		return Singleton;
	}
	template<> PROMETHPLUGIN_API UEnum* StaticEnum<StaticPromethPlatform>()
	{
		return StaticPromethPlatform_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_StaticPromethPlatform(StaticPromethPlatform_StaticEnum, TEXT("/Script/PromethPlugin"), TEXT("StaticPromethPlatform"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PromethPlugin_StaticPromethPlatform_Hash() { return 2327625118U; }
	UEnum* Z_Construct_UEnum_PromethPlugin_StaticPromethPlatform()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PromethPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("StaticPromethPlatform"), 0, Get_Z_Construct_UEnum_PromethPlugin_StaticPromethPlatform_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "_None", (int64)_None },
				{ "_Windows", (int64)_Windows },
				{ "_IOS", (int64)_IOS },
				{ "_Android", (int64)_Android },
				{ "_MAC", (int64)_MAC },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "_Android.Comment", "/**\n * \n */" },
				{ "_Android.Name", "_Android" },
				{ "_IOS.Comment", "/**\n * \n */" },
				{ "_IOS.Name", "_IOS" },
				{ "_MAC.Comment", "/**\n * \n */" },
				{ "_MAC.Name", "_MAC" },
				{ "_None.Comment", "/**\n * \n */" },
				{ "_None.Name", "_None" },
				{ "_Windows.Comment", "/**\n * \n */" },
				{ "_Windows.Name", "_Windows" },
				{ "BlueprintType", "true" },
				{ "Comment", "/**\n * \n */" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/CPromethBlueprintLib.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PromethPlugin,
				nullptr,
				"StaticPromethPlatform",
				"StaticPromethPlatform",
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
	DEFINE_FUNCTION(UCPromethBlueprintLib::execGetIOSTmpDir)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UCPromethBlueprintLib::GetIOSTmpDir();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCPromethBlueprintLib::execStaticGetPlatform)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TEnumAsByte<StaticPromethPlatform>*)Z_Param__Result=UCPromethBlueprintLib::StaticGetPlatform();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCPromethBlueprintLib::execSaveTXT)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Str);
		P_GET_PROPERTY(FStrProperty,Z_Param_Path);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UCPromethBlueprintLib::SaveTXT(Z_Param_Str,Z_Param_Path);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCPromethBlueprintLib::execScanDirectory)
	{
		P_GET_TARRAY_REF(FString,Z_Param_Out_Files);
		P_GET_PROPERTY(FStrProperty,Z_Param_FilePath);
		P_GET_PROPERTY(FStrProperty,Z_Param_Extension);
		P_FINISH;
		P_NATIVE_BEGIN;
		UCPromethBlueprintLib::ScanDirectory(Z_Param_Out_Files,Z_Param_FilePath,Z_Param_Extension);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCPromethBlueprintLib::execPromethDebug)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_OutputStr);
		P_GET_UBOOL(Z_Param_IsPrintParam);
		P_GET_PROPERTY(FStrProperty,Z_Param_Prefix);
		P_GET_UBOOL(Z_Param_bJustLog);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ShowTime);
		P_GET_STRUCT(FColor,Z_Param_Color);
		P_FINISH;
		P_NATIVE_BEGIN;
		UCPromethBlueprintLib::PromethDebug(Z_Param_OutputStr,Z_Param_IsPrintParam,Z_Param_Prefix,Z_Param_bJustLog,Z_Param_ShowTime,Z_Param_Color);
		P_NATIVE_END;
	}
	void UCPromethBlueprintLib::StaticRegisterNativesUCPromethBlueprintLib()
	{
		UClass* Class = UCPromethBlueprintLib::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetIOSTmpDir", &UCPromethBlueprintLib::execGetIOSTmpDir },
			{ "PromethDebug", &UCPromethBlueprintLib::execPromethDebug },
			{ "SaveTXT", &UCPromethBlueprintLib::execSaveTXT },
			{ "ScanDirectory", &UCPromethBlueprintLib::execScanDirectory },
			{ "StaticGetPlatform", &UCPromethBlueprintLib::execStaticGetPlatform },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCPromethBlueprintLib_GetIOSTmpDir_Statics
	{
		struct CPromethBlueprintLib_eventGetIOSTmpDir_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCPromethBlueprintLib_GetIOSTmpDir_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CPromethBlueprintLib_eventGetIOSTmpDir_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCPromethBlueprintLib_GetIOSTmpDir_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCPromethBlueprintLib_GetIOSTmpDir_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCPromethBlueprintLib_GetIOSTmpDir_Statics::Function_MetaDataParams[] = {
		{ "Category", "PromethStaticFun" },
		{ "ModuleRelativePath", "Public/CPromethBlueprintLib.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCPromethBlueprintLib_GetIOSTmpDir_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCPromethBlueprintLib, nullptr, "GetIOSTmpDir", nullptr, nullptr, sizeof(CPromethBlueprintLib_eventGetIOSTmpDir_Parms), Z_Construct_UFunction_UCPromethBlueprintLib_GetIOSTmpDir_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCPromethBlueprintLib_GetIOSTmpDir_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCPromethBlueprintLib_GetIOSTmpDir_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCPromethBlueprintLib_GetIOSTmpDir_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCPromethBlueprintLib_GetIOSTmpDir()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCPromethBlueprintLib_GetIOSTmpDir_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCPromethBlueprintLib_PromethDebug_Statics
	{
		struct CPromethBlueprintLib_eventPromethDebug_Parms
		{
			FString OutputStr;
			bool IsPrintParam;
			FString Prefix;
			bool bJustLog;
			float ShowTime;
			FColor Color;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OutputStr;
		static void NewProp_IsPrintParam_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsPrintParam;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Prefix;
		static void NewProp_bJustLog_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bJustLog;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ShowTime;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Color;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCPromethBlueprintLib_PromethDebug_Statics::NewProp_OutputStr = { "OutputStr", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CPromethBlueprintLib_eventPromethDebug_Parms, OutputStr), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UCPromethBlueprintLib_PromethDebug_Statics::NewProp_IsPrintParam_SetBit(void* Obj)
	{
		((CPromethBlueprintLib_eventPromethDebug_Parms*)Obj)->IsPrintParam = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCPromethBlueprintLib_PromethDebug_Statics::NewProp_IsPrintParam = { "IsPrintParam", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CPromethBlueprintLib_eventPromethDebug_Parms), &Z_Construct_UFunction_UCPromethBlueprintLib_PromethDebug_Statics::NewProp_IsPrintParam_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCPromethBlueprintLib_PromethDebug_Statics::NewProp_Prefix = { "Prefix", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CPromethBlueprintLib_eventPromethDebug_Parms, Prefix), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UCPromethBlueprintLib_PromethDebug_Statics::NewProp_bJustLog_SetBit(void* Obj)
	{
		((CPromethBlueprintLib_eventPromethDebug_Parms*)Obj)->bJustLog = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCPromethBlueprintLib_PromethDebug_Statics::NewProp_bJustLog = { "bJustLog", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CPromethBlueprintLib_eventPromethDebug_Parms), &Z_Construct_UFunction_UCPromethBlueprintLib_PromethDebug_Statics::NewProp_bJustLog_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCPromethBlueprintLib_PromethDebug_Statics::NewProp_ShowTime = { "ShowTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CPromethBlueprintLib_eventPromethDebug_Parms, ShowTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCPromethBlueprintLib_PromethDebug_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CPromethBlueprintLib_eventPromethDebug_Parms, Color), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCPromethBlueprintLib_PromethDebug_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCPromethBlueprintLib_PromethDebug_Statics::NewProp_OutputStr,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCPromethBlueprintLib_PromethDebug_Statics::NewProp_IsPrintParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCPromethBlueprintLib_PromethDebug_Statics::NewProp_Prefix,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCPromethBlueprintLib_PromethDebug_Statics::NewProp_bJustLog,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCPromethBlueprintLib_PromethDebug_Statics::NewProp_ShowTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCPromethBlueprintLib_PromethDebug_Statics::NewProp_Color,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCPromethBlueprintLib_PromethDebug_Statics::Function_MetaDataParams[] = {
		{ "Category", "PromethStaticFun" },
		{ "Comment", "/*\n\x09- FString OutputStr\x09\x09\x09\x09\x09\xe8\xbe\x93\xe5\x87\xba\n\x09- bool IsPrintParam = true\x09\x09\xe6\x8e\xa7\xe5\x88\xb6\xe8\xbe\x93\xe5\x87\xba\xe7\x9a\x84\xe5\xb8\x83\xe5\xb0\x94\n\x09- FString Prefix = \"\"\x09\x09\x09\x09\xe5\x89\x8d\xe7\xbc\x80\n\x09- bool bJustLog = true\x09\x09\x09\x09\xe4\xbb\x85\xe5\x9c\xa8log\xe7\x95\x8c\xe9\x9d\xa2\xe8\xbe\x93\xe5\x87\xba  \xe4\xb8\xba""false\xe5\x88\x99\xe8\xbf\x98\xe4\xbc\x9a\xe5\x9c\xa8\xe5\xb1\x8f\xe5\xb9\x95\xe8\xbe\x93\xe5\x87\xba\n\x09*/" },
		{ "CPP_Default_bJustLog", "true" },
		{ "CPP_Default_Color", "(R=0,G=0,B=255,A=255)" },
		{ "CPP_Default_IsPrintParam", "true" },
		{ "CPP_Default_Prefix", "" },
		{ "CPP_Default_ShowTime", "5.000000" },
		{ "ModuleRelativePath", "Public/CPromethBlueprintLib.h" },
		{ "ToolTip", "- FString OutputStr                                     \xe8\xbe\x93\xe5\x87\xba\n- bool IsPrintParam = true              \xe6\x8e\xa7\xe5\x88\xb6\xe8\xbe\x93\xe5\x87\xba\xe7\x9a\x84\xe5\xb8\x83\xe5\xb0\x94\n- FString Prefix = \"\"                           \xe5\x89\x8d\xe7\xbc\x80\n- bool bJustLog = true                          \xe4\xbb\x85\xe5\x9c\xa8log\xe7\x95\x8c\xe9\x9d\xa2\xe8\xbe\x93\xe5\x87\xba  \xe4\xb8\xba""false\xe5\x88\x99\xe8\xbf\x98\xe4\xbc\x9a\xe5\x9c\xa8\xe5\xb1\x8f\xe5\xb9\x95\xe8\xbe\x93\xe5\x87\xba" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCPromethBlueprintLib_PromethDebug_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCPromethBlueprintLib, nullptr, "PromethDebug", nullptr, nullptr, sizeof(CPromethBlueprintLib_eventPromethDebug_Parms), Z_Construct_UFunction_UCPromethBlueprintLib_PromethDebug_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCPromethBlueprintLib_PromethDebug_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCPromethBlueprintLib_PromethDebug_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCPromethBlueprintLib_PromethDebug_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCPromethBlueprintLib_PromethDebug()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCPromethBlueprintLib_PromethDebug_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCPromethBlueprintLib_SaveTXT_Statics
	{
		struct CPromethBlueprintLib_eventSaveTXT_Parms
		{
			FString Str;
			FString Path;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Str;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Path;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCPromethBlueprintLib_SaveTXT_Statics::NewProp_Str = { "Str", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CPromethBlueprintLib_eventSaveTXT_Parms, Str), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCPromethBlueprintLib_SaveTXT_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CPromethBlueprintLib_eventSaveTXT_Parms, Path), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UCPromethBlueprintLib_SaveTXT_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CPromethBlueprintLib_eventSaveTXT_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCPromethBlueprintLib_SaveTXT_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CPromethBlueprintLib_eventSaveTXT_Parms), &Z_Construct_UFunction_UCPromethBlueprintLib_SaveTXT_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCPromethBlueprintLib_SaveTXT_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCPromethBlueprintLib_SaveTXT_Statics::NewProp_Str,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCPromethBlueprintLib_SaveTXT_Statics::NewProp_Path,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCPromethBlueprintLib_SaveTXT_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCPromethBlueprintLib_SaveTXT_Statics::Function_MetaDataParams[] = {
		{ "Category", "PromethStaticFun" },
		{ "ModuleRelativePath", "Public/CPromethBlueprintLib.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCPromethBlueprintLib_SaveTXT_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCPromethBlueprintLib, nullptr, "SaveTXT", nullptr, nullptr, sizeof(CPromethBlueprintLib_eventSaveTXT_Parms), Z_Construct_UFunction_UCPromethBlueprintLib_SaveTXT_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCPromethBlueprintLib_SaveTXT_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCPromethBlueprintLib_SaveTXT_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCPromethBlueprintLib_SaveTXT_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCPromethBlueprintLib_SaveTXT()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCPromethBlueprintLib_SaveTXT_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCPromethBlueprintLib_ScanDirectory_Statics
	{
		struct CPromethBlueprintLib_eventScanDirectory_Parms
		{
			TArray<FString> Files;
			FString FilePath;
			FString Extension;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Files_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Files;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FilePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FilePath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Extension_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Extension;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCPromethBlueprintLib_ScanDirectory_Statics::NewProp_Files_Inner = { "Files", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCPromethBlueprintLib_ScanDirectory_Statics::NewProp_Files = { "Files", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CPromethBlueprintLib_eventScanDirectory_Parms, Files), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCPromethBlueprintLib_ScanDirectory_Statics::NewProp_FilePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCPromethBlueprintLib_ScanDirectory_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CPromethBlueprintLib_eventScanDirectory_Parms, FilePath), METADATA_PARAMS(Z_Construct_UFunction_UCPromethBlueprintLib_ScanDirectory_Statics::NewProp_FilePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCPromethBlueprintLib_ScanDirectory_Statics::NewProp_FilePath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCPromethBlueprintLib_ScanDirectory_Statics::NewProp_Extension_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCPromethBlueprintLib_ScanDirectory_Statics::NewProp_Extension = { "Extension", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CPromethBlueprintLib_eventScanDirectory_Parms, Extension), METADATA_PARAMS(Z_Construct_UFunction_UCPromethBlueprintLib_ScanDirectory_Statics::NewProp_Extension_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCPromethBlueprintLib_ScanDirectory_Statics::NewProp_Extension_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCPromethBlueprintLib_ScanDirectory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCPromethBlueprintLib_ScanDirectory_Statics::NewProp_Files_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCPromethBlueprintLib_ScanDirectory_Statics::NewProp_Files,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCPromethBlueprintLib_ScanDirectory_Statics::NewProp_FilePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCPromethBlueprintLib_ScanDirectory_Statics::NewProp_Extension,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCPromethBlueprintLib_ScanDirectory_Statics::Function_MetaDataParams[] = {
		{ "Category", "PromethStaticFun" },
		{ "ModuleRelativePath", "Public/CPromethBlueprintLib.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCPromethBlueprintLib_ScanDirectory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCPromethBlueprintLib, nullptr, "ScanDirectory", nullptr, nullptr, sizeof(CPromethBlueprintLib_eventScanDirectory_Parms), Z_Construct_UFunction_UCPromethBlueprintLib_ScanDirectory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCPromethBlueprintLib_ScanDirectory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCPromethBlueprintLib_ScanDirectory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCPromethBlueprintLib_ScanDirectory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCPromethBlueprintLib_ScanDirectory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCPromethBlueprintLib_ScanDirectory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCPromethBlueprintLib_StaticGetPlatform_Statics
	{
		struct CPromethBlueprintLib_eventStaticGetPlatform_Parms
		{
			TEnumAsByte<StaticPromethPlatform> ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCPromethBlueprintLib_StaticGetPlatform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CPromethBlueprintLib_eventStaticGetPlatform_Parms, ReturnValue), Z_Construct_UEnum_PromethPlugin_StaticPromethPlatform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCPromethBlueprintLib_StaticGetPlatform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCPromethBlueprintLib_StaticGetPlatform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCPromethBlueprintLib_StaticGetPlatform_Statics::Function_MetaDataParams[] = {
		{ "Category", "PromethStaticFun" },
		{ "ModuleRelativePath", "Public/CPromethBlueprintLib.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCPromethBlueprintLib_StaticGetPlatform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCPromethBlueprintLib, nullptr, "StaticGetPlatform", nullptr, nullptr, sizeof(CPromethBlueprintLib_eventStaticGetPlatform_Parms), Z_Construct_UFunction_UCPromethBlueprintLib_StaticGetPlatform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCPromethBlueprintLib_StaticGetPlatform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCPromethBlueprintLib_StaticGetPlatform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCPromethBlueprintLib_StaticGetPlatform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCPromethBlueprintLib_StaticGetPlatform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCPromethBlueprintLib_StaticGetPlatform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCPromethBlueprintLib_NoRegister()
	{
		return UCPromethBlueprintLib::StaticClass();
	}
	struct Z_Construct_UClass_UCPromethBlueprintLib_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCPromethBlueprintLib_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_PromethPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCPromethBlueprintLib_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCPromethBlueprintLib_GetIOSTmpDir, "GetIOSTmpDir" }, // 1186647248
		{ &Z_Construct_UFunction_UCPromethBlueprintLib_PromethDebug, "PromethDebug" }, // 6982019
		{ &Z_Construct_UFunction_UCPromethBlueprintLib_SaveTXT, "SaveTXT" }, // 3094207846
		{ &Z_Construct_UFunction_UCPromethBlueprintLib_ScanDirectory, "ScanDirectory" }, // 3889767347
		{ &Z_Construct_UFunction_UCPromethBlueprintLib_StaticGetPlatform, "StaticGetPlatform" }, // 1269041443
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCPromethBlueprintLib_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CPromethBlueprintLib.h" },
		{ "ModuleRelativePath", "Public/CPromethBlueprintLib.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCPromethBlueprintLib_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCPromethBlueprintLib>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCPromethBlueprintLib_Statics::ClassParams = {
		&UCPromethBlueprintLib::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCPromethBlueprintLib_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCPromethBlueprintLib_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCPromethBlueprintLib()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCPromethBlueprintLib_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCPromethBlueprintLib, 4113982688);
	template<> PROMETHPLUGIN_API UClass* StaticClass<UCPromethBlueprintLib>()
	{
		return UCPromethBlueprintLib::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCPromethBlueprintLib(Z_Construct_UClass_UCPromethBlueprintLib, &UCPromethBlueprintLib::StaticClass, TEXT("/Script/PromethPlugin"), TEXT("UCPromethBlueprintLib"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCPromethBlueprintLib);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
