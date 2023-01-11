// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PromethPlugin/Public/AudioModel/RuntimeAudioCompressor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRuntimeAudioCompressor() {}
// Cross Module References
	PROMETHPLUGIN_API UFunction* Z_Construct_UDelegateFunction_PromethPlugin_OnSoundWaveCompressedResult__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_PromethPlugin();
	ENGINE_API UClass* Z_Construct_UClass_USoundWave_NoRegister();
	PROMETHPLUGIN_API UClass* Z_Construct_UClass_URuntimeAudioCompressor_NoRegister();
	PROMETHPLUGIN_API UClass* Z_Construct_UClass_URuntimeAudioCompressor();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	PROMETHPLUGIN_API UClass* Z_Construct_UClass_UImportedSoundWave_NoRegister();
	PROMETHPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FCompressedSoundWaveInfo();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_PromethPlugin_OnSoundWaveCompressedResult__DelegateSignature_Statics
	{
		struct _Script_PromethPlugin_eventOnSoundWaveCompressedResult_Parms
		{
			bool bSuccess;
			USoundWave* SoundWaveRef;
		};
		static void NewProp_bSuccess_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SoundWaveRef;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_PromethPlugin_OnSoundWaveCompressedResult__DelegateSignature_Statics::NewProp_bSuccess_SetBit(void* Obj)
	{
		((_Script_PromethPlugin_eventOnSoundWaveCompressedResult_Parms*)Obj)->bSuccess = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_PromethPlugin_OnSoundWaveCompressedResult__DelegateSignature_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_PromethPlugin_eventOnSoundWaveCompressedResult_Parms), &Z_Construct_UDelegateFunction_PromethPlugin_OnSoundWaveCompressedResult__DelegateSignature_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_PromethPlugin_OnSoundWaveCompressedResult__DelegateSignature_Statics::NewProp_SoundWaveRef = { "SoundWaveRef", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_PromethPlugin_eventOnSoundWaveCompressedResult_Parms, SoundWaveRef), Z_Construct_UClass_USoundWave_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_PromethPlugin_OnSoundWaveCompressedResult__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PromethPlugin_OnSoundWaveCompressedResult__DelegateSignature_Statics::NewProp_bSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PromethPlugin_OnSoundWaveCompressedResult__DelegateSignature_Statics::NewProp_SoundWaveRef,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_PromethPlugin_OnSoundWaveCompressedResult__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AudioModel/RuntimeAudioCompressor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_PromethPlugin_OnSoundWaveCompressedResult__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_PromethPlugin, nullptr, "OnSoundWaveCompressedResult__DelegateSignature", nullptr, nullptr, sizeof(_Script_PromethPlugin_eventOnSoundWaveCompressedResult_Parms), Z_Construct_UDelegateFunction_PromethPlugin_OnSoundWaveCompressedResult__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PromethPlugin_OnSoundWaveCompressedResult__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_PromethPlugin_OnSoundWaveCompressedResult__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PromethPlugin_OnSoundWaveCompressedResult__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_PromethPlugin_OnSoundWaveCompressedResult__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_PromethPlugin_OnSoundWaveCompressedResult__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(URuntimeAudioCompressor::execCompressSoundWave)
	{
		P_GET_OBJECT(UImportedSoundWave,Z_Param_ImportedSoundWaveRef);
		P_GET_STRUCT(FCompressedSoundWaveInfo,Z_Param_CompressedSoundWaveInfo);
		P_GET_PROPERTY(FByteProperty,Z_Param_Quality);
		P_GET_UBOOL(Z_Param_bFillCompressedBuffer);
		P_GET_UBOOL(Z_Param_bFillPCMBuffer);
		P_GET_UBOOL(Z_Param_bFillRAWWaveBuffer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CompressSoundWave(Z_Param_ImportedSoundWaveRef,Z_Param_CompressedSoundWaveInfo,Z_Param_Quality,Z_Param_bFillCompressedBuffer,Z_Param_bFillPCMBuffer,Z_Param_bFillRAWWaveBuffer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeAudioCompressor::execCreateRuntimeAudioCompressor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(URuntimeAudioCompressor**)Z_Param__Result=URuntimeAudioCompressor::CreateRuntimeAudioCompressor();
		P_NATIVE_END;
	}
	void URuntimeAudioCompressor::StaticRegisterNativesURuntimeAudioCompressor()
	{
		UClass* Class = URuntimeAudioCompressor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CompressSoundWave", &URuntimeAudioCompressor::execCompressSoundWave },
			{ "CreateRuntimeAudioCompressor", &URuntimeAudioCompressor::execCreateRuntimeAudioCompressor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URuntimeAudioCompressor_CompressSoundWave_Statics
	{
		struct RuntimeAudioCompressor_eventCompressSoundWave_Parms
		{
			UImportedSoundWave* ImportedSoundWaveRef;
			FCompressedSoundWaveInfo CompressedSoundWaveInfo;
			uint8 Quality;
			bool bFillCompressedBuffer;
			bool bFillPCMBuffer;
			bool bFillRAWWaveBuffer;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ImportedSoundWaveRef;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CompressedSoundWaveInfo;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Quality;
		static void NewProp_bFillCompressedBuffer_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFillCompressedBuffer;
		static void NewProp_bFillPCMBuffer_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFillPCMBuffer;
		static void NewProp_bFillRAWWaveBuffer_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFillRAWWaveBuffer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URuntimeAudioCompressor_CompressSoundWave_Statics::NewProp_ImportedSoundWaveRef = { "ImportedSoundWaveRef", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeAudioCompressor_eventCompressSoundWave_Parms, ImportedSoundWaveRef), Z_Construct_UClass_UImportedSoundWave_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeAudioCompressor_CompressSoundWave_Statics::NewProp_CompressedSoundWaveInfo = { "CompressedSoundWaveInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeAudioCompressor_eventCompressSoundWave_Parms, CompressedSoundWaveInfo), Z_Construct_UScriptStruct_FCompressedSoundWaveInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URuntimeAudioCompressor_CompressSoundWave_Statics::NewProp_Quality = { "Quality", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeAudioCompressor_eventCompressSoundWave_Parms, Quality), nullptr, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URuntimeAudioCompressor_CompressSoundWave_Statics::NewProp_bFillCompressedBuffer_SetBit(void* Obj)
	{
		((RuntimeAudioCompressor_eventCompressSoundWave_Parms*)Obj)->bFillCompressedBuffer = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URuntimeAudioCompressor_CompressSoundWave_Statics::NewProp_bFillCompressedBuffer = { "bFillCompressedBuffer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RuntimeAudioCompressor_eventCompressSoundWave_Parms), &Z_Construct_UFunction_URuntimeAudioCompressor_CompressSoundWave_Statics::NewProp_bFillCompressedBuffer_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URuntimeAudioCompressor_CompressSoundWave_Statics::NewProp_bFillPCMBuffer_SetBit(void* Obj)
	{
		((RuntimeAudioCompressor_eventCompressSoundWave_Parms*)Obj)->bFillPCMBuffer = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URuntimeAudioCompressor_CompressSoundWave_Statics::NewProp_bFillPCMBuffer = { "bFillPCMBuffer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RuntimeAudioCompressor_eventCompressSoundWave_Parms), &Z_Construct_UFunction_URuntimeAudioCompressor_CompressSoundWave_Statics::NewProp_bFillPCMBuffer_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URuntimeAudioCompressor_CompressSoundWave_Statics::NewProp_bFillRAWWaveBuffer_SetBit(void* Obj)
	{
		((RuntimeAudioCompressor_eventCompressSoundWave_Parms*)Obj)->bFillRAWWaveBuffer = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URuntimeAudioCompressor_CompressSoundWave_Statics::NewProp_bFillRAWWaveBuffer = { "bFillRAWWaveBuffer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RuntimeAudioCompressor_eventCompressSoundWave_Parms), &Z_Construct_UFunction_URuntimeAudioCompressor_CompressSoundWave_Statics::NewProp_bFillRAWWaveBuffer_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeAudioCompressor_CompressSoundWave_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAudioCompressor_CompressSoundWave_Statics::NewProp_ImportedSoundWaveRef,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAudioCompressor_CompressSoundWave_Statics::NewProp_CompressedSoundWaveInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAudioCompressor_CompressSoundWave_Statics::NewProp_Quality,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAudioCompressor_CompressSoundWave_Statics::NewProp_bFillCompressedBuffer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAudioCompressor_CompressSoundWave_Statics::NewProp_bFillPCMBuffer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAudioCompressor_CompressSoundWave_Statics::NewProp_bFillRAWWaveBuffer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeAudioCompressor_CompressSoundWave_Statics::Function_MetaDataParams[] = {
		{ "DeprecatedFunction", "" },
		{ "ModuleRelativePath", "Public/AudioModel/RuntimeAudioCompressor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeAudioCompressor_CompressSoundWave_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeAudioCompressor, nullptr, "CompressSoundWave", nullptr, nullptr, sizeof(RuntimeAudioCompressor_eventCompressSoundWave_Parms), Z_Construct_UFunction_URuntimeAudioCompressor_CompressSoundWave_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeAudioCompressor_CompressSoundWave_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeAudioCompressor_CompressSoundWave_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeAudioCompressor_CompressSoundWave_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeAudioCompressor_CompressSoundWave()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URuntimeAudioCompressor_CompressSoundWave_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeAudioCompressor_CreateRuntimeAudioCompressor_Statics
	{
		struct RuntimeAudioCompressor_eventCreateRuntimeAudioCompressor_Parms
		{
			URuntimeAudioCompressor* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URuntimeAudioCompressor_CreateRuntimeAudioCompressor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeAudioCompressor_eventCreateRuntimeAudioCompressor_Parms, ReturnValue), Z_Construct_UClass_URuntimeAudioCompressor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeAudioCompressor_CreateRuntimeAudioCompressor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAudioCompressor_CreateRuntimeAudioCompressor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeAudioCompressor_CreateRuntimeAudioCompressor_Statics::Function_MetaDataParams[] = {
		{ "DeprecatedFunction", "" },
		{ "ModuleRelativePath", "Public/AudioModel/RuntimeAudioCompressor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeAudioCompressor_CreateRuntimeAudioCompressor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeAudioCompressor, nullptr, "CreateRuntimeAudioCompressor", nullptr, nullptr, sizeof(RuntimeAudioCompressor_eventCreateRuntimeAudioCompressor_Parms), Z_Construct_UFunction_URuntimeAudioCompressor_CreateRuntimeAudioCompressor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeAudioCompressor_CreateRuntimeAudioCompressor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeAudioCompressor_CreateRuntimeAudioCompressor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeAudioCompressor_CreateRuntimeAudioCompressor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeAudioCompressor_CreateRuntimeAudioCompressor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URuntimeAudioCompressor_CreateRuntimeAudioCompressor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_URuntimeAudioCompressor_NoRegister()
	{
		return URuntimeAudioCompressor::StaticClass();
	}
	struct Z_Construct_UClass_URuntimeAudioCompressor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URuntimeAudioCompressor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_PromethPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URuntimeAudioCompressor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URuntimeAudioCompressor_CompressSoundWave, "CompressSoundWave" }, // 1489078479
		{ &Z_Construct_UFunction_URuntimeAudioCompressor_CreateRuntimeAudioCompressor, "CreateRuntimeAudioCompressor" }, // 1458646039
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URuntimeAudioCompressor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AudioModel/RuntimeAudioCompressor.h" },
		{ "ModuleRelativePath", "Public/AudioModel/RuntimeAudioCompressor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URuntimeAudioCompressor_Statics::NewProp_OnResult_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Public/AudioModel/RuntimeAudioCompressor.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_URuntimeAudioCompressor_Statics::NewProp_OnResult = { "OnResult", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URuntimeAudioCompressor, OnResult), Z_Construct_UDelegateFunction_PromethPlugin_OnSoundWaveCompressedResult__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_URuntimeAudioCompressor_Statics::NewProp_OnResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeAudioCompressor_Statics::NewProp_OnResult_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URuntimeAudioCompressor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeAudioCompressor_Statics::NewProp_OnResult,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URuntimeAudioCompressor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URuntimeAudioCompressor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URuntimeAudioCompressor_Statics::ClassParams = {
		&URuntimeAudioCompressor::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_URuntimeAudioCompressor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeAudioCompressor_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URuntimeAudioCompressor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeAudioCompressor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URuntimeAudioCompressor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URuntimeAudioCompressor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URuntimeAudioCompressor, 1072499761);
	template<> PROMETHPLUGIN_API UClass* StaticClass<URuntimeAudioCompressor>()
	{
		return URuntimeAudioCompressor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URuntimeAudioCompressor(Z_Construct_UClass_URuntimeAudioCompressor, &URuntimeAudioCompressor::StaticClass, TEXT("/Script/PromethPlugin"), TEXT("URuntimeAudioCompressor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URuntimeAudioCompressor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
