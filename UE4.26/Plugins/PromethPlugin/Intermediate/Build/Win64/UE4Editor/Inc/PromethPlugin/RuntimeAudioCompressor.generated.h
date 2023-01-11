// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USoundWave;
class UImportedSoundWave;
struct FCompressedSoundWaveInfo;
class URuntimeAudioCompressor;
#ifdef PROMETHPLUGIN_RuntimeAudioCompressor_generated_h
#error "RuntimeAudioCompressor.generated.h already included, missing '#pragma once' in RuntimeAudioCompressor.h"
#endif
#define PROMETHPLUGIN_RuntimeAudioCompressor_generated_h

#define PrometheusProject_Plugins_PromethPlugin_Source_PromethPlugin_Public_AudioModel_RuntimeAudioCompressor_h_9_DELEGATE \
struct _Script_PromethPlugin_eventOnSoundWaveCompressedResult_Parms \
{ \
	bool bSuccess; \
	USoundWave* SoundWaveRef; \
}; \
static inline void FOnSoundWaveCompressedResult_DelegateWrapper(const FMulticastScriptDelegate& OnSoundWaveCompressedResult, bool bSuccess, USoundWave* SoundWaveRef) \
{ \
	_Script_PromethPlugin_eventOnSoundWaveCompressedResult_Parms Parms; \
	Parms.bSuccess=bSuccess ? true : false; \
	Parms.SoundWaveRef=SoundWaveRef; \
	OnSoundWaveCompressedResult.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define PrometheusProject_Plugins_PromethPlugin_Source_PromethPlugin_Public_AudioModel_RuntimeAudioCompressor_h_14_SPARSE_DATA
#define PrometheusProject_Plugins_PromethPlugin_Source_PromethPlugin_Public_AudioModel_RuntimeAudioCompressor_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCompressSoundWave); \
	DECLARE_FUNCTION(execCreateRuntimeAudioCompressor);


#define PrometheusProject_Plugins_PromethPlugin_Source_PromethPlugin_Public_AudioModel_RuntimeAudioCompressor_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCompressSoundWave); \
	DECLARE_FUNCTION(execCreateRuntimeAudioCompressor);


#define PrometheusProject_Plugins_PromethPlugin_Source_PromethPlugin_Public_AudioModel_RuntimeAudioCompressor_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURuntimeAudioCompressor(); \
	friend struct Z_Construct_UClass_URuntimeAudioCompressor_Statics; \
public: \
	DECLARE_CLASS(URuntimeAudioCompressor, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PromethPlugin"), NO_API) \
	DECLARE_SERIALIZER(URuntimeAudioCompressor)


#define PrometheusProject_Plugins_PromethPlugin_Source_PromethPlugin_Public_AudioModel_RuntimeAudioCompressor_h_14_INCLASS \
private: \
	static void StaticRegisterNativesURuntimeAudioCompressor(); \
	friend struct Z_Construct_UClass_URuntimeAudioCompressor_Statics; \
public: \
	DECLARE_CLASS(URuntimeAudioCompressor, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PromethPlugin"), NO_API) \
	DECLARE_SERIALIZER(URuntimeAudioCompressor)


#define PrometheusProject_Plugins_PromethPlugin_Source_PromethPlugin_Public_AudioModel_RuntimeAudioCompressor_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URuntimeAudioCompressor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URuntimeAudioCompressor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URuntimeAudioCompressor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URuntimeAudioCompressor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URuntimeAudioCompressor(URuntimeAudioCompressor&&); \
	NO_API URuntimeAudioCompressor(const URuntimeAudioCompressor&); \
public:


#define PrometheusProject_Plugins_PromethPlugin_Source_PromethPlugin_Public_AudioModel_RuntimeAudioCompressor_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URuntimeAudioCompressor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URuntimeAudioCompressor(URuntimeAudioCompressor&&); \
	NO_API URuntimeAudioCompressor(const URuntimeAudioCompressor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URuntimeAudioCompressor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URuntimeAudioCompressor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URuntimeAudioCompressor)


#define PrometheusProject_Plugins_PromethPlugin_Source_PromethPlugin_Public_AudioModel_RuntimeAudioCompressor_h_14_PRIVATE_PROPERTY_OFFSET
#define PrometheusProject_Plugins_PromethPlugin_Source_PromethPlugin_Public_AudioModel_RuntimeAudioCompressor_h_11_PROLOG
#define PrometheusProject_Plugins_PromethPlugin_Source_PromethPlugin_Public_AudioModel_RuntimeAudioCompressor_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PrometheusProject_Plugins_PromethPlugin_Source_PromethPlugin_Public_AudioModel_RuntimeAudioCompressor_h_14_PRIVATE_PROPERTY_OFFSET \
	PrometheusProject_Plugins_PromethPlugin_Source_PromethPlugin_Public_AudioModel_RuntimeAudioCompressor_h_14_SPARSE_DATA \
	PrometheusProject_Plugins_PromethPlugin_Source_PromethPlugin_Public_AudioModel_RuntimeAudioCompressor_h_14_RPC_WRAPPERS \
	PrometheusProject_Plugins_PromethPlugin_Source_PromethPlugin_Public_AudioModel_RuntimeAudioCompressor_h_14_INCLASS \
	PrometheusProject_Plugins_PromethPlugin_Source_PromethPlugin_Public_AudioModel_RuntimeAudioCompressor_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PrometheusProject_Plugins_PromethPlugin_Source_PromethPlugin_Public_AudioModel_RuntimeAudioCompressor_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PrometheusProject_Plugins_PromethPlugin_Source_PromethPlugin_Public_AudioModel_RuntimeAudioCompressor_h_14_PRIVATE_PROPERTY_OFFSET \
	PrometheusProject_Plugins_PromethPlugin_Source_PromethPlugin_Public_AudioModel_RuntimeAudioCompressor_h_14_SPARSE_DATA \
	PrometheusProject_Plugins_PromethPlugin_Source_PromethPlugin_Public_AudioModel_RuntimeAudioCompressor_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	PrometheusProject_Plugins_PromethPlugin_Source_PromethPlugin_Public_AudioModel_RuntimeAudioCompressor_h_14_INCLASS_NO_PURE_DECLS \
	PrometheusProject_Plugins_PromethPlugin_Source_PromethPlugin_Public_AudioModel_RuntimeAudioCompressor_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROMETHPLUGIN_API UClass* StaticClass<class URuntimeAudioCompressor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PrometheusProject_Plugins_PromethPlugin_Source_PromethPlugin_Public_AudioModel_RuntimeAudioCompressor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
