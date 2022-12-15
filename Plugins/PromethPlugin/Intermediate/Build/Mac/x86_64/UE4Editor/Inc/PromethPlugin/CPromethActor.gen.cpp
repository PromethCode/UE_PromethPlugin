// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PromethPlugin/Public/CPromethActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCPromethActor() {}
// Cross Module References
	PROMETHPLUGIN_API UFunction* Z_Construct_UDelegateFunction_PromethPlugin_SeekSucceed__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_PromethPlugin();
	PROMETHPLUGIN_API UFunction* Z_Construct_UDelegateFunction_PromethPlugin_OpenVideoSucceed__DelegateSignature();
	PROMETHPLUGIN_API UClass* Z_Construct_UClass_ACPromethActor_NoRegister();
	PROMETHPLUGIN_API UClass* Z_Construct_UClass_ACPromethActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaSource_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	PROMETHPLUGIN_API UClass* Z_Construct_UClass_UCatchlightMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_PromethPlugin_SeekSucceed__DelegateSignature_Statics
	{
		struct _Script_PromethPlugin_eventSeekSucceed_Parms
		{
			int32 Frame;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Frame;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_PromethPlugin_SeekSucceed__DelegateSignature_Statics::NewProp_Frame = { "Frame", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_PromethPlugin_eventSeekSucceed_Parms, Frame), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_PromethPlugin_SeekSucceed__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PromethPlugin_SeekSucceed__DelegateSignature_Statics::NewProp_Frame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_PromethPlugin_SeekSucceed__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CPromethActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_PromethPlugin_SeekSucceed__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_PromethPlugin, nullptr, "SeekSucceed__DelegateSignature", nullptr, nullptr, sizeof(_Script_PromethPlugin_eventSeekSucceed_Parms), Z_Construct_UDelegateFunction_PromethPlugin_SeekSucceed__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PromethPlugin_SeekSucceed__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_PromethPlugin_SeekSucceed__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PromethPlugin_SeekSucceed__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_PromethPlugin_SeekSucceed__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_PromethPlugin_SeekSucceed__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_PromethPlugin_OpenVideoSucceed__DelegateSignature_Statics
	{
		struct _Script_PromethPlugin_eventOpenVideoSucceed_Parms
		{
			bool Succeed;
		};
		static void NewProp_Succeed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Succeed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_PromethPlugin_OpenVideoSucceed__DelegateSignature_Statics::NewProp_Succeed_SetBit(void* Obj)
	{
		((_Script_PromethPlugin_eventOpenVideoSucceed_Parms*)Obj)->Succeed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_PromethPlugin_OpenVideoSucceed__DelegateSignature_Statics::NewProp_Succeed = { "Succeed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_PromethPlugin_eventOpenVideoSucceed_Parms), &Z_Construct_UDelegateFunction_PromethPlugin_OpenVideoSucceed__DelegateSignature_Statics::NewProp_Succeed_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_PromethPlugin_OpenVideoSucceed__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PromethPlugin_OpenVideoSucceed__DelegateSignature_Statics::NewProp_Succeed,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_PromethPlugin_OpenVideoSucceed__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CPromethActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_PromethPlugin_OpenVideoSucceed__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_PromethPlugin, nullptr, "OpenVideoSucceed__DelegateSignature", nullptr, nullptr, sizeof(_Script_PromethPlugin_eventOpenVideoSucceed_Parms), Z_Construct_UDelegateFunction_PromethPlugin_OpenVideoSucceed__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PromethPlugin_OpenVideoSucceed__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_PromethPlugin_OpenVideoSucceed__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PromethPlugin_OpenVideoSucceed__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_PromethPlugin_OpenVideoSucceed__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_PromethPlugin_OpenVideoSucceed__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(ACPromethActor::execChangeMaterial)
	{
		P_GET_OBJECT(UMaterialInterface,Z_Param_NewMaterial);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ChangeMaterial(Z_Param_NewMaterial);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACPromethActor::execCloseVideo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CloseVideo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACPromethActor::execisFinish)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->isFinish();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACPromethActor::execSeek)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NewFrame);
		P_GET_UBOOL(Z_Param_InAutoPlay);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Seek(Z_Param_NewFrame,Z_Param_InAutoPlay);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACPromethActor::execPause)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Pause();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACPromethActor::execPlay)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Play();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACPromethActor::execOpenVideo)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Path_);
		P_GET_OBJECT(UMediaSource,Z_Param_InMediaSource);
		P_GET_UBOOL(Z_Param_InbIsPathOpen);
		P_GET_PROPERTY(FStrProperty,Z_Param_IOSFileName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->OpenVideo(Z_Param_Path_,Z_Param_InMediaSource,Z_Param_InbIsPathOpen,Z_Param_IOSFileName);
		P_NATIVE_END;
	}
	void ACPromethActor::StaticRegisterNativesACPromethActor()
	{
		UClass* Class = ACPromethActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ChangeMaterial", &ACPromethActor::execChangeMaterial },
			{ "CloseVideo", &ACPromethActor::execCloseVideo },
			{ "isFinish", &ACPromethActor::execisFinish },
			{ "OpenVideo", &ACPromethActor::execOpenVideo },
			{ "Pause", &ACPromethActor::execPause },
			{ "Play", &ACPromethActor::execPlay },
			{ "Seek", &ACPromethActor::execSeek },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACPromethActor_ChangeMaterial_Statics
	{
		struct CPromethActor_eventChangeMaterial_Parms
		{
			UMaterialInterface* NewMaterial;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewMaterial;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACPromethActor_ChangeMaterial_Statics::NewProp_NewMaterial = { "NewMaterial", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CPromethActor_eventChangeMaterial_Parms, NewMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACPromethActor_ChangeMaterial_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACPromethActor_ChangeMaterial_Statics::NewProp_NewMaterial,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACPromethActor_ChangeMaterial_Statics::Function_MetaDataParams[] = {
		{ "Category", "OtherFunction" },
		{ "ModuleRelativePath", "Public/CPromethActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACPromethActor_ChangeMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACPromethActor, nullptr, "ChangeMaterial", nullptr, nullptr, sizeof(CPromethActor_eventChangeMaterial_Parms), Z_Construct_UFunction_ACPromethActor_ChangeMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACPromethActor_ChangeMaterial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACPromethActor_ChangeMaterial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACPromethActor_ChangeMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACPromethActor_ChangeMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACPromethActor_ChangeMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACPromethActor_CloseVideo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACPromethActor_CloseVideo_Statics::Function_MetaDataParams[] = {
		{ "Category", "OtherFunction" },
		{ "ModuleRelativePath", "Public/CPromethActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACPromethActor_CloseVideo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACPromethActor, nullptr, "CloseVideo", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACPromethActor_CloseVideo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACPromethActor_CloseVideo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACPromethActor_CloseVideo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACPromethActor_CloseVideo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACPromethActor_isFinish_Statics
	{
		struct CPromethActor_eventisFinish_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ACPromethActor_isFinish_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CPromethActor_eventisFinish_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACPromethActor_isFinish_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CPromethActor_eventisFinish_Parms), &Z_Construct_UFunction_ACPromethActor_isFinish_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACPromethActor_isFinish_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACPromethActor_isFinish_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACPromethActor_isFinish_Statics::Function_MetaDataParams[] = {
		{ "Category", "OtherFunction" },
		{ "Comment", "// Other Function  ---------------------------------------------------------------------------------------------------------------\n" },
		{ "ModuleRelativePath", "Public/CPromethActor.h" },
		{ "ToolTip", "Other Function  ---------------------------------------------------------------------------------------------------------------" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACPromethActor_isFinish_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACPromethActor, nullptr, "isFinish", nullptr, nullptr, sizeof(CPromethActor_eventisFinish_Parms), Z_Construct_UFunction_ACPromethActor_isFinish_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACPromethActor_isFinish_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACPromethActor_isFinish_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACPromethActor_isFinish_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACPromethActor_isFinish()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACPromethActor_isFinish_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACPromethActor_OpenVideo_Statics
	{
		struct CPromethActor_eventOpenVideo_Parms
		{
			FString Path_;
			UMediaSource* InMediaSource;
			bool InbIsPathOpen;
			FString IOSFileName;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Path__MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Path_;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InMediaSource;
		static void NewProp_InbIsPathOpen_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InbIsPathOpen;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IOSFileName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_IOSFileName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACPromethActor_OpenVideo_Statics::NewProp_Path__MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ACPromethActor_OpenVideo_Statics::NewProp_Path_ = { "Path_", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CPromethActor_eventOpenVideo_Parms, Path_), METADATA_PARAMS(Z_Construct_UFunction_ACPromethActor_OpenVideo_Statics::NewProp_Path__MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ACPromethActor_OpenVideo_Statics::NewProp_Path__MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACPromethActor_OpenVideo_Statics::NewProp_InMediaSource = { "InMediaSource", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CPromethActor_eventOpenVideo_Parms, InMediaSource), Z_Construct_UClass_UMediaSource_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ACPromethActor_OpenVideo_Statics::NewProp_InbIsPathOpen_SetBit(void* Obj)
	{
		((CPromethActor_eventOpenVideo_Parms*)Obj)->InbIsPathOpen = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACPromethActor_OpenVideo_Statics::NewProp_InbIsPathOpen = { "InbIsPathOpen", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CPromethActor_eventOpenVideo_Parms), &Z_Construct_UFunction_ACPromethActor_OpenVideo_Statics::NewProp_InbIsPathOpen_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACPromethActor_OpenVideo_Statics::NewProp_IOSFileName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ACPromethActor_OpenVideo_Statics::NewProp_IOSFileName = { "IOSFileName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CPromethActor_eventOpenVideo_Parms, IOSFileName), METADATA_PARAMS(Z_Construct_UFunction_ACPromethActor_OpenVideo_Statics::NewProp_IOSFileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ACPromethActor_OpenVideo_Statics::NewProp_IOSFileName_MetaData)) };
	void Z_Construct_UFunction_ACPromethActor_OpenVideo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CPromethActor_eventOpenVideo_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACPromethActor_OpenVideo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CPromethActor_eventOpenVideo_Parms), &Z_Construct_UFunction_ACPromethActor_OpenVideo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACPromethActor_OpenVideo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACPromethActor_OpenVideo_Statics::NewProp_Path_,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACPromethActor_OpenVideo_Statics::NewProp_InMediaSource,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACPromethActor_OpenVideo_Statics::NewProp_InbIsPathOpen,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACPromethActor_OpenVideo_Statics::NewProp_IOSFileName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACPromethActor_OpenVideo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACPromethActor_OpenVideo_Statics::Function_MetaDataParams[] = {
		{ "Category", "BaseFunction" },
		{ "Comment", "// Base Function  ---------------------------------------------------------------------------------------------------------------\n" },
		{ "CPP_Default_InbIsPathOpen", "true" },
		{ "CPP_Default_InMediaSource", "None" },
		{ "CPP_Default_IOSFileName", "ue4-37-228" },
		{ "ModuleRelativePath", "Public/CPromethActor.h" },
		{ "ToolTip", "Base Function  ---------------------------------------------------------------------------------------------------------------" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACPromethActor_OpenVideo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACPromethActor, nullptr, "OpenVideo", nullptr, nullptr, sizeof(CPromethActor_eventOpenVideo_Parms), Z_Construct_UFunction_ACPromethActor_OpenVideo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACPromethActor_OpenVideo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACPromethActor_OpenVideo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACPromethActor_OpenVideo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACPromethActor_OpenVideo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACPromethActor_OpenVideo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACPromethActor_Pause_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACPromethActor_Pause_Statics::Function_MetaDataParams[] = {
		{ "Category", "BaseFunction" },
		{ "ModuleRelativePath", "Public/CPromethActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACPromethActor_Pause_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACPromethActor, nullptr, "Pause", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACPromethActor_Pause_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACPromethActor_Pause_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACPromethActor_Pause()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACPromethActor_Pause_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACPromethActor_Play_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACPromethActor_Play_Statics::Function_MetaDataParams[] = {
		{ "Category", "BaseFunction" },
		{ "ModuleRelativePath", "Public/CPromethActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACPromethActor_Play_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACPromethActor, nullptr, "Play", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACPromethActor_Play_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACPromethActor_Play_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACPromethActor_Play()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACPromethActor_Play_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACPromethActor_Seek_Statics
	{
		struct CPromethActor_eventSeek_Parms
		{
			int32 NewFrame;
			bool InAutoPlay;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NewFrame;
		static void NewProp_InAutoPlay_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InAutoPlay;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ACPromethActor_Seek_Statics::NewProp_NewFrame = { "NewFrame", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CPromethActor_eventSeek_Parms, NewFrame), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ACPromethActor_Seek_Statics::NewProp_InAutoPlay_SetBit(void* Obj)
	{
		((CPromethActor_eventSeek_Parms*)Obj)->InAutoPlay = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACPromethActor_Seek_Statics::NewProp_InAutoPlay = { "InAutoPlay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CPromethActor_eventSeek_Parms), &Z_Construct_UFunction_ACPromethActor_Seek_Statics::NewProp_InAutoPlay_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ACPromethActor_Seek_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CPromethActor_eventSeek_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACPromethActor_Seek_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CPromethActor_eventSeek_Parms), &Z_Construct_UFunction_ACPromethActor_Seek_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACPromethActor_Seek_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACPromethActor_Seek_Statics::NewProp_NewFrame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACPromethActor_Seek_Statics::NewProp_InAutoPlay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACPromethActor_Seek_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACPromethActor_Seek_Statics::Function_MetaDataParams[] = {
		{ "Category", "BaseFunction" },
		{ "CPP_Default_InAutoPlay", "false" },
		{ "ModuleRelativePath", "Public/CPromethActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACPromethActor_Seek_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACPromethActor, nullptr, "Seek", nullptr, nullptr, sizeof(CPromethActor_eventSeek_Parms), Z_Construct_UFunction_ACPromethActor_Seek_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACPromethActor_Seek_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACPromethActor_Seek_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACPromethActor_Seek_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACPromethActor_Seek()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACPromethActor_Seek_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ACPromethActor_NoRegister()
	{
		return ACPromethActor::StaticClass();
	}
	struct Z_Construct_UClass_ACPromethActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VideoTexture2D_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VideoTexture2D;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AndroidTexture2DY_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AndroidTexture2DY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AndroidTexture2DUV_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AndroidTexture2DUV;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RootComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RootComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDebugLog_MetaData[];
#endif
		static void NewProp_bDebugLog_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDebugLog;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LogSavePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LogSavePath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Keys_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Keys;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOpened_MetaData[];
#endif
		static void NewProp_bOpened_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOpened;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPlaying_MetaData[];
#endif
		static void NewProp_bPlaying_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPlaying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOpening_MetaData[];
#endif
		static void NewProp_bOpening_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOpening;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSeeking_MetaData[];
#endif
		static void NewProp_bSeeking_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSeeking;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLoop_MetaData[];
#endif
		static void NewProp_bLoop_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLoop;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoPlay_MetaData[];
#endif
		static void NewProp_bAutoPlay_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoPlay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrameCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_FrameCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FPS_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_FPS;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NowFrame_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NowFrame;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bNonAsynPlay_MetaData[];
#endif
		static void NewProp_bNonAsynPlay_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNonAsynPlay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OpenTexture_MetaData[];
#endif
		static void NewProp_OpenTexture_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_OpenTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OpenMesh_MetaData[];
#endif
		static void NewProp_OpenMesh_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_OpenMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsGameTime_MetaData[];
#endif
		static void NewProp_IsGameTime_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsGameTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VideoID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_VideoID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NeedOpenPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_NeedOpenPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CreateTextureY_MetaData[];
#endif
		static void NewProp_CreateTextureY_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CreateTextureY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CreateTextureUV_MetaData[];
#endif
		static void NewProp_CreateTextureUV_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CreateTextureUV;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsPathOpen_MetaData[];
#endif
		static void NewProp_bIsPathOpen_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsPathOpen;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VideoPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_VideoPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MediaSource_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MediaSource;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialInst_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MaterialInst;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WinMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WinMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IOSMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_IOSMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AndroidMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AndroidMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VideoHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_VideoHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VideoWidth_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_VideoWidth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OpenVideoCompletion_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OpenVideoCompletion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SeekCallBack_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_SeekCallBack;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACPromethActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_PromethPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACPromethActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACPromethActor_ChangeMaterial, "ChangeMaterial" }, // 2628223748
		{ &Z_Construct_UFunction_ACPromethActor_CloseVideo, "CloseVideo" }, // 2378726727
		{ &Z_Construct_UFunction_ACPromethActor_isFinish, "isFinish" }, // 2619829183
		{ &Z_Construct_UFunction_ACPromethActor_OpenVideo, "OpenVideo" }, // 1001016906
		{ &Z_Construct_UFunction_ACPromethActor_Pause, "Pause" }, // 2658575319
		{ &Z_Construct_UFunction_ACPromethActor_Play, "Play" }, // 2501890212
		{ &Z_Construct_UFunction_ACPromethActor_Seek, "Seek" }, // 2847207518
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPromethActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CPromethActor.h" },
		{ "ModuleRelativePath", "Public/CPromethActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPromethActor_Statics::NewProp_VideoTexture2D_MetaData[] = {
		{ "Category", "Render" },
		{ "Comment", "// \xe7\xbb\x84\xe4\xbb\xb6  \xe7\xba\xb9\xe7\x90\x86       ---------------------------------------------------------------------------------------------------------------\n// \xe7\xba\xb9\xe7\x90\x86\n" },
		{ "ModuleRelativePath", "Public/CPromethActor.h" },
		{ "ToolTip", "\xe7\xbb\x84\xe4\xbb\xb6  \xe7\xba\xb9\xe7\x90\x86       ---------------------------------------------------------------------------------------------------------------\n\xe7\xba\xb9\xe7\x90\x86" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPromethActor_Statics::NewProp_VideoTexture2D = { "VideoTexture2D", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPromethActor, VideoTexture2D), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACPromethActor_Statics::NewProp_VideoTexture2D_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPromethActor_Statics::NewProp_VideoTexture2D_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPromethActor_Statics::NewProp_AndroidTexture2DY_MetaData[] = {
		{ "Category", "Render" },
		{ "ModuleRelativePath", "Public/CPromethActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPromethActor_Statics::NewProp_AndroidTexture2DY = { "AndroidTexture2DY", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPromethActor, AndroidTexture2DY), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACPromethActor_Statics::NewProp_AndroidTexture2DY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPromethActor_Statics::NewProp_AndroidTexture2DY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPromethActor_Statics::NewProp_AndroidTexture2DUV_MetaData[] = {
		{ "Category", "Render" },
		{ "ModuleRelativePath", "Public/CPromethActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPromethActor_Statics::NewProp_AndroidTexture2DUV = { "AndroidTexture2DUV", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPromethActor, AndroidTexture2DUV), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACPromethActor_Statics::NewProp_AndroidTexture2DUV_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPromethActor_Statics::NewProp_AndroidTexture2DUV_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPromethActor_Statics::NewProp_RootComp_MetaData[] = {
		{ "Category", "Prometh" },
		{ "Comment", "// \xe6\xa0\xb9\xe7\xbb\x84\xe4\xbb\xb6\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CPromethActor.h" },
		{ "ToolTip", "\xe6\xa0\xb9\xe7\xbb\x84\xe4\xbb\xb6" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPromethActor_Statics::NewProp_RootComp = { "RootComp", nullptr, (EPropertyFlags)0x001000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPromethActor, RootComp), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACPromethActor_Statics::NewProp_RootComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPromethActor_Statics::NewProp_RootComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPromethActor_Statics::NewProp_Mesh_MetaData[] = {
		{ "Category", "MeshComponent" },
		{ "Comment", "// \xe7\xbd\x91\xe6\xa0\xbc\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CPromethActor.h" },
		{ "ToolTip", "\xe7\xbd\x91\xe6\xa0\xbc" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPromethActor_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x001000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPromethActor, Mesh), Z_Construct_UClass_UCatchlightMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACPromethActor_Statics::NewProp_Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPromethActor_Statics::NewProp_Mesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPromethActor_Statics::NewProp_bDebugLog_MetaData[] = {
		{ "Category", "SettingBase" },
		{ "Comment", "// SettingBase  ---------------------------------------------------------------------------------------------------------------\n// \xe8\xbe\x93\xe5\x87\xbaLog\n" },
		{ "ModuleRelativePath", "Public/CPromethActor.h" },
		{ "ToolTip", "SettingBase  ---------------------------------------------------------------------------------------------------------------\n\xe8\xbe\x93\xe5\x87\xbaLog" },
	};
#endif
	void Z_Construct_UClass_ACPromethActor_Statics::NewProp_bDebugLog_SetBit(void* Obj)
	{
		((ACPromethActor*)Obj)->bDebugLog = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACPromethActor_Statics::NewProp_bDebugLog = { "bDebugLog", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACPromethActor), &Z_Construct_UClass_ACPromethActor_Statics::NewProp_bDebugLog_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACPromethActor_Statics::NewProp_bDebugLog_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPromethActor_Statics::NewProp_bDebugLog_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPromethActor_Statics::NewProp_LogSavePath_MetaData[] = {
		{ "Category", "SettingBase" },
		{ "ModuleRelativePath", "Public/CPromethActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ACPromethActor_Statics::NewProp_LogSavePath = { "LogSavePath", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPromethActor, LogSavePath), METADATA_PARAMS(Z_Construct_UClass_ACPromethActor_Statics::NewProp_LogSavePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPromethActor_Statics::NewProp_LogSavePath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPromethActor_Statics::NewProp_Keys_MetaData[] = {
		{ "Category", "SettingBase" },
		{ "Comment", "// Key\n" },
		{ "ModuleRelativePath", "Public/CPromethActor.h" },
		{ "ToolTip", "Key" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ACPromethActor_Statics::NewProp_Keys = { "Keys", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPromethActor, Keys), METADATA_PARAMS(Z_Construct_UClass_ACPromethActor_Statics::NewProp_Keys_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPromethActor_Statics::NewProp_Keys_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPromethActor_Statics::NewProp_bOpened_MetaData[] = {
		{ "Category", "SettingBase" },
		{ "Comment", "// \xe6\x96\x87\xe4\xbb\xb6\xe5\xb7\xb2\xe7\xbb\x8f\xe6\x89\x93\xe5\xbc\x80\n" },
		{ "ModuleRelativePath", "Public/CPromethActor.h" },
		{ "ToolTip", "\xe6\x96\x87\xe4\xbb\xb6\xe5\xb7\xb2\xe7\xbb\x8f\xe6\x89\x93\xe5\xbc\x80" },
	};
#endif
	void Z_Construct_UClass_ACPromethActor_Statics::NewProp_bOpened_SetBit(void* Obj)
	{
		((ACPromethActor*)Obj)->bOpened = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACPromethActor_Statics::NewProp_bOpened = { "bOpened", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACPromethActor), &Z_Construct_UClass_ACPromethActor_Statics::NewProp_bOpened_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACPromethActor_Statics::NewProp_bOpened_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPromethActor_Statics::NewProp_bOpened_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPromethActor_Statics::NewProp_bPlaying_MetaData[] = {
		{ "Category", "SettingBase" },
		{ "Comment", "// \xe6\xad\xa3\xe5\x9c\xa8\xe6\x92\xad\xe6\x94\xbe\n" },
		{ "ModuleRelativePath", "Public/CPromethActor.h" },
		{ "ToolTip", "\xe6\xad\xa3\xe5\x9c\xa8\xe6\x92\xad\xe6\x94\xbe" },
	};
#endif
	void Z_Construct_UClass_ACPromethActor_Statics::NewProp_bPlaying_SetBit(void* Obj)
	{
		((ACPromethActor*)Obj)->bPlaying = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACPromethActor_Statics::NewProp_bPlaying = { "bPlaying", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACPromethActor), &Z_Construct_UClass_ACPromethActor_Statics::NewProp_bPlaying_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACPromethActor_Statics::NewProp_bPlaying_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPromethActor_Statics::NewProp_bPlaying_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPromethActor_Statics::NewProp_bOpening_MetaData[] = {
		{ "Category", "SettingBase" },
		{ "Comment", "// \xe6\xad\xa3\xe5\x9c\xa8\xe6\x89\x93\xe5\xbc\x80\xe6\x96\x87\xe4\xbb\xb6\n" },
		{ "ModuleRelativePath", "Public/CPromethActor.h" },
		{ "ToolTip", "\xe6\xad\xa3\xe5\x9c\xa8\xe6\x89\x93\xe5\xbc\x80\xe6\x96\x87\xe4\xbb\xb6" },
	};
#endif
	void Z_Construct_UClass_ACPromethActor_Statics::NewProp_bOpening_SetBit(void* Obj)
	{
		((ACPromethActor*)Obj)->bOpening = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACPromethActor_Statics::NewProp_bOpening = { "bOpening", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACPromethActor), &Z_Construct_UClass_ACPromethActor_Statics::NewProp_bOpening_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACPromethActor_Statics::NewProp_bOpening_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPromethActor_Statics::NewProp_bOpening_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPromethActor_Statics::NewProp_bSeeking_MetaData[] = {
		{ "Category", "SettingBase" },
		{ "Comment", "// \xe6\xad\xa3\xe5\x9c\xa8\xe6\x92\xad\xe6\x94\xbe\n" },
		{ "ModuleRelativePath", "Public/CPromethActor.h" },
		{ "ToolTip", "\xe6\xad\xa3\xe5\x9c\xa8\xe6\x92\xad\xe6\x94\xbe" },
	};
#endif
	void Z_Construct_UClass_ACPromethActor_Statics::NewProp_bSeeking_SetBit(void* Obj)
	{
		((ACPromethActor*)Obj)->bSeeking = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACPromethActor_Statics::NewProp_bSeeking = { "bSeeking", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACPromethActor), &Z_Construct_UClass_ACPromethActor_Statics::NewProp_bSeeking_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACPromethActor_Statics::NewProp_bSeeking_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPromethActor_Statics::NewProp_bSeeking_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPromethActor_Statics::NewProp_bLoop_MetaData[] = {
		{ "Category", "SettingBase" },
		{ "Comment", "// \xe5\xbe\xaa\xe7\x8e\xaf\xe6\x92\xad\xe6\x94\xbe\n" },
		{ "ModuleRelativePath", "Public/CPromethActor.h" },
		{ "ToolTip", "\xe5\xbe\xaa\xe7\x8e\xaf\xe6\x92\xad\xe6\x94\xbe" },
	};
#endif
	void Z_Construct_UClass_ACPromethActor_Statics::NewProp_bLoop_SetBit(void* Obj)
	{
		((ACPromethActor*)Obj)->bLoop = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACPromethActor_Statics::NewProp_bLoop = { "bLoop", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACPromethActor), &Z_Construct_UClass_ACPromethActor_Statics::NewProp_bLoop_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACPromethActor_Statics::NewProp_bLoop_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPromethActor_Statics::NewProp_bLoop_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPromethActor_Statics::NewProp_bAutoPlay_MetaData[] = {
		{ "Category", "SettingBase" },
		{ "Comment", "// \xe8\x87\xaa\xe5\x8a\xa8\xe6\x92\xad\xe6\x94\xbe\n" },
		{ "ModuleRelativePath", "Public/CPromethActor.h" },
		{ "ToolTip", "\xe8\x87\xaa\xe5\x8a\xa8\xe6\x92\xad\xe6\x94\xbe" },
	};
#endif
	void Z_Construct_UClass_ACPromethActor_Statics::NewProp_bAutoPlay_SetBit(void* Obj)
	{
		((ACPromethActor*)Obj)->bAutoPlay = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACPromethActor_Statics::NewProp_bAutoPlay = { "bAutoPlay", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACPromethActor), &Z_Construct_UClass_ACPromethActor_Statics::NewProp_bAutoPlay_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACPromethActor_Statics::NewProp_bAutoPlay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPromethActor_Statics::NewProp_bAutoPlay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPromethActor_Statics::NewProp_FrameCount_MetaData[] = {
		{ "Category", "SettingBase" },
		{ "Comment", "// \xe6\x80\xbb\xe5\xb8\xa7\xe6\x95\xb0\n" },
		{ "ModuleRelativePath", "Public/CPromethActor.h" },
		{ "ToolTip", "\xe6\x80\xbb\xe5\xb8\xa7\xe6\x95\xb0" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ACPromethActor_Statics::NewProp_FrameCount = { "FrameCount", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPromethActor, FrameCount), METADATA_PARAMS(Z_Construct_UClass_ACPromethActor_Statics::NewProp_FrameCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPromethActor_Statics::NewProp_FrameCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPromethActor_Statics::NewProp_FPS_MetaData[] = {
		{ "Category", "SettingBase" },
		{ "Comment", "// \xe5\xb8\xa7\xe7\x8e\x87\n" },
		{ "ModuleRelativePath", "Public/CPromethActor.h" },
		{ "ToolTip", "\xe5\xb8\xa7\xe7\x8e\x87" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ACPromethActor_Statics::NewProp_FPS = { "FPS", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPromethActor, FPS), METADATA_PARAMS(Z_Construct_UClass_ACPromethActor_Statics::NewProp_FPS_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPromethActor_Statics::NewProp_FPS_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPromethActor_Statics::NewProp_NowFrame_MetaData[] = {
		{ "Category", "SettingBase" },
		{ "Comment", "// \xe5\xbd\x93\xe5\x89\x8d\xe5\xb8\xa7\xe6\x95\xb0\n" },
		{ "ModuleRelativePath", "Public/CPromethActor.h" },
		{ "ToolTip", "\xe5\xbd\x93\xe5\x89\x8d\xe5\xb8\xa7\xe6\x95\xb0" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ACPromethActor_Statics::NewProp_NowFrame = { "NowFrame", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPromethActor, NowFrame), METADATA_PARAMS(Z_Construct_UClass_ACPromethActor_Statics::NewProp_NowFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPromethActor_Statics::NewProp_NowFrame_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPromethActor_Statics::NewProp_bNonAsynPlay_MetaData[] = {
		{ "Category", "SettingBase" },
		{ "Comment", "// \xe9\x9d\x9e\xe5\xbc\x82\xe6\xad\xa5\xe6\x92\xad\xe6\x94\xbe  Windows\xe5\x8f\xaf\xe9\x80\x89\xe6\x8b\xa9""false \xe9\x9d\x9e\xe5\xbc\x82\xe6\xad\xa5\xe6\x92\xad\xe6\x94\xbe\xe5\x8f\x8a\xe6\x9e\x84\xe9\x80\xa0  \xe5\x85\xb6\xe4\xbb\x96\xe7\xa7\xbb\xe5\x8a\xa8\xe7\xab\xaf\xe5\xb9\xb3\xe5\x8f\xb0\xe9\x80\x89\xe6\x8b\xa9\xe5\x88\x99\xe5\x8f\xaf\xe8\x83\xbd\xe5\x87\xba\xe7\x8e\xb0\xe5\xb4\xa9\xe6\xba\x83\xe7\x9a\x84\xe7\x8e\xb0\xe8\xb1\xa1\n" },
		{ "ModuleRelativePath", "Public/CPromethActor.h" },
		{ "ToolTip", "\xe9\x9d\x9e\xe5\xbc\x82\xe6\xad\xa5\xe6\x92\xad\xe6\x94\xbe  Windows\xe5\x8f\xaf\xe9\x80\x89\xe6\x8b\xa9""false \xe9\x9d\x9e\xe5\xbc\x82\xe6\xad\xa5\xe6\x92\xad\xe6\x94\xbe\xe5\x8f\x8a\xe6\x9e\x84\xe9\x80\xa0  \xe5\x85\xb6\xe4\xbb\x96\xe7\xa7\xbb\xe5\x8a\xa8\xe7\xab\xaf\xe5\xb9\xb3\xe5\x8f\xb0\xe9\x80\x89\xe6\x8b\xa9\xe5\x88\x99\xe5\x8f\xaf\xe8\x83\xbd\xe5\x87\xba\xe7\x8e\xb0\xe5\xb4\xa9\xe6\xba\x83\xe7\x9a\x84\xe7\x8e\xb0\xe8\xb1\xa1" },
	};
#endif
	void Z_Construct_UClass_ACPromethActor_Statics::NewProp_bNonAsynPlay_SetBit(void* Obj)
	{
		((ACPromethActor*)Obj)->bNonAsynPlay = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACPromethActor_Statics::NewProp_bNonAsynPlay = { "bNonAsynPlay", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACPromethActor), &Z_Construct_UClass_ACPromethActor_Statics::NewProp_bNonAsynPlay_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACPromethActor_Statics::NewProp_bNonAsynPlay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPromethActor_Statics::NewProp_bNonAsynPlay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPromethActor_Statics::NewProp_OpenTexture_MetaData[] = {
		{ "Category", "SettingBase" },
		{ "Comment", "// \xe6\x9e\x84\xe9\x80\xa0\xe7\xba\xb9\xe7\x90\x86\n" },
		{ "ModuleRelativePath", "Public/CPromethActor.h" },
		{ "ToolTip", "\xe6\x9e\x84\xe9\x80\xa0\xe7\xba\xb9\xe7\x90\x86" },
	};
#endif
	void Z_Construct_UClass_ACPromethActor_Statics::NewProp_OpenTexture_SetBit(void* Obj)
	{
		((ACPromethActor*)Obj)->OpenTexture = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACPromethActor_Statics::NewProp_OpenTexture = { "OpenTexture", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACPromethActor), &Z_Construct_UClass_ACPromethActor_Statics::NewProp_OpenTexture_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACPromethActor_Statics::NewProp_OpenTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPromethActor_Statics::NewProp_OpenTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPromethActor_Statics::NewProp_OpenMesh_MetaData[] = {
		{ "Category", "SettingBase" },
		{ "Comment", "// \xe6\x9e\x84\xe9\x80\xa0\xe7\xbd\x91\xe6\xa0\xbc\n" },
		{ "ModuleRelativePath", "Public/CPromethActor.h" },
		{ "ToolTip", "\xe6\x9e\x84\xe9\x80\xa0\xe7\xbd\x91\xe6\xa0\xbc" },
	};
#endif
	void Z_Construct_UClass_ACPromethActor_Statics::NewProp_OpenMesh_SetBit(void* Obj)
	{
		((ACPromethActor*)Obj)->OpenMesh = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACPromethActor_Statics::NewProp_OpenMesh = { "OpenMesh", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACPromethActor), &Z_Construct_UClass_ACPromethActor_Statics::NewProp_OpenMesh_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACPromethActor_Statics::NewProp_OpenMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPromethActor_Statics::NewProp_OpenMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPromethActor_Statics::NewProp_IsGameTime_MetaData[] = {
		{ "Category", "SettingBase" },
		{ "Comment", "// true: \xe4\xbb\xa5GameTime\xe4\xbd\x9c\xe4\xb8\xba\xe8\xa7\x86\xe9\xa2\x91\xe6\x92\xad\xe6\x94\xbe\xe7\x9a\x84\xe6\x97\xb6\xe9\x97\xb4\xe6\x90\x93  false: \xe4\xbb\xa5\xe7\xb3\xbb\xe7\xbb\x9f\xe6\x97\xb6\xe9\x97\xb4\xe4\xbd\x9c\xe4\xb8\xba\xe8\xa7\x86\xe9\xa2\x91\xe6\x92\xad\xe6\x94\xbe\xe7\x9a\x84\xe6\x97\xb6\xe9\x97\xb4\xe6\x90\x93\n" },
		{ "ModuleRelativePath", "Public/CPromethActor.h" },
		{ "ToolTip", "true: \xe4\xbb\xa5GameTime\xe4\xbd\x9c\xe4\xb8\xba\xe8\xa7\x86\xe9\xa2\x91\xe6\x92\xad\xe6\x94\xbe\xe7\x9a\x84\xe6\x97\xb6\xe9\x97\xb4\xe6\x90\x93  false: \xe4\xbb\xa5\xe7\xb3\xbb\xe7\xbb\x9f\xe6\x97\xb6\xe9\x97\xb4\xe4\xbd\x9c\xe4\xb8\xba\xe8\xa7\x86\xe9\xa2\x91\xe6\x92\xad\xe6\x94\xbe\xe7\x9a\x84\xe6\x97\xb6\xe9\x97\xb4\xe6\x90\x93" },
	};
#endif
	void Z_Construct_UClass_ACPromethActor_Statics::NewProp_IsGameTime_SetBit(void* Obj)
	{
		((ACPromethActor*)Obj)->IsGameTime = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACPromethActor_Statics::NewProp_IsGameTime = { "IsGameTime", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACPromethActor), &Z_Construct_UClass_ACPromethActor_Statics::NewProp_IsGameTime_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACPromethActor_Statics::NewProp_IsGameTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPromethActor_Statics::NewProp_IsGameTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPromethActor_Statics::NewProp_VideoID_MetaData[] = {
		{ "Category", "VideoParam" },
		{ "Comment", "// \xe7\xba\xb9\xe7\x90\x86\xe8\xa7\x86\xe9\xa2\x91\xe8\xa7\xa3\xe7\xa0\x81\xe7\x9a\x84ID\n" },
		{ "ModuleRelativePath", "Public/CPromethActor.h" },
		{ "ToolTip", "\xe7\xba\xb9\xe7\x90\x86\xe8\xa7\x86\xe9\xa2\x91\xe8\xa7\xa3\xe7\xa0\x81\xe7\x9a\x84ID" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ACPromethActor_Statics::NewProp_VideoID = { "VideoID", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPromethActor, VideoID), METADATA_PARAMS(Z_Construct_UClass_ACPromethActor_Statics::NewProp_VideoID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPromethActor_Statics::NewProp_VideoID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPromethActor_Statics::NewProp_NeedOpenPath_MetaData[] = {
		{ "Category", "SettingBase" },
		{ "ModuleRelativePath", "Public/CPromethActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ACPromethActor_Statics::NewProp_NeedOpenPath = { "NeedOpenPath", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPromethActor, NeedOpenPath), METADATA_PARAMS(Z_Construct_UClass_ACPromethActor_Statics::NewProp_NeedOpenPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPromethActor_Statics::NewProp_NeedOpenPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPromethActor_Statics::NewProp_CreateTextureY_MetaData[] = {
		{ "Category", "AndroidSetting" },
		{ "Comment", "// Android Setting\n" },
		{ "ModuleRelativePath", "Public/CPromethActor.h" },
		{ "ToolTip", "Android Setting" },
	};
#endif
	void Z_Construct_UClass_ACPromethActor_Statics::NewProp_CreateTextureY_SetBit(void* Obj)
	{
		((ACPromethActor*)Obj)->CreateTextureY = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACPromethActor_Statics::NewProp_CreateTextureY = { "CreateTextureY", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACPromethActor), &Z_Construct_UClass_ACPromethActor_Statics::NewProp_CreateTextureY_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACPromethActor_Statics::NewProp_CreateTextureY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPromethActor_Statics::NewProp_CreateTextureY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPromethActor_Statics::NewProp_CreateTextureUV_MetaData[] = {
		{ "Category", "AndroidSetting" },
		{ "ModuleRelativePath", "Public/CPromethActor.h" },
	};
#endif
	void Z_Construct_UClass_ACPromethActor_Statics::NewProp_CreateTextureUV_SetBit(void* Obj)
	{
		((ACPromethActor*)Obj)->CreateTextureUV = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACPromethActor_Statics::NewProp_CreateTextureUV = { "CreateTextureUV", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACPromethActor), &Z_Construct_UClass_ACPromethActor_Statics::NewProp_CreateTextureUV_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACPromethActor_Statics::NewProp_CreateTextureUV_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPromethActor_Statics::NewProp_CreateTextureUV_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPromethActor_Statics::NewProp_bIsPathOpen_MetaData[] = {
		{ "Category", "SettingPath" },
		{ "Comment", "// \xe4\xbb\xa5\xe8\xb7\xaf\xe5\xbe\x84\xe6\x89\x93\xe5\xbc\x80\xe8\xa7\x86\xe9\xa2\x91\n" },
		{ "ModuleRelativePath", "Public/CPromethActor.h" },
		{ "ToolTip", "\xe4\xbb\xa5\xe8\xb7\xaf\xe5\xbe\x84\xe6\x89\x93\xe5\xbc\x80\xe8\xa7\x86\xe9\xa2\x91" },
	};
#endif
	void Z_Construct_UClass_ACPromethActor_Statics::NewProp_bIsPathOpen_SetBit(void* Obj)
	{
		((ACPromethActor*)Obj)->bIsPathOpen = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACPromethActor_Statics::NewProp_bIsPathOpen = { "bIsPathOpen", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACPromethActor), &Z_Construct_UClass_ACPromethActor_Statics::NewProp_bIsPathOpen_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACPromethActor_Statics::NewProp_bIsPathOpen_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPromethActor_Statics::NewProp_bIsPathOpen_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPromethActor_Statics::NewProp_VideoPath_MetaData[] = {
		{ "Category", "SettingPath" },
		{ "Comment", "// \xe8\xb7\xaf\xe5\xbe\x84\xe8\xa7\x86\xe9\xa2\x91\n" },
		{ "ModuleRelativePath", "Public/CPromethActor.h" },
		{ "ToolTip", "\xe8\xb7\xaf\xe5\xbe\x84\xe8\xa7\x86\xe9\xa2\x91" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ACPromethActor_Statics::NewProp_VideoPath = { "VideoPath", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPromethActor, VideoPath), METADATA_PARAMS(Z_Construct_UClass_ACPromethActor_Statics::NewProp_VideoPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPromethActor_Statics::NewProp_VideoPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPromethActor_Statics::NewProp_MediaSource_MetaData[] = {
		{ "Category", "SettingPath" },
		{ "Comment", "//\xe8\xa7\x86\xe9\xa2\x91\xe8\xb5\x84\xe4\xba\xa7\xef\xbc\x8c\xe6\xb3\xa8\xe6\x84\x8f\xef\xbc\x9a\xe6\x89\x93\xe5\x8c\x85\xe9\x9c\x80\xe8\xa6\x81\xe5\xb0\x86\xe8\xa7\x86\xe9\xa2\x91\xe6\x96\x87\xe4\xbb\xb6\xe6\x94\xbe\xe5\x85\xa5Movies\xe6\x96\x87\xe4\xbb\xb6\xe5\xa4\xb9\n" },
		{ "ModuleRelativePath", "Public/CPromethActor.h" },
		{ "ToolTip", "\xe8\xa7\x86\xe9\xa2\x91\xe8\xb5\x84\xe4\xba\xa7\xef\xbc\x8c\xe6\xb3\xa8\xe6\x84\x8f\xef\xbc\x9a\xe6\x89\x93\xe5\x8c\x85\xe9\x9c\x80\xe8\xa6\x81\xe5\xb0\x86\xe8\xa7\x86\xe9\xa2\x91\xe6\x96\x87\xe4\xbb\xb6\xe6\x94\xbe\xe5\x85\xa5Movies\xe6\x96\x87\xe4\xbb\xb6\xe5\xa4\xb9" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPromethActor_Statics::NewProp_MediaSource = { "MediaSource", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPromethActor, MediaSource), Z_Construct_UClass_UMediaSource_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACPromethActor_Statics::NewProp_MediaSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPromethActor_Statics::NewProp_MediaSource_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPromethActor_Statics::NewProp_MaterialInst_MetaData[] = {
		{ "Category", "SettingRendering" },
		{ "Comment", "// \xe5\x8a\xa8\xe6\x80\x81\xe6\x9d\x90\xe8\xb4\xa8\xe5\xae\x9e\xe4\xbe\x8b \n" },
		{ "ModuleRelativePath", "Public/CPromethActor.h" },
		{ "ToolTip", "\xe5\x8a\xa8\xe6\x80\x81\xe6\x9d\x90\xe8\xb4\xa8\xe5\xae\x9e\xe4\xbe\x8b" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPromethActor_Statics::NewProp_MaterialInst = { "MaterialInst", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPromethActor, MaterialInst), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACPromethActor_Statics::NewProp_MaterialInst_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPromethActor_Statics::NewProp_MaterialInst_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPromethActor_Statics::NewProp_WinMaterial_MetaData[] = {
		{ "Category", "SettingRendering" },
		{ "Comment", "// Windows\xe6\x9d\x90\xe8\xb4\xa8\n" },
		{ "ModuleRelativePath", "Public/CPromethActor.h" },
		{ "ToolTip", "Windows\xe6\x9d\x90\xe8\xb4\xa8" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPromethActor_Statics::NewProp_WinMaterial = { "WinMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPromethActor, WinMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACPromethActor_Statics::NewProp_WinMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPromethActor_Statics::NewProp_WinMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPromethActor_Statics::NewProp_IOSMaterial_MetaData[] = {
		{ "Category", "SettingRendering" },
		{ "Comment", "// IOS\xe6\x9d\x90\xe8\xb4\xa8\n" },
		{ "ModuleRelativePath", "Public/CPromethActor.h" },
		{ "ToolTip", "IOS\xe6\x9d\x90\xe8\xb4\xa8" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPromethActor_Statics::NewProp_IOSMaterial = { "IOSMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPromethActor, IOSMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACPromethActor_Statics::NewProp_IOSMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPromethActor_Statics::NewProp_IOSMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPromethActor_Statics::NewProp_AndroidMaterial_MetaData[] = {
		{ "Category", "SettingRendering" },
		{ "Comment", "// Android\xe6\x9d\x90\xe8\xb4\xa8\n" },
		{ "ModuleRelativePath", "Public/CPromethActor.h" },
		{ "ToolTip", "Android\xe6\x9d\x90\xe8\xb4\xa8" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPromethActor_Statics::NewProp_AndroidMaterial = { "AndroidMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPromethActor, AndroidMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACPromethActor_Statics::NewProp_AndroidMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPromethActor_Statics::NewProp_AndroidMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPromethActor_Statics::NewProp_VideoHeight_MetaData[] = {
		{ "Category", "SettingRendering" },
		{ "Comment", "// \xe7\xba\xb9\xe7\x90\x86\xe5\xae\xbd\n" },
		{ "ModuleRelativePath", "Public/CPromethActor.h" },
		{ "ToolTip", "\xe7\xba\xb9\xe7\x90\x86\xe5\xae\xbd" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ACPromethActor_Statics::NewProp_VideoHeight = { "VideoHeight", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPromethActor, VideoHeight), METADATA_PARAMS(Z_Construct_UClass_ACPromethActor_Statics::NewProp_VideoHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPromethActor_Statics::NewProp_VideoHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPromethActor_Statics::NewProp_VideoWidth_MetaData[] = {
		{ "Category", "SettingRendering" },
		{ "Comment", "// \xe7\xba\xb9\xe7\x90\x86\xe9\xab\x98\n" },
		{ "ModuleRelativePath", "Public/CPromethActor.h" },
		{ "ToolTip", "\xe7\xba\xb9\xe7\x90\x86\xe9\xab\x98" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ACPromethActor_Statics::NewProp_VideoWidth = { "VideoWidth", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPromethActor, VideoWidth), METADATA_PARAMS(Z_Construct_UClass_ACPromethActor_Statics::NewProp_VideoWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPromethActor_Statics::NewProp_VideoWidth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPromethActor_Statics::NewProp_OpenVideoCompletion_MetaData[] = {
		{ "Category", "VideoBack" },
		{ "Comment", "// \xe8\xa7\x86\xe9\xa2\x91\xe6\x89\x93\xe5\xbc\x80\xe6\x88\x90\xe5\x8a\x9f\xe7\x9a\x84\xe5\x9b\x9e\xe8\xb0\x83\xe5\x87\xbd\xe6\x95\xb0\n" },
		{ "ModuleRelativePath", "Public/CPromethActor.h" },
		{ "ToolTip", "\xe8\xa7\x86\xe9\xa2\x91\xe6\x89\x93\xe5\xbc\x80\xe6\x88\x90\xe5\x8a\x9f\xe7\x9a\x84\xe5\x9b\x9e\xe8\xb0\x83\xe5\x87\xbd\xe6\x95\xb0" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ACPromethActor_Statics::NewProp_OpenVideoCompletion = { "OpenVideoCompletion", nullptr, (EPropertyFlags)0x0010000010080004, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPromethActor, OpenVideoCompletion), Z_Construct_UDelegateFunction_PromethPlugin_OpenVideoSucceed__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ACPromethActor_Statics::NewProp_OpenVideoCompletion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPromethActor_Statics::NewProp_OpenVideoCompletion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPromethActor_Statics::NewProp_SeekCallBack_MetaData[] = {
		{ "Category", "VideoBack" },
		{ "ModuleRelativePath", "Public/CPromethActor.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ACPromethActor_Statics::NewProp_SeekCallBack = { "SeekCallBack", nullptr, (EPropertyFlags)0x0010000010080004, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPromethActor, SeekCallBack), Z_Construct_UDelegateFunction_PromethPlugin_SeekSucceed__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ACPromethActor_Statics::NewProp_SeekCallBack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPromethActor_Statics::NewProp_SeekCallBack_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACPromethActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPromethActor_Statics::NewProp_VideoTexture2D,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPromethActor_Statics::NewProp_AndroidTexture2DY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPromethActor_Statics::NewProp_AndroidTexture2DUV,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPromethActor_Statics::NewProp_RootComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPromethActor_Statics::NewProp_Mesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPromethActor_Statics::NewProp_bDebugLog,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPromethActor_Statics::NewProp_LogSavePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPromethActor_Statics::NewProp_Keys,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPromethActor_Statics::NewProp_bOpened,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPromethActor_Statics::NewProp_bPlaying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPromethActor_Statics::NewProp_bOpening,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPromethActor_Statics::NewProp_bSeeking,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPromethActor_Statics::NewProp_bLoop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPromethActor_Statics::NewProp_bAutoPlay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPromethActor_Statics::NewProp_FrameCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPromethActor_Statics::NewProp_FPS,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPromethActor_Statics::NewProp_NowFrame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPromethActor_Statics::NewProp_bNonAsynPlay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPromethActor_Statics::NewProp_OpenTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPromethActor_Statics::NewProp_OpenMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPromethActor_Statics::NewProp_IsGameTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPromethActor_Statics::NewProp_VideoID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPromethActor_Statics::NewProp_NeedOpenPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPromethActor_Statics::NewProp_CreateTextureY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPromethActor_Statics::NewProp_CreateTextureUV,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPromethActor_Statics::NewProp_bIsPathOpen,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPromethActor_Statics::NewProp_VideoPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPromethActor_Statics::NewProp_MediaSource,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPromethActor_Statics::NewProp_MaterialInst,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPromethActor_Statics::NewProp_WinMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPromethActor_Statics::NewProp_IOSMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPromethActor_Statics::NewProp_AndroidMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPromethActor_Statics::NewProp_VideoHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPromethActor_Statics::NewProp_VideoWidth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPromethActor_Statics::NewProp_OpenVideoCompletion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPromethActor_Statics::NewProp_SeekCallBack,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACPromethActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACPromethActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACPromethActor_Statics::ClassParams = {
		&ACPromethActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACPromethActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ACPromethActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACPromethActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACPromethActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACPromethActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACPromethActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACPromethActor, 2745035395);
	template<> PROMETHPLUGIN_API UClass* StaticClass<ACPromethActor>()
	{
		return ACPromethActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACPromethActor(Z_Construct_UClass_ACPromethActor, &ACPromethActor::StaticClass, TEXT("/Script/PromethPlugin"), TEXT("ACPromethActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACPromethActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
