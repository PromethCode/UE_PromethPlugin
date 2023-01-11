// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PromethPlugin/Private/AudioModel/Transcoders/WAVTranscoder.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWAVTranscoder() {}
// Cross Module References
	PROMETHPLUGIN_API UEnum* Z_Construct_UEnum_PromethPlugin_EWAVEncodingFormat();
	UPackage* Z_Construct_UPackage__Script_PromethPlugin();
// End Cross Module References
	static UEnum* EWAVEncodingFormat_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PromethPlugin_EWAVEncodingFormat, Z_Construct_UPackage__Script_PromethPlugin(), TEXT("EWAVEncodingFormat"));
		}
		return Singleton;
	}
	template<> PROMETHPLUGIN_API UEnum* StaticEnum<EWAVEncodingFormat>()
	{
		return EWAVEncodingFormat_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EWAVEncodingFormat(EWAVEncodingFormat_StaticEnum, TEXT("/Script/PromethPlugin"), TEXT("EWAVEncodingFormat"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PromethPlugin_EWAVEncodingFormat_Hash() { return 904824335U; }
	UEnum* Z_Construct_UEnum_PromethPlugin_EWAVEncodingFormat()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PromethPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EWAVEncodingFormat"), 0, Get_Z_Construct_UEnum_PromethPlugin_EWAVEncodingFormat_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EWAVEncodingFormat::FORMAT_PCM", (int64)EWAVEncodingFormat::FORMAT_PCM },
				{ "EWAVEncodingFormat::FORMAT_ADPCM", (int64)EWAVEncodingFormat::FORMAT_ADPCM },
				{ "EWAVEncodingFormat::FORMAT_IEEE_FLOAT", (int64)EWAVEncodingFormat::FORMAT_IEEE_FLOAT },
				{ "EWAVEncodingFormat::FORMAT_ALAW", (int64)EWAVEncodingFormat::FORMAT_ALAW },
				{ "EWAVEncodingFormat::FORMAT_MULAW", (int64)EWAVEncodingFormat::FORMAT_MULAW },
				{ "EWAVEncodingFormat::FORMAT_DVI_ADPCM", (int64)EWAVEncodingFormat::FORMAT_DVI_ADPCM },
				{ "EWAVEncodingFormat::FORMAT_EXTENSIBLE", (int64)EWAVEncodingFormat::FORMAT_EXTENSIBLE },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "FORMAT_ADPCM.Name", "EWAVEncodingFormat::FORMAT_ADPCM" },
				{ "FORMAT_ALAW.Name", "EWAVEncodingFormat::FORMAT_ALAW" },
				{ "FORMAT_DVI_ADPCM.Name", "EWAVEncodingFormat::FORMAT_DVI_ADPCM" },
				{ "FORMAT_EXTENSIBLE.Name", "EWAVEncodingFormat::FORMAT_EXTENSIBLE" },
				{ "FORMAT_IEEE_FLOAT.Name", "EWAVEncodingFormat::FORMAT_IEEE_FLOAT" },
				{ "FORMAT_MULAW.Name", "EWAVEncodingFormat::FORMAT_MULAW" },
				{ "FORMAT_PCM.Name", "EWAVEncodingFormat::FORMAT_PCM" },
				{ "ModuleRelativePath", "Private/AudioModel/Transcoders/WAVTranscoder.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PromethPlugin,
				nullptr,
				"EWAVEncodingFormat",
				"EWAVEncodingFormat",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
