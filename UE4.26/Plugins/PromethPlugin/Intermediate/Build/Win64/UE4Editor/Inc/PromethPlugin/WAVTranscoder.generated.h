// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROMETHPLUGIN_WAVTranscoder_generated_h
#error "WAVTranscoder.generated.h already included, missing '#pragma once' in WAVTranscoder.h"
#endif
#define PROMETHPLUGIN_WAVTranscoder_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PrometheusProject_Plugins_PromethPlugin_Source_PromethPlugin_Private_AudioModel_Transcoders_WAVTranscoder_h


#define FOREACH_ENUM_EWAVENCODINGFORMAT(op) \
	op(EWAVEncodingFormat::FORMAT_PCM) \
	op(EWAVEncodingFormat::FORMAT_ADPCM) \
	op(EWAVEncodingFormat::FORMAT_IEEE_FLOAT) \
	op(EWAVEncodingFormat::FORMAT_ALAW) \
	op(EWAVEncodingFormat::FORMAT_MULAW) \
	op(EWAVEncodingFormat::FORMAT_DVI_ADPCM) \
	op(EWAVEncodingFormat::FORMAT_EXTENSIBLE) 

enum class EWAVEncodingFormat : uint8;
template<> PROMETHPLUGIN_API UEnum* StaticEnum<EWAVEncodingFormat>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
