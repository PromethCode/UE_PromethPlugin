// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FEditableSubtitleCue;
#ifdef PROMETHPLUGIN_ImportedSoundWave_generated_h
#error "ImportedSoundWave.generated.h already included, missing '#pragma once' in ImportedSoundWave.h"
#endif
#define PROMETHPLUGIN_ImportedSoundWave_generated_h

#define PrometheusProject_Plugins_PromethPlugin_Source_PromethPlugin_Public_AudioModel_ImportedSoundWave_h_13_DELEGATE \
struct _Script_PromethPlugin_eventOnGeneratePCMData_Parms \
{ \
	TArray<float> PCMData; \
}; \
static inline void FOnGeneratePCMData_DelegateWrapper(const FMulticastScriptDelegate& OnGeneratePCMData, TArray<float> const& PCMData) \
{ \
	_Script_PromethPlugin_eventOnGeneratePCMData_Parms Parms; \
	Parms.PCMData=PCMData; \
	OnGeneratePCMData.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define PrometheusProject_Plugins_PromethPlugin_Source_PromethPlugin_Public_AudioModel_ImportedSoundWave_h_9_DELEGATE \
static inline void FOnAudioPlaybackFinished_DelegateWrapper(const FMulticastScriptDelegate& OnAudioPlaybackFinished) \
{ \
	OnAudioPlaybackFinished.ProcessMulticastDelegate<UObject>(NULL); \
}


#define PrometheusProject_Plugins_PromethPlugin_Source_PromethPlugin_Public_AudioModel_ImportedSoundWave_h_18_SPARSE_DATA
#define PrometheusProject_Plugins_PromethPlugin_Source_PromethPlugin_Public_AudioModel_ImportedSoundWave_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsPlaybackFinished); \
	DECLARE_FUNCTION(execGetPlaybackPercentage); \
	DECLARE_FUNCTION(execGetDuration); \
	DECLARE_FUNCTION(execGetDurationConst); \
	DECLARE_FUNCTION(execGetPlaybackTime); \
	DECLARE_FUNCTION(execRewindPlaybackTime); \
	DECLARE_FUNCTION(execSetPitch); \
	DECLARE_FUNCTION(execSetVolume); \
	DECLARE_FUNCTION(execSetSubtitles); \
	DECLARE_FUNCTION(execSetLooping); \
	DECLARE_FUNCTION(execReleaseMemory);


#define PrometheusProject_Plugins_PromethPlugin_Source_PromethPlugin_Public_AudioModel_ImportedSoundWave_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsPlaybackFinished); \
	DECLARE_FUNCTION(execGetPlaybackPercentage); \
	DECLARE_FUNCTION(execGetDuration); \
	DECLARE_FUNCTION(execGetDurationConst); \
	DECLARE_FUNCTION(execGetPlaybackTime); \
	DECLARE_FUNCTION(execRewindPlaybackTime); \
	DECLARE_FUNCTION(execSetPitch); \
	DECLARE_FUNCTION(execSetVolume); \
	DECLARE_FUNCTION(execSetSubtitles); \
	DECLARE_FUNCTION(execSetLooping); \
	DECLARE_FUNCTION(execReleaseMemory);


#define PrometheusProject_Plugins_PromethPlugin_Source_PromethPlugin_Public_AudioModel_ImportedSoundWave_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUImportedSoundWave(); \
	friend struct Z_Construct_UClass_UImportedSoundWave_Statics; \
public: \
	DECLARE_CLASS(UImportedSoundWave, USoundWaveProcedural, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PromethPlugin"), NO_API) \
	DECLARE_SERIALIZER(UImportedSoundWave)


#define PrometheusProject_Plugins_PromethPlugin_Source_PromethPlugin_Public_AudioModel_ImportedSoundWave_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUImportedSoundWave(); \
	friend struct Z_Construct_UClass_UImportedSoundWave_Statics; \
public: \
	DECLARE_CLASS(UImportedSoundWave, USoundWaveProcedural, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PromethPlugin"), NO_API) \
	DECLARE_SERIALIZER(UImportedSoundWave)


#define PrometheusProject_Plugins_PromethPlugin_Source_PromethPlugin_Public_AudioModel_ImportedSoundWave_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UImportedSoundWave(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UImportedSoundWave) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UImportedSoundWave); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UImportedSoundWave); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UImportedSoundWave(UImportedSoundWave&&); \
	NO_API UImportedSoundWave(const UImportedSoundWave&); \
public:


#define PrometheusProject_Plugins_PromethPlugin_Source_PromethPlugin_Public_AudioModel_ImportedSoundWave_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UImportedSoundWave(UImportedSoundWave&&); \
	NO_API UImportedSoundWave(const UImportedSoundWave&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UImportedSoundWave); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UImportedSoundWave); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UImportedSoundWave)


#define PrometheusProject_Plugins_PromethPlugin_Source_PromethPlugin_Public_AudioModel_ImportedSoundWave_h_18_PRIVATE_PROPERTY_OFFSET
#define PrometheusProject_Plugins_PromethPlugin_Source_PromethPlugin_Public_AudioModel_ImportedSoundWave_h_15_PROLOG
#define PrometheusProject_Plugins_PromethPlugin_Source_PromethPlugin_Public_AudioModel_ImportedSoundWave_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PrometheusProject_Plugins_PromethPlugin_Source_PromethPlugin_Public_AudioModel_ImportedSoundWave_h_18_PRIVATE_PROPERTY_OFFSET \
	PrometheusProject_Plugins_PromethPlugin_Source_PromethPlugin_Public_AudioModel_ImportedSoundWave_h_18_SPARSE_DATA \
	PrometheusProject_Plugins_PromethPlugin_Source_PromethPlugin_Public_AudioModel_ImportedSoundWave_h_18_RPC_WRAPPERS \
	PrometheusProject_Plugins_PromethPlugin_Source_PromethPlugin_Public_AudioModel_ImportedSoundWave_h_18_INCLASS \
	PrometheusProject_Plugins_PromethPlugin_Source_PromethPlugin_Public_AudioModel_ImportedSoundWave_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PrometheusProject_Plugins_PromethPlugin_Source_PromethPlugin_Public_AudioModel_ImportedSoundWave_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PrometheusProject_Plugins_PromethPlugin_Source_PromethPlugin_Public_AudioModel_ImportedSoundWave_h_18_PRIVATE_PROPERTY_OFFSET \
	PrometheusProject_Plugins_PromethPlugin_Source_PromethPlugin_Public_AudioModel_ImportedSoundWave_h_18_SPARSE_DATA \
	PrometheusProject_Plugins_PromethPlugin_Source_PromethPlugin_Public_AudioModel_ImportedSoundWave_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	PrometheusProject_Plugins_PromethPlugin_Source_PromethPlugin_Public_AudioModel_ImportedSoundWave_h_18_INCLASS_NO_PURE_DECLS \
	PrometheusProject_Plugins_PromethPlugin_Source_PromethPlugin_Public_AudioModel_ImportedSoundWave_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROMETHPLUGIN_API UClass* StaticClass<class UImportedSoundWave>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PrometheusProject_Plugins_PromethPlugin_Source_PromethPlugin_Public_AudioModel_ImportedSoundWave_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
