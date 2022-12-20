// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PromethPlugin/Public/CatchLightMesh.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCatchLightMesh() {}
// Cross Module References
	PROMETHPLUGIN_API UClass* Z_Construct_UClass_UCatchlightMeshComponent_NoRegister();
	PROMETHPLUGIN_API UClass* Z_Construct_UClass_UCatchlightMeshComponent();
	ENGINE_API UClass* Z_Construct_UClass_UMeshComponent();
	UPackage* Z_Construct_UPackage__Script_PromethPlugin();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBoxSphereBounds();
// End Cross Module References
	void UCatchlightMeshComponent::StaticRegisterNativesUCatchlightMeshComponent()
	{
	}
	UClass* Z_Construct_UClass_UCatchlightMeshComponent_NoRegister()
	{
		return UCatchlightMeshComponent::StaticClass();
	}
	struct Z_Construct_UClass_UCatchlightMeshComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocalBounds_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LocalBounds;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCatchlightMeshComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMeshComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_PromethPlugin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCatchlightMeshComponent_Statics::Class_MetaDataParams[] = {
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCatchlightMeshComponent_Statics::NewProp_LocalBounds_MetaData[] = {
		{ "Comment", "/** Local space bounds of mesh */" },
		{ "ModuleRelativePath", "Public/CatchLightMesh.h" },
		{ "ToolTip", "Local space bounds of mesh" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCatchlightMeshComponent_Statics::NewProp_LocalBounds = { "LocalBounds", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCatchlightMeshComponent, LocalBounds), Z_Construct_UScriptStruct_FBoxSphereBounds, METADATA_PARAMS(Z_Construct_UClass_UCatchlightMeshComponent_Statics::NewProp_LocalBounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCatchlightMeshComponent_Statics::NewProp_LocalBounds_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCatchlightMeshComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCatchlightMeshComponent_Statics::NewProp_LocalBounds,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCatchlightMeshComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCatchlightMeshComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCatchlightMeshComponent_Statics::ClassParams = {
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
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCatchlightMeshComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCatchlightMeshComponent, 2686611867);
	template<> PROMETHPLUGIN_API UClass* StaticClass<UCatchlightMeshComponent>()
	{
		return UCatchlightMeshComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCatchlightMeshComponent(Z_Construct_UClass_UCatchlightMeshComponent, &UCatchlightMeshComponent::StaticClass, TEXT("/Script/PromethPlugin"), TEXT("UCatchlightMeshComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCatchlightMeshComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
