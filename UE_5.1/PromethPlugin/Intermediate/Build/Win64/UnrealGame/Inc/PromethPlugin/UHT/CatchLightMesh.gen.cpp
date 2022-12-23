// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PromethPlugin/Public/CatchLightMesh.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCatchLightMesh() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBoxSphereBounds();
	ENGINE_API UClass* Z_Construct_UClass_UMeshComponent();
	PROMETHPLUGIN_API UClass* Z_Construct_UClass_UCatchlightMeshComponent();
	PROMETHPLUGIN_API UClass* Z_Construct_UClass_UCatchlightMeshComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PromethPlugin();
// End Cross Module References
	void UCatchlightMeshComponent::StaticRegisterNativesUCatchlightMeshComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCatchlightMeshComponent);
	UClass* Z_Construct_UClass_UCatchlightMeshComponent_NoRegister()
	{
		return UCatchlightMeshComponent::StaticClass();
	}
	struct Z_Construct_UClass_UCatchlightMeshComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocalBounds_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LocalBounds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCatchlightMeshComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMeshComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_PromethPlugin,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCatchlightMeshComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Rendering" },
		{ "Comment", "//\xe8\x87\xaa\xe5\xae\x9a\xe4\xb9\x89\xe6\xb8\xb2\xe6\x9f\x93\xe7\xba\xbf\xe7\xa8\x8b\xe7\xbd\x91\xe6\xa0\xbc\xe4\xbd\x93\xe7\xbb\x84\xe4\xbb\xb6\xef\xbc\x8c\xe7\x94\xa8\xe4\xba\x8e\xe6\x9b\xbf\xe6\x8d\xa2procduremesh,\xe8\xa7\xa3\xe5\x86\xb3procduremesh\xe5\x8f\xaa\xe8\x83\xbd\xe7\x94\xa8\xe6\xb8\xb8\xe6\x88\x8f\xe7\xba\xbf\xe7\xa8\x8b\xe5\x88\x9b\xe5\xbb\xba\xe9\x80\xa0\xe6\x88\x90\xe7\x9a\x84\xe6\x80\xa7\xe8\x83\xbd\xe9\x97\xae\xe9\xa2\x98\n" },
		{ "HideCategories", "Object LOD Mobility Trigger" },
		{ "IncludePath", "CatchLightMesh.h" },
		{ "ModuleRelativePath", "Public/CatchLightMesh.h" },
		{ "ToolTip", "\xe8\x87\xaa\xe5\xae\x9a\xe4\xb9\x89\xe6\xb8\xb2\xe6\x9f\x93\xe7\xba\xbf\xe7\xa8\x8b\xe7\xbd\x91\xe6\xa0\xbc\xe4\xbd\x93\xe7\xbb\x84\xe4\xbb\xb6\xef\xbc\x8c\xe7\x94\xa8\xe4\xba\x8e\xe6\x9b\xbf\xe6\x8d\xa2procduremesh,\xe8\xa7\xa3\xe5\x86\xb3procduremesh\xe5\x8f\xaa\xe8\x83\xbd\xe7\x94\xa8\xe6\xb8\xb8\xe6\x88\x8f\xe7\xba\xbf\xe7\xa8\x8b\xe5\x88\x9b\xe5\xbb\xba\xe9\x80\xa0\xe6\x88\x90\xe7\x9a\x84\xe6\x80\xa7\xe8\x83\xbd\xe9\x97\xae\xe9\xa2\x98" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCatchlightMeshComponent_Statics::NewProp_LocalBounds_MetaData[] = {
		{ "Comment", "/** Local space bounds of mesh */" },
		{ "ModuleRelativePath", "Public/CatchLightMesh.h" },
		{ "ToolTip", "Local space bounds of mesh" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCatchlightMeshComponent_Statics::NewProp_LocalBounds = { "LocalBounds", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCatchlightMeshComponent, LocalBounds), Z_Construct_UScriptStruct_FBoxSphereBounds, METADATA_PARAMS(Z_Construct_UClass_UCatchlightMeshComponent_Statics::NewProp_LocalBounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCatchlightMeshComponent_Statics::NewProp_LocalBounds_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCatchlightMeshComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCatchlightMeshComponent_Statics::NewProp_LocalBounds,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCatchlightMeshComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCatchlightMeshComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCatchlightMeshComponent_Statics::ClassParams = {
		&UCatchlightMeshComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCatchlightMeshComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCatchlightMeshComponent_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UCatchlightMeshComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCatchlightMeshComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCatchlightMeshComponent()
	{
		if (!Z_Registration_Info_UClass_UCatchlightMeshComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCatchlightMeshComponent.OuterSingleton, Z_Construct_UClass_UCatchlightMeshComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCatchlightMeshComponent.OuterSingleton;
	}
	template<> PROMETHPLUGIN_API UClass* StaticClass<UCatchlightMeshComponent>()
	{
		return UCatchlightMeshComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCatchlightMeshComponent);
	UCatchlightMeshComponent::~UCatchlightMeshComponent() {}
	struct Z_CompiledInDeferFile_FID_G_Test51_Plugins_PromethPlugin_Source_PromethPlugin_Public_CatchLightMesh_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_G_Test51_Plugins_PromethPlugin_Source_PromethPlugin_Public_CatchLightMesh_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCatchlightMeshComponent, UCatchlightMeshComponent::StaticClass, TEXT("UCatchlightMeshComponent"), &Z_Registration_Info_UClass_UCatchlightMeshComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCatchlightMeshComponent), 3877439713U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_G_Test51_Plugins_PromethPlugin_Source_PromethPlugin_Public_CatchLightMesh_h_1420911066(TEXT("/Script/PromethPlugin"),
		Z_CompiledInDeferFile_FID_G_Test51_Plugins_PromethPlugin_Source_PromethPlugin_Public_CatchLightMesh_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_G_Test51_Plugins_PromethPlugin_Source_PromethPlugin_Public_CatchLightMesh_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
