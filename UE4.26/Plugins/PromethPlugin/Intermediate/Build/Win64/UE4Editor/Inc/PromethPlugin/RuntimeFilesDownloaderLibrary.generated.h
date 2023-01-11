// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class URuntimeFilesDownloaderLibrary;
#ifdef PROMETHPLUGIN_RuntimeFilesDownloaderLibrary_generated_h
#error "RuntimeFilesDownloaderLibrary.generated.h already included, missing '#pragma once' in RuntimeFilesDownloaderLibrary.h"
#endif
#define PROMETHPLUGIN_RuntimeFilesDownloaderLibrary_generated_h

#define PrometheusProject_Plugins_PromethPlugin_Source_PromethPlugin_Public_RuntimeFilesDownloaderLibrary_h_30_DELEGATE \
struct _Script_PromethPlugin_eventOnFilesDownloaderResult_Parms \
{ \
	TEnumAsByte<DownloadResult> Result; \
}; \
static inline void FOnFilesDownloaderResult_DelegateWrapper(const FMulticastScriptDelegate& OnFilesDownloaderResult, DownloadResult Result) \
{ \
	_Script_PromethPlugin_eventOnFilesDownloaderResult_Parms Parms; \
	Parms.Result=Result; \
	OnFilesDownloaderResult.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define PrometheusProject_Plugins_PromethPlugin_Source_PromethPlugin_Public_RuntimeFilesDownloaderLibrary_h_25_DELEGATE \
struct _Script_PromethPlugin_eventOnFilesDownloaderProgress_Parms \
{ \
	int32 BytesSent; \
	int32 BytesReceived; \
	int32 ContentLength; \
}; \
static inline void FOnFilesDownloaderProgress_DelegateWrapper(const FMulticastScriptDelegate& OnFilesDownloaderProgress, const int32 BytesSent, const int32 BytesReceived, const int32 ContentLength) \
{ \
	_Script_PromethPlugin_eventOnFilesDownloaderProgress_Parms Parms; \
	Parms.BytesSent=BytesSent; \
	Parms.BytesReceived=BytesReceived; \
	Parms.ContentLength=ContentLength; \
	OnFilesDownloaderProgress.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define PrometheusProject_Plugins_PromethPlugin_Source_PromethPlugin_Public_RuntimeFilesDownloaderLibrary_h_38_SPARSE_DATA
#define PrometheusProject_Plugins_PromethPlugin_Source_PromethPlugin_Public_RuntimeFilesDownloaderLibrary_h_38_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDownloadFile); \
	DECLARE_FUNCTION(execCreateDownloader);


#define PrometheusProject_Plugins_PromethPlugin_Source_PromethPlugin_Public_RuntimeFilesDownloaderLibrary_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDownloadFile); \
	DECLARE_FUNCTION(execCreateDownloader);


#define PrometheusProject_Plugins_PromethPlugin_Source_PromethPlugin_Public_RuntimeFilesDownloaderLibrary_h_38_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURuntimeFilesDownloaderLibrary(); \
	friend struct Z_Construct_UClass_URuntimeFilesDownloaderLibrary_Statics; \
public: \
	DECLARE_CLASS(URuntimeFilesDownloaderLibrary, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PromethPlugin"), NO_API) \
	DECLARE_SERIALIZER(URuntimeFilesDownloaderLibrary)


#define PrometheusProject_Plugins_PromethPlugin_Source_PromethPlugin_Public_RuntimeFilesDownloaderLibrary_h_38_INCLASS \
private: \
	static void StaticRegisterNativesURuntimeFilesDownloaderLibrary(); \
	friend struct Z_Construct_UClass_URuntimeFilesDownloaderLibrary_Statics; \
public: \
	DECLARE_CLASS(URuntimeFilesDownloaderLibrary, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PromethPlugin"), NO_API) \
	DECLARE_SERIALIZER(URuntimeFilesDownloaderLibrary)


#define PrometheusProject_Plugins_PromethPlugin_Source_PromethPlugin_Public_RuntimeFilesDownloaderLibrary_h_38_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URuntimeFilesDownloaderLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URuntimeFilesDownloaderLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URuntimeFilesDownloaderLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URuntimeFilesDownloaderLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URuntimeFilesDownloaderLibrary(URuntimeFilesDownloaderLibrary&&); \
	NO_API URuntimeFilesDownloaderLibrary(const URuntimeFilesDownloaderLibrary&); \
public:


#define PrometheusProject_Plugins_PromethPlugin_Source_PromethPlugin_Public_RuntimeFilesDownloaderLibrary_h_38_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URuntimeFilesDownloaderLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URuntimeFilesDownloaderLibrary(URuntimeFilesDownloaderLibrary&&); \
	NO_API URuntimeFilesDownloaderLibrary(const URuntimeFilesDownloaderLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URuntimeFilesDownloaderLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URuntimeFilesDownloaderLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URuntimeFilesDownloaderLibrary)


#define PrometheusProject_Plugins_PromethPlugin_Source_PromethPlugin_Public_RuntimeFilesDownloaderLibrary_h_38_PRIVATE_PROPERTY_OFFSET
#define PrometheusProject_Plugins_PromethPlugin_Source_PromethPlugin_Public_RuntimeFilesDownloaderLibrary_h_35_PROLOG
#define PrometheusProject_Plugins_PromethPlugin_Source_PromethPlugin_Public_RuntimeFilesDownloaderLibrary_h_38_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PrometheusProject_Plugins_PromethPlugin_Source_PromethPlugin_Public_RuntimeFilesDownloaderLibrary_h_38_PRIVATE_PROPERTY_OFFSET \
	PrometheusProject_Plugins_PromethPlugin_Source_PromethPlugin_Public_RuntimeFilesDownloaderLibrary_h_38_SPARSE_DATA \
	PrometheusProject_Plugins_PromethPlugin_Source_PromethPlugin_Public_RuntimeFilesDownloaderLibrary_h_38_RPC_WRAPPERS \
	PrometheusProject_Plugins_PromethPlugin_Source_PromethPlugin_Public_RuntimeFilesDownloaderLibrary_h_38_INCLASS \
	PrometheusProject_Plugins_PromethPlugin_Source_PromethPlugin_Public_RuntimeFilesDownloaderLibrary_h_38_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PrometheusProject_Plugins_PromethPlugin_Source_PromethPlugin_Public_RuntimeFilesDownloaderLibrary_h_38_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PrometheusProject_Plugins_PromethPlugin_Source_PromethPlugin_Public_RuntimeFilesDownloaderLibrary_h_38_PRIVATE_PROPERTY_OFFSET \
	PrometheusProject_Plugins_PromethPlugin_Source_PromethPlugin_Public_RuntimeFilesDownloaderLibrary_h_38_SPARSE_DATA \
	PrometheusProject_Plugins_PromethPlugin_Source_PromethPlugin_Public_RuntimeFilesDownloaderLibrary_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
	PrometheusProject_Plugins_PromethPlugin_Source_PromethPlugin_Public_RuntimeFilesDownloaderLibrary_h_38_INCLASS_NO_PURE_DECLS \
	PrometheusProject_Plugins_PromethPlugin_Source_PromethPlugin_Public_RuntimeFilesDownloaderLibrary_h_38_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROMETHPLUGIN_API UClass* StaticClass<class URuntimeFilesDownloaderLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PrometheusProject_Plugins_PromethPlugin_Source_PromethPlugin_Public_RuntimeFilesDownloaderLibrary_h


#define FOREACH_ENUM_DOWNLOADRESULT(op) \
	op(SuccessDownloading) \
	op(DownloadFailed) \
	op(SaveFailed) \
	op(DirectoryCreationFailed) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
