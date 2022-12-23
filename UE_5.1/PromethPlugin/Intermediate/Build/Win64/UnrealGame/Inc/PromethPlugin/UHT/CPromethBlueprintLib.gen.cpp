// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PromethPlugin/Public/CPromethBlueprintLib.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCPromethBlueprintLib() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	PROMETHPLUGIN_API UClass* Z_Construct_UClass_UCPromethBlueprintLib();
	PROMETHPLUGIN_API UClass* Z_Construct_UClass_UCPromethBlueprintLib_NoRegister();
	PROMETHPLUGIN_API UEnum* Z_Construct_UEnum_PromethPlugin_StaticPromethPlatform();
	UPackage* Z_Construct_UPackage__Script_PromethPlugin();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_StaticPromethPlatform;
	static UEnum* StaticPromethPlatform_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_StaticPromethPlatform.OuterSingleton)
		{
			Z_Registration_Info_UEnum_StaticPromethPlatform.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PromethPlugin_StaticPromethPlatform, Z_Construct_UPackage__Script_PromethPlugin(), TEXT("StaticPromethPlatform"));
		}
		return Z_Registration_Info_UEnum_StaticPromethPlatform.OuterSingleton;
	}
	template<> PROMETHPLUGIN_API UEnum* StaticEnum<StaticPromethPlatform>()
	{
		return StaticPromethPlatform_StaticEnum();
	}
	struct Z_Construct_UEnum_PromethPlugin_StaticPromethPlatform_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_PromethPlugin_StaticPromethPlatform_Statics::Enumerators[] = {
		{ "_None", (int64)_None },
		{ "_Windows", (int64)_Windows },
		{ "_IOS", (int64)_IOS },
		{ "_Android", (int64)_Android },
		{ "_MAC", (int64)_MAC },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_PromethPlugin_StaticPromethPlatform_Statics::Enum_MetaDataParams[] = {
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
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PromethPlugin_StaticPromethPlatform_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_PromethPlugin,
		nullptr,
		"StaticPromethPlatform",
		"StaticPromethPlatform",
		Z_Construct_UEnum_PromethPlugin_StaticPromethPlatform_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_PromethPlugin_StaticPromethPlatform_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_PromethPlugin_StaticPromethPlatform_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_PromethPlugin_StaticPromethPlatform_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_PromethPlugin_StaticPromethPlatform()
	{
		if (!Z_Registration_Info_UEnum_StaticPromethPlatform.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_StaticPromethPlatform.InnerSingleton, Z_Construct_UEnum_PromethPlugin_StaticPromethPlatform_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_StaticPromethPlatform.InnerSingleton;
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
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCPromethBlueprintLib_GetIOSTmpDir_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CPromethBlueprintLib_eventGetIOSTmpDir_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCPromethBlueprintLib_GetIOSTmpDir_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCPromethBlueprintLib_GetIOSTmpDir_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCPromethBlueprintLib_GetIOSTmpDir_Statics::Function_MetaDataParams[] = {
		{ "Category", "PromethStaticFun" },
		{ "ModuleRelativePath", "Public/CPromethBlueprintLib.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCPromethBlueprintLib_GetIOSTmpDir_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCPromethBlueprintLib, nullptr, "GetIOSTmpDir", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCPromethBlueprintLib_GetIOSTmpDir_Statics::CPromethBlueprintLib_eventGetIOSTmpDir_Parms), Z_Construct_UFunction_UCPromethBlueprintLib_GetIOSTmpDir_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCPromethBlueprintLib_GetIOSTmpDir_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCPromethBlueprintLib_GetIOSTmpDir_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCPromethBlueprintLib_GetIOSTmpDir_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCPromethBlueprintLib_GetIOSTmpDir()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCPromethBlueprintLib_GetIOSTmpDir_Statics::FuncParams);
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
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutputStr;
		static void NewProp_IsPrintParam_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsPrintParam;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Prefix;
		static void NewProp_bJustLog_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bJustLog;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ShowTime;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCPromethBlueprintLib_PromethDebug_Statics::NewProp_OutputStr = { "OutputStr", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CPromethBlueprintLib_eventPromethDebug_Parms, OutputStr), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UCPromethBlueprintLib_PromethDebug_Statics::NewProp_IsPrintParam_SetBit(void* Obj)
	{
		((CPromethBlueprintLib_eventPromethDebug_Parms*)Obj)->IsPrintParam = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCPromethBlueprintLib_PromethDebug_Statics::NewProp_IsPrintParam = { "IsPrintParam", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CPromethBlueprintLib_eventPromethDebug_Parms), &Z_Construct_UFunction_UCPromethBlueprintLib_PromethDebug_Statics::NewProp_IsPrintParam_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCPromethBlueprintLib_PromethDebug_Statics::NewProp_Prefix = { "Prefix", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CPromethBlueprintLib_eventPromethDebug_Parms, Prefix), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UCPromethBlueprintLib_PromethDebug_Statics::NewProp_bJustLog_SetBit(void* Obj)
	{
		((CPromethBlueprintLib_eventPromethDebug_Parms*)Obj)->bJustLog = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCPromethBlueprintLib_PromethDebug_Statics::NewProp_bJustLog = { "bJustLog", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CPromethBlueprintLib_eventPromethDebug_Parms), &Z_Construct_UFunction_UCPromethBlueprintLib_PromethDebug_Statics::NewProp_bJustLog_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCPromethBlueprintLib_PromethDebug_Statics::NewProp_ShowTime = { "ShowTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CPromethBlueprintLib_eventPromethDebug_Parms, ShowTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCPromethBlueprintLib_PromethDebug_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CPromethBlueprintLib_eventPromethDebug_Parms, Color), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCPromethBlueprintLib_PromethDebug_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCPromethBlueprintLib_PromethDebug_Statics::NewProp_OutputStr,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCPromethBlueprintLib_PromethDebug_Statics::NewProp_IsPrintParam,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCPromethBlueprintLib_PromethDebug_Statics::NewProp_Prefix,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCPromethBlueprintLib_PromethDebug_Statics::NewProp_bJustLog,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCPromethBlueprintLib_PromethDebug_Statics::NewProp_ShowTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCPromethBlueprintLib_PromethDebug_Statics::NewProp_Color,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCPromethBlueprintLib_PromethDebug_Statics::Function_MetaDataParams[] = {
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
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCPromethBlueprintLib_PromethDebug_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCPromethBlueprintLib, nullptr, "PromethDebug", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCPromethBlueprintLib_PromethDebug_Statics::CPromethBlueprintLib_eventPromethDebug_Parms), Z_Construct_UFunction_UCPromethBlueprintLib_PromethDebug_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCPromethBlueprintLib_PromethDebug_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCPromethBlueprintLib_PromethDebug_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCPromethBlueprintLib_PromethDebug_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCPromethBlueprintLib_PromethDebug()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCPromethBlueprintLib_PromethDebug_Statics::FuncParams);
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
		static const UECodeGen_Private::FStrPropertyParams NewProp_Str;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Path;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCPromethBlueprintLib_SaveTXT_Statics::NewProp_Str = { "Str", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CPromethBlueprintLib_eventSaveTXT_Parms, Str), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCPromethBlueprintLib_SaveTXT_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CPromethBlueprintLib_eventSaveTXT_Parms, Path), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UCPromethBlueprintLib_SaveTXT_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CPromethBlueprintLib_eventSaveTXT_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCPromethBlueprintLib_SaveTXT_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CPromethBlueprintLib_eventSaveTXT_Parms), &Z_Construct_UFunction_UCPromethBlueprintLib_SaveTXT_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCPromethBlueprintLib_SaveTXT_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCPromethBlueprintLib_SaveTXT_Statics::NewProp_Str,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCPromethBlueprintLib_SaveTXT_Statics::NewProp_Path,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCPromethBlueprintLib_SaveTXT_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCPromethBlueprintLib_SaveTXT_Statics::Function_MetaDataParams[] = {
		{ "Category", "PromethStaticFun" },
		{ "ModuleRelativePath", "Public/CPromethBlueprintLib.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCPromethBlueprintLib_SaveTXT_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCPromethBlueprintLib, nullptr, "SaveTXT", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCPromethBlueprintLib_SaveTXT_Statics::CPromethBlueprintLib_eventSaveTXT_Parms), Z_Construct_UFunction_UCPromethBlueprintLib_SaveTXT_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCPromethBlueprintLib_SaveTXT_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCPromethBlueprintLib_SaveTXT_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCPromethBlueprintLib_SaveTXT_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCPromethBlueprintLib_SaveTXT()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCPromethBlueprintLib_SaveTXT_Statics::FuncParams);
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
		static const UECodeGen_Private::FStrPropertyParams NewProp_Files_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Files;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FilePath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FilePath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Extension_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Extension;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCPromethBlueprintLib_ScanDirectory_Statics::NewProp_Files_Inner = { "Files", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCPromethBlueprintLib_ScanDirectory_Statics::NewProp_Files = { "Files", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CPromethBlueprintLib_eventScanDirectory_Parms, Files), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCPromethBlueprintLib_ScanDirectory_Statics::NewProp_FilePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCPromethBlueprintLib_ScanDirectory_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CPromethBlueprintLib_eventScanDirectory_Parms, FilePath), METADATA_PARAMS(Z_Construct_UFunction_UCPromethBlueprintLib_ScanDirectory_Statics::NewProp_FilePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCPromethBlueprintLib_ScanDirectory_Statics::NewProp_FilePath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCPromethBlueprintLib_ScanDirectory_Statics::NewProp_Extension_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCPromethBlueprintLib_ScanDirectory_Statics::NewProp_Extension = { "Extension", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CPromethBlueprintLib_eventScanDirectory_Parms, Extension), METADATA_PARAMS(Z_Construct_UFunction_UCPromethBlueprintLib_ScanDirectory_Statics::NewProp_Extension_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCPromethBlueprintLib_ScanDirectory_Statics::NewProp_Extension_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCPromethBlueprintLib_ScanDirectory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCPromethBlueprintLib_ScanDirectory_Statics::NewProp_Files_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCPromethBlueprintLib_ScanDirectory_Statics::NewProp_Files,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCPromethBlueprintLib_ScanDirectory_Statics::NewProp_FilePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCPromethBlueprintLib_ScanDirectory_Statics::NewProp_Extension,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCPromethBlueprintLib_ScanDirectory_Statics::Function_MetaDataParams[] = {
		{ "Category", "PromethStaticFun" },
		{ "ModuleRelativePath", "Public/CPromethBlueprintLib.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCPromethBlueprintLib_ScanDirectory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCPromethBlueprintLib, nullptr, "ScanDirectory", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCPromethBlueprintLib_ScanDirectory_Statics::CPromethBlueprintLib_eventScanDirectory_Parms), Z_Construct_UFunction_UCPromethBlueprintLib_ScanDirectory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCPromethBlueprintLib_ScanDirectory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCPromethBlueprintLib_ScanDirectory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCPromethBlueprintLib_ScanDirectory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCPromethBlueprintLib_ScanDirectory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCPromethBlueprintLib_ScanDirectory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCPromethBlueprintLib_StaticGetPlatform_Statics
	{
		struct CPromethBlueprintLib_eventStaticGetPlatform_Parms
		{
			TEnumAsByte<StaticPromethPlatform> ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCPromethBlueprintLib_StaticGetPlatform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CPromethBlueprintLib_eventStaticGetPlatform_Parms, ReturnValue), Z_Construct_UEnum_PromethPlugin_StaticPromethPlatform, METADATA_PARAMS(nullptr, 0) }; // 3273719869
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCPromethBlueprintLib_StaticGetPlatform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCPromethBlueprintLib_StaticGetPlatform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCPromethBlueprintLib_StaticGetPlatform_Statics::Function_MetaDataParams[] = {
		{ "Category", "PromethStaticFun" },
		{ "ModuleRelativePath", "Public/CPromethBlueprintLib.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCPromethBlueprintLib_StaticGetPlatform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCPromethBlueprintLib, nullptr, "StaticGetPlatform", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCPromethBlueprintLib_StaticGetPlatform_Statics::CPromethBlueprintLib_eventStaticGetPlatform_Parms), Z_Construct_UFunction_UCPromethBlueprintLib_StaticGetPlatform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCPromethBlueprintLib_StaticGetPlatform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCPromethBlueprintLib_StaticGetPlatform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCPromethBlueprintLib_StaticGetPlatform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCPromethBlueprintLib_StaticGetPlatform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCPromethBlueprintLib_StaticGetPlatform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCPromethBlueprintLib);
	UClass* Z_Construct_UClass_UCPromethBlueprintLib_NoRegister()
	{
		return UCPromethBlueprintLib::StaticClass();
	}
	struct Z_Construct_UClass_UCPromethBlueprintLib_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCPromethBlueprintLib_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_PromethPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCPromethBlueprintLib_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCPromethBlueprintLib_GetIOSTmpDir, "GetIOSTmpDir" }, // 931076006
		{ &Z_Construct_UFunction_UCPromethBlueprintLib_PromethDebug, "PromethDebug" }, // 1469383574
		{ &Z_Construct_UFunction_UCPromethBlueprintLib_SaveTXT, "SaveTXT" }, // 2915748222
		{ &Z_Construct_UFunction_UCPromethBlueprintLib_ScanDirectory, "ScanDirectory" }, // 3256814488
		{ &Z_Construct_UFunction_UCPromethBlueprintLib_StaticGetPlatform, "StaticGetPlatform" }, // 2778894507
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCPromethBlueprintLib_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CPromethBlueprintLib.h" },
		{ "ModuleRelativePath", "Public/CPromethBlueprintLib.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCPromethBlueprintLib_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCPromethBlueprintLib>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCPromethBlueprintLib_Statics::ClassParams = {
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
		if (!Z_Registration_Info_UClass_UCPromethBlueprintLib.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCPromethBlueprintLib.OuterSingleton, Z_Construct_UClass_UCPromethBlueprintLib_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCPromethBlueprintLib.OuterSingleton;
	}
	template<> PROMETHPLUGIN_API UClass* StaticClass<UCPromethBlueprintLib>()
	{
		return UCPromethBlueprintLib::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCPromethBlueprintLib);
	UCPromethBlueprintLib::~UCPromethBlueprintLib() {}
	struct Z_CompiledInDeferFile_FID_G_Test51_Plugins_PromethPlugin_Source_PromethPlugin_Public_CPromethBlueprintLib_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_G_Test51_Plugins_PromethPlugin_Source_PromethPlugin_Public_CPromethBlueprintLib_h_Statics::EnumInfo[] = {
		{ StaticPromethPlatform_StaticEnum, TEXT("StaticPromethPlatform"), &Z_Registration_Info_UEnum_StaticPromethPlatform, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3273719869U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_G_Test51_Plugins_PromethPlugin_Source_PromethPlugin_Public_CPromethBlueprintLib_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCPromethBlueprintLib, UCPromethBlueprintLib::StaticClass, TEXT("UCPromethBlueprintLib"), &Z_Registration_Info_UClass_UCPromethBlueprintLib, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCPromethBlueprintLib), 1775795123U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_G_Test51_Plugins_PromethPlugin_Source_PromethPlugin_Public_CPromethBlueprintLib_h_3942988543(TEXT("/Script/PromethPlugin"),
		Z_CompiledInDeferFile_FID_G_Test51_Plugins_PromethPlugin_Source_PromethPlugin_Public_CPromethBlueprintLib_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_G_Test51_Plugins_PromethPlugin_Source_PromethPlugin_Public_CPromethBlueprintLib_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_G_Test51_Plugins_PromethPlugin_Source_PromethPlugin_Public_CPromethBlueprintLib_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_G_Test51_Plugins_PromethPlugin_Source_PromethPlugin_Public_CPromethBlueprintLib_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
