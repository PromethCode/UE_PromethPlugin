// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CPromethActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMaterialInterface;
class UMediaSource;
#ifdef PROMETHPLUGIN_CPromethActor_generated_h
#error "CPromethActor.generated.h already included, missing '#pragma once' in CPromethActor.h"
#endif
#define PROMETHPLUGIN_CPromethActor_generated_h

#define FID_G_Test51_Plugins_PromethPlugin_Source_PromethPlugin_Public_CPromethActor_h_20_DELEGATE \
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


#define FID_G_Test51_Plugins_PromethPlugin_Source_PromethPlugin_Public_CPromethActor_h_21_DELEGATE \
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


#define FID_G_Test51_Plugins_PromethPlugin_Source_PromethPlugin_Public_CPromethActor_h_26_SPARSE_DATA
#define FID_G_Test51_Plugins_PromethPlugin_Source_PromethPlugin_Public_CPromethActor_h_26_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execChangeMaterial); \
	DECLARE_FUNCTION(execCloseVideo); \
	DECLARE_FUNCTION(execisFinish); \
	DECLARE_FUNCTION(execSeek); \
	DECLARE_FUNCTION(execPause); \
	DECLARE_FUNCTION(execPlay); \
	DECLARE_FUNCTION(execOpenVideo);


#define FID_G_Test51_Plugins_PromethPlugin_Source_PromethPlugin_Public_CPromethActor_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execChangeMaterial); \
	DECLARE_FUNCTION(execCloseVideo); \
	DECLARE_FUNCTION(execisFinish); \
	DECLARE_FUNCTION(execSeek); \
	DECLARE_FUNCTION(execPause); \
	DECLARE_FUNCTION(execPlay); \
	DECLARE_FUNCTION(execOpenVideo);


#define FID_G_Test51_Plugins_PromethPlugin_Source_PromethPlugin_Public_CPromethActor_h_26_ACCESSORS
#define FID_G_Test51_Plugins_PromethPlugin_Source_PromethPlugin_Public_CPromethActor_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACPromethActor(); \
	friend struct Z_Construct_UClass_ACPromethActor_Statics; \
public: \
	DECLARE_CLASS(ACPromethActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PromethPlugin"), NO_API) \
	DECLARE_SERIALIZER(ACPromethActor)


#define FID_G_Test51_Plugins_PromethPlugin_Source_PromethPlugin_Public_CPromethActor_h_26_INCLASS \
private: \
	static void StaticRegisterNativesACPromethActor(); \
	friend struct Z_Construct_UClass_ACPromethActor_Statics; \
public: \
	DECLARE_CLASS(ACPromethActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PromethPlugin"), NO_API) \
	DECLARE_SERIALIZER(ACPromethActor)


#define FID_G_Test51_Plugins_PromethPlugin_Source_PromethPlugin_Public_CPromethActor_h_26_STANDARD_CONSTRUCTORS \
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


#define FID_G_Test51_Plugins_PromethPlugin_Source_PromethPlugin_Public_CPromethActor_h_26_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACPromethActor(ACPromethActor&&); \
	NO_API ACPromethActor(const ACPromethActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACPromethActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACPromethActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACPromethActor)


#define FID_G_Test51_Plugins_PromethPlugin_Source_PromethPlugin_Public_CPromethActor_h_23_PROLOG
#define FID_G_Test51_Plugins_PromethPlugin_Source_PromethPlugin_Public_CPromethActor_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_G_Test51_Plugins_PromethPlugin_Source_PromethPlugin_Public_CPromethActor_h_26_SPARSE_DATA \
	FID_G_Test51_Plugins_PromethPlugin_Source_PromethPlugin_Public_CPromethActor_h_26_RPC_WRAPPERS \
	FID_G_Test51_Plugins_PromethPlugin_Source_PromethPlugin_Public_CPromethActor_h_26_ACCESSORS \
	FID_G_Test51_Plugins_PromethPlugin_Source_PromethPlugin_Public_CPromethActor_h_26_INCLASS \
	FID_G_Test51_Plugins_PromethPlugin_Source_PromethPlugin_Public_CPromethActor_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_G_Test51_Plugins_PromethPlugin_Source_PromethPlugin_Public_CPromethActor_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_G_Test51_Plugins_PromethPlugin_Source_PromethPlugin_Public_CPromethActor_h_26_SPARSE_DATA \
	FID_G_Test51_Plugins_PromethPlugin_Source_PromethPlugin_Public_CPromethActor_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_G_Test51_Plugins_PromethPlugin_Source_PromethPlugin_Public_CPromethActor_h_26_ACCESSORS \
	FID_G_Test51_Plugins_PromethPlugin_Source_PromethPlugin_Public_CPromethActor_h_26_INCLASS_NO_PURE_DECLS \
	FID_G_Test51_Plugins_PromethPlugin_Source_PromethPlugin_Public_CPromethActor_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROMETHPLUGIN_API UClass* StaticClass<class ACPromethActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_G_Test51_Plugins_PromethPlugin_Source_PromethPlugin_Public_CPromethActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
