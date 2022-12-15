// Copyright (c) 2022 Prometh Coporation.  All rights reserved.
#pragma once
#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "DynamicMeshBuilder.h"
#include "Components/MeshComponent.h"
#include "Runtime/Launch/Resources/Version.h"
#include "CatchLightMesh.generated.h"
class FMeshReaderPRM;
class FPrimitiveSceneProxy;
struct MeshParam{
public:
	float* vertices = nullptr;
	float* normals = nullptr;
	float* uvs = nullptr;
	int* triangles = nullptr;
	unsigned int verticeslen = 0;
	unsigned int normalslen = 0;
	unsigned int uvslen = 0;
	unsigned int triangleslen = 0;
	
};
//自定义渲染线程网格体组件，用于替换procduremesh,解决procduremesh只能用游戏线程创建造成的性能问题
UCLASS(hidecategories = (Object, LOD), editinlinenew, meta = (BlueprintSpawnableComponent), ClassGroup = Rendering)
class PROMETHPLUGIN_API UCatchlightMeshComponent :public UMeshComponent
{
	GENERATED_UCLASS_BODY()

	bool UpdateMesh(MeshParam* pReader, FRHICommandListImmediate& RHICmdList, UMaterialInterface* Material=nullptr);
	bool UpdateMesh(MeshParam* pReader,
		TArray<FVector>& veterics,
		TArray<FVector>& normals,
		TArray<FVector2D>& UVs,
		TArray<int32>& triangles,
		FVector Location,
		TArray<FVector>& NiagaraVertics,
		FRHICommandListImmediate& RHICmdList,
		UMaterialInterface* Material = nullptr);
	void UpdateMeshV2(TArray<FVector>& veterics, TArray<FVector>& normals, TArray<FVector2D>& UVs, TArray<int32>& triangles, UMaterialInterface* Material);
	virtual FPrimitiveSceneProxy* CreateSceneProxy() override;
	void Clear();
	FCriticalSection resourceCriticalSection;
	void UpdateLocalBounds();
	virtual int32 GetNumMaterials() const override;
	FBoxSphereBounds CalcBounds(const FTransform& LocalToWorld) const;
private:

	/** Local space bounds of mesh */
	UPROPERTY()
	FBoxSphereBounds LocalBounds;
	/** Mesh Data **/
	int _maxVertices = 300000;
	int _maxTriangles = 900000;
	bool IsEmpty = true;
	friend class FCatchlightSceneProxy;
};

