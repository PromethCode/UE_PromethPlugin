// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PromethPlugin/Public/AudioModel/PreimportedSoundAsset.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePreimportedSoundAsset() {}
// Cross Module References
	PROMETHPLUGIN_API UClass* Z_Construct_UClass_UPreImportedSoundAsset_NoRegister();
	PROMETHPLUGIN_API UClass* Z_Construct_UClass_UPreImportedSoundAsset();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_PromethPlugin();
	PROMETHPLUGIN_API UEnum* Z_Construct_UEnum_PromethPlugin_EAudioFormat();
// End Cross Module References
	void UPreImportedSoundAsset::StaticRegisterNativesUPreImportedSoundAsset()
	{
	}
	UClass* Z_Construct_UClass_UPreImportedSoundAsset_NoRegister()
	{
		return UPreImportedSoundAsset::StaticClass();
	}
	struct Z_Construct_UClass_UPreImportedSoundAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AudioDataArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AudioDataArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AudioDataArray;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AudioFormat_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AudioFormat_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AudioFormat;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceFilePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SourceFilePath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoundDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SoundDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumberOfChannels_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumberOfChannels;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SampleRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SampleRate;
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPreImportedSoundAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_PromethPlugin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPreImportedSoundAsset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Pre Imported Sound Asset" },
		{ "IncludePath", "AudioModel/PreimportedSoundAsset.h" },
		{ "ModuleRelativePath", "Public/AudioModel/PreimportedSoundAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPreImportedSoundAsset_Statics::NewProp_AudioDataArray_Inner = { "AudioDataArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPreImportedSoundAsset_Statics::NewProp_AudioDataArray_MetaData[] = {
		{ "ModuleRelativePath", "Public/AudioModel/PreimportedSoundAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPreImportedSoundAsset_Statics::NewProp_AudioDataArray = { "AudioDataArray", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPreImportedSoundAsset, AudioDataArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPreImportedSoundAsset_Statics::NewProp_AudioDataArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPreImportedSoundAsset_Statics::NewProp_AudioDataArray_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPreImportedSoundAsset_Statics::NewProp_AudioFormat_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPreImportedSoundAsset_Statics::NewProp_AudioFormat_MetaData[] = {
		{ "Category", "Info" },
		{ "DisplayName", "Audio format" },
		{ "ModuleRelativePath", "Public/AudioModel/PreimportedSoundAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPreImportedSoundAsset_Statics::NewProp_AudioFormat = { "AudioFormat", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPreImportedSoundAsset, AudioFormat), Z_Construct_UEnum_PromethPlugin_EAudioFormat, METADATA_PARAMS(Z_Construct_UClass_UPreImportedSoundAsset_Statics::NewProp_AudioFormat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPreImportedSoundAsset_Statics::NewProp_AudioFormat_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPreImportedSoundAsset_Statics::NewProp_SourceFilePath_MetaData[] = {
		{ "Category", "File Path" },
		{ "DisplayName", "Source file path" },
		{ "ModuleRelativePath", "Public/AudioModel/PreimportedSoundAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPreImportedSoundAsset_Statics::NewProp_SourceFilePath = { "SourceFilePath", nullptr, (EPropertyFlags)0x0010000800020001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPreImportedSoundAsset, SourceFilePath), METADATA_PARAMS(Z_Construct_UClass_UPreImportedSoundAsset_Statics::NewProp_SourceFilePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPreImportedSoundAsset_Statics::NewProp_SourceFilePath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPreImportedSoundAsset_Statics::NewProp_SoundDuration_MetaData[] = {
		{ "Category", "Info" },
		{ "DisplayName", "Sound duration" },
		{ "ModuleRelativePath", "Public/AudioModel/PreimportedSoundAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPreImportedSoundAsset_Statics::NewProp_SoundDuration = { "SoundDuration", nullptr, (EPropertyFlags)0x0010000800020001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPreImportedSoundAsset, SoundDuration), METADATA_PARAMS(Z_Construct_UClass_UPreImportedSoundAsset_Statics::NewProp_SoundDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPreImportedSoundAsset_Statics::NewProp_SoundDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPreImportedSoundAsset_Statics::NewProp_NumberOfChannels_MetaData[] = {
		{ "Category", "Info" },
		{ "DisplayName", "Number of channels" },
		{ "ModuleRelativePath", "Public/AudioModel/PreimportedSoundAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPreImportedSoundAsset_Statics::NewProp_NumberOfChannels = { "NumberOfChannels", nullptr, (EPropertyFlags)0x0010000800020001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPreImportedSoundAsset, NumberOfChannels), METADATA_PARAMS(Z_Construct_UClass_UPreImportedSoundAsset_Statics::NewProp_NumberOfChannels_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPreImportedSoundAsset_Statics::NewProp_NumberOfChannels_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPreImportedSoundAsset_Statics::NewProp_SampleRate_MetaData[] = {
		{ "Category", "Info" },
		{ "DisplayName", "Sample rate" },
		{ "ModuleRelativePath", "Public/AudioModel/PreimportedSoundAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPreImportedSoundAsset_Statics::NewProp_SampleRate = { "SampleRate", nullptr, (EPropertyFlags)0x0010000800020001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPreImportedSoundAsset, SampleRate), METADATA_PARAMS(Z_Construct_UClass_UPreImportedSoundAsset_Statics::NewProp_SampleRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPreImportedSoundAsset_Statics::NewProp_SampleRate_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPreImportedSoundAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPreImportedSoundAsset_Statics::NewProp_AudioDataArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPreImportedSoundAsset_Statics::NewProp_AudioDataArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPreImportedSoundAsset_Statics::NewProp_AudioFormat_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPreImportedSoundAsset_Statics::NewProp_AudioFormat,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPreImportedSoundAsset_Statics::NewProp_SourceFilePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPreImportedSoundAsset_Statics::NewProp_SoundDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPreImportedSoundAsset_Statics::NewProp_NumberOfChannels,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPreImportedSoundAsset_Statics::NewProp_SampleRate,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPreImportedSoundAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPreImportedSoundAsset>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPreImportedSoundAsset_Statics::ClassParams = {
		&UPreImportedSoundAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPreImportedSoundAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPreImportedSoundAsset_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPreImportedSoundAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPreImportedSoundAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPreImportedSoundAsset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPreImportedSoundAsset_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPreImportedSoundAsset, 2936971732);
	template<> PROMETHPLUGIN_API UClass* StaticClass<UPreImportedSoundAsset>()
	{
		return UPreImportedSoundAsset::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPreImportedSoundAsset(Z_Construct_UClass_UPreImportedSoundAsset, &UPreImportedSoundAsset::StaticClass, TEXT("/Script/PromethPlugin"), TEXT("UPreImportedSoundAsset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPreImportedSoundAsset);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
