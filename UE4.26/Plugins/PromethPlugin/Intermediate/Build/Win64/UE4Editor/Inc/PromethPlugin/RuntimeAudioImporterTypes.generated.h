// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROMETHPLUGIN_RuntimeAudioImporterTypes_generated_h
#error "RuntimeAudioImporterTypes.generated.h already included, missing '#pragma once' in RuntimeAudioImporterTypes.h"
#endif
#define PROMETHPLUGIN_RuntimeAudioImporterTypes_generated_h

#define PrometheusProject_Plugins_PromethPlugin_Source_PromethPlugin_Public_AudioModel_RuntimeAudioImporterTypes_h_138_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEditableSubtitleCue_Statics; \
	PROMETHPLUGIN_API static class UScriptStruct* StaticStruct();


template<> PROMETHPLUGIN_API UScriptStruct* StaticStruct<struct FEditableSubtitleCue>();

#define PrometheusProject_Plugins_PromethPlugin_Source_PromethPlugin_Public_AudioModel_RuntimeAudioImporterTypes_h_118_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCompressedSoundWaveInfo_Statics; \
	PROMETHPLUGIN_API static class UScriptStruct* StaticStruct();


template<> PROMETHPLUGIN_API UScriptStruct* StaticStruct<struct FCompressedSoundWaveInfo>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PrometheusProject_Plugins_PromethPlugin_Source_PromethPlugin_Public_AudioModel_RuntimeAudioImporterTypes_h


#define FOREACH_ENUM_ERAWAUDIOFORMAT(op) \
	op(ERAWAudioFormat::Int16) \
	op(ERAWAudioFormat::Int32) \
	op(ERAWAudioFormat::UInt8) \
	op(ERAWAudioFormat::Float32) 

enum class ERAWAudioFormat : uint8;
template<> PROMETHPLUGIN_API UEnum* StaticEnum<ERAWAudioFormat>();

#define FOREACH_ENUM_EAUDIOFORMAT(op) \
	op(EAudioFormat::Auto) \
	op(EAudioFormat::Mp3) \
	op(EAudioFormat::Wav) \
	op(EAudioFormat::Flac) \
	op(EAudioFormat::OggVorbis) \
	op(EAudioFormat::Invalid) 

enum class EAudioFormat : uint8;
template<> PROMETHPLUGIN_API UEnum* StaticEnum<EAudioFormat>();

#define FOREACH_ENUM_ETRANSCODINGSTATUS(op) \
	op(ETranscodingStatus::SuccessfulImport) \
	op(ETranscodingStatus::FailedToReadAudioDataArray) \
	op(ETranscodingStatus::SoundWaveDeclarationError) \
	op(ETranscodingStatus::InvalidAudioFormat) \
	op(ETranscodingStatus::AudioDoesNotExist) \
	op(ETranscodingStatus::LoadFileToArrayError) 

enum class ETranscodingStatus : uint8;
template<> PROMETHPLUGIN_API UEnum* StaticEnum<ETranscodingStatus>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
