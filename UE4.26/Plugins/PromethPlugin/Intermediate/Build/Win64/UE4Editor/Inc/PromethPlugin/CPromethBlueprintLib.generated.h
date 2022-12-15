// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FColor;
#ifdef PROMETHPLUGIN_CPromethBlueprintLib_generated_h
#error "CPromethBlueprintLib.generated.h already included, missing '#pragma once' in CPromethBlueprintLib.h"
#endif
#define PROMETHPLUGIN_CPromethBlueprintLib_generated_h

#define plugin26_Plugins_PromethPlugin_Source_PromethPlugin_Public_CPromethBlueprintLib_h_24_SPARSE_DATA
#define plugin26_Plugins_PromethPlugin_Source_PromethPlugin_Public_CPromethBlueprintLib_h_24_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execStaticGetPlatform); \
	DECLARE_FUNCTION(execSaveTXT); \
	DECLARE_FUNCTION(execScanDirectory); \
	DECLARE_FUNCTION(execPromethDebug);


#define plugin26_Plugins_PromethPlugin_Source_PromethPlugin_Public_CPromethBlueprintLib_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execStaticGetPlatform); \
	DECLARE_FUNCTION(execSaveTXT); \
	DECLARE_FUNCTION(execScanDirectory); \
	DECLARE_FUNCTION(execPromethDebug);


#define plugin26_Plugins_PromethPlugin_Source_PromethPlugin_Public_CPromethBlueprintLib_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCPromethBlueprintLib(); \
	friend struct Z_Construct_UClass_UCPromethBlueprintLib_Statics; \
public: \
	DECLARE_CLASS(UCPromethBlueprintLib, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PromethPlugin"), NO_API) \
	DECLARE_SERIALIZER(UCPromethBlueprintLib)


#define plugin26_Plugins_PromethPlugin_Source_PromethPlugin_Public_CPromethBlueprintLib_h_24_INCLASS \
private: \
	static void StaticRegisterNativesUCPromethBlueprintLib(); \
	friend struct Z_Construct_UClass_UCPromethBlueprintLib_Statics; \
public: \
	DECLARE_CLASS(UCPromethBlueprintLib, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PromethPlugin"), NO_API) \
	DECLARE_SERIALIZER(UCPromethBlueprintLib)


#define plugin26_Plugins_PromethPlugin_Source_PromethPlugin_Public_CPromethBlueprintLib_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCPromethBlueprintLib(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCPromethBlueprintLib) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCPromethBlueprintLib); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCPromethBlueprintLib); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCPromethBlueprintLib(UCPromethBlueprintLib&&); \
	NO_API UCPromethBlueprintLib(const UCPromethBlueprintLib&); \
public:


#define plugin26_Plugins_PromethPlugin_Source_PromethPlugin_Public_CPromethBlueprintLib_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCPromethBlueprintLib(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCPromethBlueprintLib(UCPromethBlueprintLib&&); \
	NO_API UCPromethBlueprintLib(const UCPromethBlueprintLib&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCPromethBlueprintLib); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCPromethBlueprintLib); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCPromethBlueprintLib)


#define plugin26_Plugins_PromethPlugin_Source_PromethPlugin_Public_CPromethBlueprintLib_h_24_PRIVATE_PROPERTY_OFFSET
#define plugin26_Plugins_PromethPlugin_Source_PromethPlugin_Public_CPromethBlueprintLib_h_21_PROLOG
#define plugin26_Plugins_PromethPlugin_Source_PromethPlugin_Public_CPromethBlueprintLib_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	plugin26_Plugins_PromethPlugin_Source_PromethPlugin_Public_CPromethBlueprintLib_h_24_PRIVATE_PROPERTY_OFFSET \
	plugin26_Plugins_PromethPlugin_Source_PromethPlugin_Public_CPromethBlueprintLib_h_24_SPARSE_DATA \
	plugin26_Plugins_PromethPlugin_Source_PromethPlugin_Public_CPromethBlueprintLib_h_24_RPC_WRAPPERS \
	plugin26_Plugins_PromethPlugin_Source_PromethPlugin_Public_CPromethBlueprintLib_h_24_INCLASS \
	plugin26_Plugins_PromethPlugin_Source_PromethPlugin_Public_CPromethBlueprintLib_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define plugin26_Plugins_PromethPlugin_Source_PromethPlugin_Public_CPromethBlueprintLib_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	plugin26_Plugins_PromethPlugin_Source_PromethPlugin_Public_CPromethBlueprintLib_h_24_PRIVATE_PROPERTY_OFFSET \
	plugin26_Plugins_PromethPlugin_Source_PromethPlugin_Public_CPromethBlueprintLib_h_24_SPARSE_DATA \
	plugin26_Plugins_PromethPlugin_Source_PromethPlugin_Public_CPromethBlueprintLib_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	plugin26_Plugins_PromethPlugin_Source_PromethPlugin_Public_CPromethBlueprintLib_h_24_INCLASS_NO_PURE_DECLS \
	plugin26_Plugins_PromethPlugin_Source_PromethPlugin_Public_CPromethBlueprintLib_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROMETHPLUGIN_API UClass* StaticClass<class UCPromethBlueprintLib>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID plugin26_Plugins_PromethPlugin_Source_PromethPlugin_Public_CPromethBlueprintLib_h


#define FOREACH_ENUM_STATICPROMETHPLATFORM(op) \
	op(_None) \
	op(_Windows) \
	op(_IOS) \
	op(_Android) \
	op(_MAC) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
