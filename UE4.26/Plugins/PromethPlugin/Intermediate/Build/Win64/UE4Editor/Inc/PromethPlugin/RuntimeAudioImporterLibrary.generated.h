// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class URuntimeAudioImporterLibrary;
class UImportedSoundWave;
enum class ETranscodingStatus : uint8;
enum class EAudioFormat : uint8;
enum class ERAWAudioFormat : uint8;
class UPreImportedSoundAsset;
#ifdef PROMETHPLUGIN_RuntimeAudioImporterLibrary_generated_h
#error "RuntimeAudioImporterLibrary.generated.h already included, missing '#pragma once' in RuntimeAudioImporterLibrary.h"
#endif
#define PROMETHPLUGIN_RuntimeAudioImporterLibrary_generated_h

#define PrometheusProject_Plugins_PromethPlugin_Source_PromethPlugin_Public_AudioModel_RuntimeAudioImporterLibrary_h_34_DELEGATE \
struct _Script_PromethPlugin_eventOnRAWDataTranscodeFromFileResult_Parms \
{ \
	bool bSucceeded; \
}; \
static inline void FOnRAWDataTranscodeFromFileResult_DelegateWrapper(const FScriptDelegate& OnRAWDataTranscodeFromFileResult, bool bSucceeded) \
{ \
	_Script_PromethPlugin_eventOnRAWDataTranscodeFromFileResult_Parms Parms; \
	Parms.bSucceeded=bSucceeded ? true : false; \
	OnRAWDataTranscodeFromFileResult.ProcessDelegate<UObject>(&Parms); \
}


#define PrometheusProject_Plugins_PromethPlugin_Source_PromethPlugin_Public_AudioModel_RuntimeAudioImporterLibrary_h_29_DELEGATE \
struct _Script_PromethPlugin_eventOnRAWDataTranscodeFromBufferResult_Parms \
{ \
	bool bSucceeded; \
	TArray<uint8> RAWData; \
}; \
static inline void FOnRAWDataTranscodeFromBufferResult_DelegateWrapper(const FScriptDelegate& OnRAWDataTranscodeFromBufferResult, bool bSucceeded, TArray<uint8> const& RAWData) \
{ \
	_Script_PromethPlugin_eventOnRAWDataTranscodeFromBufferResult_Parms Parms; \
	Parms.bSucceeded=bSucceeded ? true : false; \
	Parms.RAWData=RAWData; \
	OnRAWDataTranscodeFromBufferResult.ProcessDelegate<UObject>(&Parms); \
}


#define PrometheusProject_Plugins_PromethPlugin_Source_PromethPlugin_Public_AudioModel_RuntimeAudioImporterLibrary_h_24_DELEGATE \
struct _Script_PromethPlugin_eventOnAudioExportToFileResult_Parms \
{ \
	bool bSucceeded; \
}; \
static inline void FOnAudioExportToFileResult_DelegateWrapper(const FScriptDelegate& OnAudioExportToFileResult, bool bSucceeded) \
{ \
	_Script_PromethPlugin_eventOnAudioExportToFileResult_Parms Parms; \
	Parms.bSucceeded=bSucceeded ? true : false; \
	OnAudioExportToFileResult.ProcessDelegate<UObject>(&Parms); \
}


#define PrometheusProject_Plugins_PromethPlugin_Source_PromethPlugin_Public_AudioModel_RuntimeAudioImporterLibrary_h_20_DELEGATE \
struct _Script_PromethPlugin_eventOnAudioExportToBufferResult_Parms \
{ \
	bool bSucceeded; \
	TArray<uint8> AudioData; \
}; \
static inline void FOnAudioExportToBufferResult_DelegateWrapper(const FScriptDelegate& OnAudioExportToBufferResult, bool bSucceeded, TArray<uint8> const& AudioData) \
{ \
	_Script_PromethPlugin_eventOnAudioExportToBufferResult_Parms Parms; \
	Parms.bSucceeded=bSucceeded ? true : false; \
	Parms.AudioData=AudioData; \
	OnAudioExportToBufferResult.ProcessDelegate<UObject>(&Parms); \
}


#define PrometheusProject_Plugins_PromethPlugin_Source_PromethPlugin_Public_AudioModel_RuntimeAudioImporterLibrary_h_15_DELEGATE \
struct _Script_PromethPlugin_eventOnAudioImporterResult_Parms \
{ \
	URuntimeAudioImporterLibrary* Importer; \
	UImportedSoundWave* ImportedSoundWave; \
	ETranscodingStatus Status; \
}; \
static inline void FOnAudioImporterResult_DelegateWrapper(const FMulticastScriptDelegate& OnAudioImporterResult, URuntimeAudioImporterLibrary* Importer, UImportedSoundWave* ImportedSoundWave, ETranscodingStatus Status) \
{ \
	_Script_PromethPlugin_eventOnAudioImporterResult_Parms Parms; \
	Parms.Importer=Importer; \
	Parms.ImportedSoundWave=ImportedSoundWave; \
	Parms.Status=Status; \
	OnAudioImporterResult.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define PrometheusProject_Plugins_PromethPlugin_Source_PromethPlugin_Public_AudioModel_RuntimeAudioImporterLibrary_h_11_DELEGATE \
struct _Script_PromethPlugin_eventOnAudioImporterProgress_Parms \
{ \
	int32 Percentage; \
}; \
static inline void FOnAudioImporterProgress_DelegateWrapper(const FMulticastScriptDelegate& OnAudioImporterProgress, int32 Percentage) \
{ \
	_Script_PromethPlugin_eventOnAudioImporterProgress_Parms Parms; \
	Parms.Percentage=Percentage; \
	OnAudioImporterProgress.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define PrometheusProject_Plugins_PromethPlugin_Source_PromethPlugin_Public_AudioModel_RuntimeAudioImporterLibrary_h_40_SPARSE_DATA
#define PrometheusProject_Plugins_PromethPlugin_Source_PromethPlugin_Public_AudioModel_RuntimeAudioImporterLibrary_h_40_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execConvertSecondsToString); \
	DECLARE_FUNCTION(execGetAudioFormatAdvanced); \
	DECLARE_FUNCTION(execGetAudioFormat); \
	DECLARE_FUNCTION(execExportSoundWaveToBuffer); \
	DECLARE_FUNCTION(execExportSoundWaveToFile); \
	DECLARE_FUNCTION(execTranscodeRAWDataFromFile); \
	DECLARE_FUNCTION(execTranscodeRAWDataFromBuffer); \
	DECLARE_FUNCTION(execImportAudioFromRAWBuffer); \
	DECLARE_FUNCTION(execImportAudioFromRAWFile); \
	DECLARE_FUNCTION(execImportAudioFromBuffer); \
	DECLARE_FUNCTION(execImportAudioFromPreImportedSound); \
	DECLARE_FUNCTION(execImportAudioFromFile); \
	DECLARE_FUNCTION(execCreateRuntimeAudioImporter);


#define PrometheusProject_Plugins_PromethPlugin_Source_PromethPlugin_Public_AudioModel_RuntimeAudioImporterLibrary_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execConvertSecondsToString); \
	DECLARE_FUNCTION(execGetAudioFormatAdvanced); \
	DECLARE_FUNCTION(execGetAudioFormat); \
	DECLARE_FUNCTION(execExportSoundWaveToBuffer); \
	DECLARE_FUNCTION(execExportSoundWaveToFile); \
	DECLARE_FUNCTION(execTranscodeRAWDataFromFile); \
	DECLARE_FUNCTION(execTranscodeRAWDataFromBuffer); \
	DECLARE_FUNCTION(execImportAudioFromRAWBuffer); \
	DECLARE_FUNCTION(execImportAudioFromRAWFile); \
	DECLARE_FUNCTION(execImportAudioFromBuffer); \
	DECLARE_FUNCTION(execImportAudioFromPreImportedSound); \
	DECLARE_FUNCTION(execImportAudioFromFile); \
	DECLARE_FUNCTION(execCreateRuntimeAudioImporter);


#define PrometheusProject_Plugins_PromethPlugin_Source_PromethPlugin_Public_AudioModel_RuntimeAudioImporterLibrary_h_40_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURuntimeAudioImporterLibrary(); \
	friend struct Z_Construct_UClass_URuntimeAudioImporterLibrary_Statics; \
public: \
	DECLARE_CLASS(URuntimeAudioImporterLibrary, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PromethPlugin"), NO_API) \
	DECLARE_SERIALIZER(URuntimeAudioImporterLibrary)


#define PrometheusProject_Plugins_PromethPlugin_Source_PromethPlugin_Public_AudioModel_RuntimeAudioImporterLibrary_h_40_INCLASS \
private: \
	static void StaticRegisterNativesURuntimeAudioImporterLibrary(); \
	friend struct Z_Construct_UClass_URuntimeAudioImporterLibrary_Statics; \
public: \
	DECLARE_CLASS(URuntimeAudioImporterLibrary, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PromethPlugin"), NO_API) \
	DECLARE_SERIALIZER(URuntimeAudioImporterLibrary)


#define PrometheusProject_Plugins_PromethPlugin_Source_PromethPlugin_Public_AudioModel_RuntimeAudioImporterLibrary_h_40_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URuntimeAudioImporterLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URuntimeAudioImporterLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URuntimeAudioImporterLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URuntimeAudioImporterLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URuntimeAudioImporterLibrary(URuntimeAudioImporterLibrary&&); \
	NO_API URuntimeAudioImporterLibrary(const URuntimeAudioImporterLibrary&); \
public:


#define PrometheusProject_Plugins_PromethPlugin_Source_PromethPlugin_Public_AudioModel_RuntimeAudioImporterLibrary_h_40_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URuntimeAudioImporterLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URuntimeAudioImporterLibrary(URuntimeAudioImporterLibrary&&); \
	NO_API URuntimeAudioImporterLibrary(const URuntimeAudioImporterLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URuntimeAudioImporterLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URuntimeAudioImporterLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URuntimeAudioImporterLibrary)


#define PrometheusProject_Plugins_PromethPlugin_Source_PromethPlugin_Public_AudioModel_RuntimeAudioImporterLibrary_h_40_PRIVATE_PROPERTY_OFFSET
#define PrometheusProject_Plugins_PromethPlugin_Source_PromethPlugin_Public_AudioModel_RuntimeAudioImporterLibrary_h_37_PROLOG
#define PrometheusProject_Plugins_PromethPlugin_Source_PromethPlugin_Public_AudioModel_RuntimeAudioImporterLibrary_h_40_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PrometheusProject_Plugins_PromethPlugin_Source_PromethPlugin_Public_AudioModel_RuntimeAudioImporterLibrary_h_40_PRIVATE_PROPERTY_OFFSET \
	PrometheusProject_Plugins_PromethPlugin_Source_PromethPlugin_Public_AudioModel_RuntimeAudioImporterLibrary_h_40_SPARSE_DATA \
	PrometheusProject_Plugins_PromethPlugin_Source_PromethPlugin_Public_AudioModel_RuntimeAudioImporterLibrary_h_40_RPC_WRAPPERS \
	PrometheusProject_Plugins_PromethPlugin_Source_PromethPlugin_Public_AudioModel_RuntimeAudioImporterLibrary_h_40_INCLASS \
	PrometheusProject_Plugins_PromethPlugin_Source_PromethPlugin_Public_AudioModel_RuntimeAudioImporterLibrary_h_40_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PrometheusProject_Plugins_PromethPlugin_Source_PromethPlugin_Public_AudioModel_RuntimeAudioImporterLibrary_h_40_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PrometheusProject_Plugins_PromethPlugin_Source_PromethPlugin_Public_AudioModel_RuntimeAudioImporterLibrary_h_40_PRIVATE_PROPERTY_OFFSET \
	PrometheusProject_Plugins_PromethPlugin_Source_PromethPlugin_Public_AudioModel_RuntimeAudioImporterLibrary_h_40_SPARSE_DATA \
	PrometheusProject_Plugins_PromethPlugin_Source_PromethPlugin_Public_AudioModel_RuntimeAudioImporterLibrary_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
	PrometheusProject_Plugins_PromethPlugin_Source_PromethPlugin_Public_AudioModel_RuntimeAudioImporterLibrary_h_40_INCLASS_NO_PURE_DECLS \
	PrometheusProject_Plugins_PromethPlugin_Source_PromethPlugin_Public_AudioModel_RuntimeAudioImporterLibrary_h_40_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROMETHPLUGIN_API UClass* StaticClass<class URuntimeAudioImporterLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PrometheusProject_Plugins_PromethPlugin_Source_PromethPlugin_Public_AudioModel_RuntimeAudioImporterLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
