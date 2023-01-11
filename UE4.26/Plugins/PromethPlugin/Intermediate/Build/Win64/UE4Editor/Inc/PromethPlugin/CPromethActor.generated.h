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
class UMaterialInterface;
class UMediaSource;
#ifdef PROMETHPLUGIN_CPromethActor_generated_h
#error "CPromethActor.generated.h already included, missing '#pragma once' in CPromethActor.h"
#endif
#define PROMETHPLUGIN_CPromethActor_generated_h

#define PrometheusProject_Plugins_PromethPlugin_Source_PromethPlugin_Public_CPromethActor_h_22_DELEGATE \
struct _Script_PromethPlugin_eventSeekSucceed_Parms \
{ \
	int32 Frame; \
}; \
static inline void FSeekSucceed_DelegateWrapper(const FMulticastScriptDelegate& SeekSucceed, int32 Frame) \
{ \
	_Script_PromethPlugin_eventSeekSucceed_Parms Parms; \
	Parms.Frame=Frame; \
	SeekSucceed.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define PrometheusProject_Plugins_PromethPlugin_Source_PromethPlugin_Public_CPromethActor_h_21_DELEGATE \
struct _Script_PromethPlugin_eventOpenVideoSucceed_Parms \
{ \
	bool Succeed; \
}; \
static inline void FOpenVideoSucceed_DelegateWrapper(const FMulticastScriptDelegate& OpenVideoSucceed, bool Succeed) \
{ \
	_Script_PromethPlugin_eventOpenVideoSucceed_Parms Parms; \
	Parms.Succeed=Succeed ? true : false; \
	OpenVideoSucceed.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define PrometheusProject_Plugins_PromethPlugin_Source_PromethPlugin_Public_CPromethActor_h_27_SPARSE_DATA
#define PrometheusProject_Plugins_PromethPlugin_Source_PromethPlugin_Public_CPromethActor_h_27_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnResult); \
	DECLARE_FUNCTION(execChangeMaterial); \
	DECLARE_FUNCTION(execCloseVideo); \
	DECLARE_FUNCTION(execisFinish); \
	DECLARE_FUNCTION(execSeek); \
	DECLARE_FUNCTION(execPause); \
	DECLARE_FUNCTION(execPlay); \
	DECLARE_FUNCTION(execOpenVideo);


#define PrometheusProject_Plugins_PromethPlugin_Source_PromethPlugin_Public_CPromethActor_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnResult); \
	DECLARE_FUNCTION(execChangeMaterial); \
	DECLARE_FUNCTION(execCloseVideo); \
	DECLARE_FUNCTION(execisFinish); \
	DECLARE_FUNCTION(execSeek); \
	DECLARE_FUNCTION(execPause); \
	DECLARE_FUNCTION(execPlay); \
	DECLARE_FUNCTION(execOpenVideo);


#define PrometheusProject_Plugins_PromethPlugin_Source_PromethPlugin_Public_CPromethActor_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACPromethActor(); \
	friend struct Z_Construct_UClass_ACPromethActor_Statics; \
public: \
	DECLARE_CLASS(ACPromethActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PromethPlugin"), NO_API) \
	DECLARE_SERIALIZER(ACPromethActor)


#define PrometheusProject_Plugins_PromethPlugin_Source_PromethPlugin_Public_CPromethActor_h_27_INCLASS \
private: \
	static void StaticRegisterNativesACPromethActor(); \
	friend struct Z_Construct_UClass_ACPromethActor_Statics; \
public: \
	DECLARE_CLASS(ACPromethActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PromethPlugin"), NO_API) \
	DECLARE_SERIALIZER(ACPromethActor)


#define PrometheusProject_Plugins_PromethPlugin_Source_PromethPlugin_Public_CPromethActor_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACPromethActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACPromethActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACPromethActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACPromethActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACPromethActor(ACPromethActor&&); \
	NO_API ACPromethActor(const ACPromethActor&); \
public:


#define PrometheusProject_Plugins_PromethPlugin_Source_PromethPlugin_Public_CPromethActor_h_27_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACPromethActor(ACPromethActor&&); \
	NO_API ACPromethActor(const ACPromethActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACPromethActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACPromethActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACPromethActor)


#define PrometheusProject_Plugins_PromethPlugin_Source_PromethPlugin_Public_CPromethActor_h_27_PRIVATE_PROPERTY_OFFSET
#define PrometheusProject_Plugins_PromethPlugin_Source_PromethPlugin_Public_CPromethActor_h_24_PROLOG
#define PrometheusProject_Plugins_PromethPlugin_Source_PromethPlugin_Public_CPromethActor_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PrometheusProject_Plugins_PromethPlugin_Source_PromethPlugin_Public_CPromethActor_h_27_PRIVATE_PROPERTY_OFFSET \
	PrometheusProject_Plugins_PromethPlugin_Source_PromethPlugin_Public_CPromethActor_h_27_SPARSE_DATA \
	PrometheusProject_Plugins_PromethPlugin_Source_PromethPlugin_Public_CPromethActor_h_27_RPC_WRAPPERS \
	PrometheusProject_Plugins_PromethPlugin_Source_PromethPlugin_Public_CPromethActor_h_27_INCLASS \
	PrometheusProject_Plugins_PromethPlugin_Source_PromethPlugin_Public_CPromethActor_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PrometheusProject_Plugins_PromethPlugin_Source_PromethPlugin_Public_CPromethActor_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PrometheusProject_Plugins_PromethPlugin_Source_PromethPlugin_Public_CPromethActor_h_27_PRIVATE_PROPERTY_OFFSET \
	PrometheusProject_Plugins_PromethPlugin_Source_PromethPlugin_Public_CPromethActor_h_27_SPARSE_DATA \
	PrometheusProject_Plugins_PromethPlugin_Source_PromethPlugin_Public_CPromethActor_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	PrometheusProject_Plugins_PromethPlugin_Source_PromethPlugin_Public_CPromethActor_h_27_INCLASS_NO_PURE_DECLS \
	PrometheusProject_Plugins_PromethPlugin_Source_PromethPlugin_Public_CPromethActor_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROMETHPLUGIN_API UClass* StaticClass<class ACPromethActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PrometheusProject_Plugins_PromethPlugin_Source_PromethPlugin_Public_CPromethActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
