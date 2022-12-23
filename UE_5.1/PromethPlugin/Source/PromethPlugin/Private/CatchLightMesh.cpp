// Copyright (c) 2022 Prometh Coporation.  All rights reserved.
#include "CatchLightMesh.h"
//#include "MeshReaderPRM.h"
#include "PrimitiveSceneProxy.h"
#include "StaticMeshResources.h"
#include "Engine.h"
extern  double getCurrentClockSecInReader();

static inline void InitOrUpdateResource(FRenderResource* Resource)
{
	if (!Resource->IsInitialized())
	{
		Resource->InitResource();
	}
	else
	{
		Resource->UpdateRHI();
	}
}

class FCatchlightSceneProxy :public FPrimitiveSceneProxy
{
public:
	FCatchlightSceneProxy(UCatchlightMeshComponent* Component) :
		FPrimitiveSceneProxy(Component)
		, VertexFactory(GetScene().GetFeatureLevel(), "FCatchlightSceneProxy")
		, MaterialRelevance(Component->GetMaterialRelevance(GetScene().GetFeatureLevel()))
		, isMeshEmpty(Component->IsEmpty)
	{
		InitBuffers(Component);
		//Material = Component->GetMaterial(0);
		if (Material == NULL) {
			Material = UMaterial::GetDefaultMaterial(MD_Surface);
		}
	}
	virtual ~FCatchlightSceneProxy()
	{
		VertexBuffers.PositionVertexBuffer.ReleaseResource();
		VertexBuffers.StaticMeshVertexBuffer.ReleaseResource();
		//VertexBuffers.ColorVertexBuffer.ReleaseResource();
		IndexBuffer.ReleaseResource();
		VertexFactory.ReleaseResource();
	}

	void InitBuffers(UCatchlightMeshComponent* Component)
	{
		MaxVertices = Component->_maxVertices;
		MaxTriangles = Component->_maxTriangles;

		IndexBuffer.Indices.AddUninitialized(MaxTriangles * 3);

		VertexBuffers.StaticMeshVertexBuffer.SetUseHighPrecisionTangentBasis(true);
		VertexBuffers.StaticMeshVertexBuffer.SetUseFullPrecisionUVs(true);

		//---- Simplified InitWithDummyData function code, which doesn't crash in UE4.19
		VertexBuffers.PositionVertexBuffer.Init(MaxVertices);
		VertexBuffers.StaticMeshVertexBuffer.Init(MaxVertices, 1);

		FStaticMeshVertexBuffers* Self = &VertexBuffers;
		FLocalVertexFactory* VFactory = &VertexFactory;

		ENQUEUE_RENDER_COMMAND(StaticMeshVertexBuffersLegacyInit)(
			[VFactory, Self](FRHICommandListImmediate& RHICmdList)
			{
				InitOrUpdateResource(&Self->PositionVertexBuffer);
				InitOrUpdateResource(&Self->StaticMeshVertexBuffer);

				FLocalVertexFactory::FDataType Data;
				Self->PositionVertexBuffer.BindPositionVertexBuffer(VFactory, Data);
				Self->StaticMeshVertexBuffer.BindTangentVertexBuffer(VFactory, Data);
				Self->StaticMeshVertexBuffer.BindPackedTexCoordVertexBuffer(VFactory, Data);
				VFactory->SetData(Data);

			});

		BeginInitResource(&VertexBuffers.PositionVertexBuffer);
		BeginInitResource(&VertexBuffers.StaticMeshVertexBuffer);
		//BeginInitResource(&VertexBuffers.ColorVertexBuffer);
		BeginInitResource(&IndexBuffer);
		BeginInitResource(&VertexFactory);
	}

	SIZE_T GetTypeHash() const override
	{
		static size_t UniquePointer;
		return reinterpret_cast<size_t>(&UniquePointer);
	}
	void UpdateSection(TArray<FVector>& veterics, TArray<FVector>& normals, TArray<FVector2D>& UVs, TArray<int32>& triangles, UMaterialInterface* material = nullptr)
	{
		FScopeLock LockVideoTracksLoading(&ProxyCriticalSection);
		check(IsInRenderingThread());
		if (!VertexBuffers.PositionVertexBuffer.VertexBufferRHI)
			return;
		if (material && Material != material)
			Material = material;


		FVector* PositionBufferData = (FVector*)RHILockBuffer(VertexBuffers.PositionVertexBuffer.VertexBufferRHI, 0, veterics.Num() * sizeof(FVector), RLM_WriteOnly);
		if (!PositionBufferData)
			return;
		FMemory::Memcpy(PositionBufferData, veterics.GetData(), veterics.Num() * sizeof(FVector));
		RHIUnlockBuffer(VertexBuffers.PositionVertexBuffer.VertexBufferRHI);

		//FVector* TangentBufferData = (FVector*)RHILockBuffer(VertexBuffers.StaticMeshVertexBuffer.TangentsVertexBuffer.VertexBufferRHI, 0, normals.Num() * sizeof(FVector), RLM_WriteOnly);
		typedef TStaticMeshVertexTangentDatum<typename TStaticMeshVertexTangentTypeSelector<EStaticMeshVertexTangentBasisType::HighPrecision>::TangentTypeT> TangentType;
		int16* TangentBufferData = (int16*)RHILockBuffer(VertexBuffers.StaticMeshVertexBuffer.TangentsVertexBuffer.VertexBufferRHI, 0, veterics.Num() * sizeof(TangentType), RLM_WriteOnly);
		if (!TangentBufferData)
			return;
		int j = 0;
		for (int i = 0; i < veterics.Num() * 8; i += 8)
		{
			TangentBufferData[i + 4] = FMath::Clamp((int16)FMath::TruncToInt(normals[j].X * 32767.5f), (int16)-32767, (int16)32767);
			TangentBufferData[i + 5] = FMath::Clamp((int16)FMath::TruncToInt(normals[j].Y * 32767.5f), (int16)-32767, (int16)32767);
			TangentBufferData[i + 6] = FMath::Clamp((int16)FMath::TruncToInt(normals[j].Z * 32767.5f), (int16)-32767, (int16)32767);
			j++;
		}

		//FMemory::Memcpy(TangentBufferData, normals.GetData(), normals.Num() * sizeof(FVector));
		RHIUnlockBuffer(VertexBuffers.StaticMeshVertexBuffer.TangentsVertexBuffer.VertexBufferRHI);


		FVector2D* CoordinateBufferData = (FVector2D*)RHILockBuffer(VertexBuffers.StaticMeshVertexBuffer.TexCoordVertexBuffer.VertexBufferRHI, 0, UVs.Num() * sizeof(FVector2D), RLM_WriteOnly);
		if (!CoordinateBufferData)
			return;
		FMemory::Memcpy(CoordinateBufferData, UVs.GetData(), UVs.Num() * sizeof(FVector2D));
		RHIUnlockBuffer(VertexBuffers.StaticMeshVertexBuffer.TexCoordVertexBuffer.VertexBufferRHI);

		int32* IndexBufferData = (int32*)RHILockBuffer(IndexBuffer.IndexBufferRHI, 0, MaxTriangles * 3 * sizeof(int32), RLM_WriteOnly);
		if (!IndexBufferData)
			return;
		FMemory::Memset(IndexBufferData, 0, MaxTriangles * 3 * sizeof(int32));
		FMemory::Memcpy(IndexBufferData, triangles.GetData(), triangles.Num() * sizeof(int32));

		//FMemory::Memset(IndexBufferData + triangles.Num(), 0, (MaxTriangles - triangles.Num()) * 3);

		RHIUnlockBuffer(IndexBuffer.IndexBufferRHI);
		isMeshEmpty = false;
	}
	bool UpdateSection(MeshParam* pReader,
		TArray<FVector>& Vertices,
		TArray<FVector>& Normals,
		TArray<FVector2D>& UVs,
		TArray<int32>& Triangles,

		FVector Location,
		TArray<FVector>& NiagaraVertics,
		FRHICommandListImmediate& RHICmdList,
		UMaterialInterface* material = nullptr)
	{
		Vertices.Empty();
		Normals.Empty();
		UVs.Empty();
		Triangles.Empty();

		bool bRet = UpdateSection(pReader, RHICmdList, material);
		float* vertices = nullptr;
		float* normals = nullptr;
		float* uvs = nullptr;
		unsigned int verticeslen = 0;//不准确
		unsigned int normalslen = 0;//不准确
		unsigned int uvslen = 0;//不准确
		unsigned int triangleslen = 0;//不准确
		int* triangles = nullptr;
		vertices = pReader->vertices;
		normals = pReader->normals;
		uvs = pReader->uvs;
		triangles = pReader->triangles;
		verticeslen = pReader->verticeslen;
		normalslen = pReader->normalslen;
		uvslen = pReader->uvslen;
		triangleslen = pReader->triangleslen;

		auto CheckAryNum = [](float* Array, int size, int filter, float scale)->void {
			for (int i = 0; i < size; ++i) {
				if (FMath::IsNaN(Array[i]) || abs(Array[i]) > filter) {
					Array[i] = 0.f;
				}
				else {
					Array[i] = Array[i] * scale;
				}
			}
		};

		CheckAryNum(vertices, verticeslen, 1000, 100);
		CheckAryNum(normals, normalslen, 1000, 1);
		CheckAryNum(uvs, uvslen, 100, 1);

		if (vertices)
		{
			//FVector Location = this->GetActorLocation();
			for (unsigned int i = 0; i < verticeslen; i += 3) {
				FVector addpt = FVector((vertices[i]), vertices[i + 1], vertices[i + 2]);
				Vertices.Add(addpt);


			}

			for (unsigned int i = 0; i < normalslen; i += 3) {
				Normals.Add(FVector(normals[i], normals[i + 1], normals[i + 2]));
				//FVector3f nor(normals[i], normals[i + 1], normals[i + 2]);
				//ShapeBuffer.SetNormal(ShapeIdx++, nor, 0);
				//Normals[i / 3] = FVector(Data.normals[i], Data.normals[i + 1], Data.normals[i + 2]);
			}

			for (unsigned int i = 0; i < uvslen; i += 2) {
				UVs.Add(FVector2D(uvs[i], uvs[i + 1]));
				//FVector2f UV(uvs[i], uvs[i + 1]);
				//ShapeBuffer.SetUV(ShapeIdx++, UV, 0);
				//UVs[i / 2] = FVector2D(Data.uv[i], Data.uv[i + 1]);
			}

			for (int i = (int)(triangleslen - 1); i >= 0; --i) {
				Triangles.Add(triangles[i]);

				//Triangles[i] = Data.triangles[i];
			}

			//FMeshDescription* Disc;
		}
		return bRet;
	}
	bool UpdateSection(MeshParam* pReader, FRHICommandListImmediate& RHICmdList, UMaterialInterface* material = nullptr)
	{
		FScopeLock LockVideoTracksLoading(&ProxyCriticalSection);
		check(IsInRenderingThread());
		if (!VertexBuffers.PositionVertexBuffer.VertexBufferRHI)
			return false;
		if (material && Material != material)
			Material = material;

		float* vertices = nullptr;
		float* normals = nullptr;
		float* uvs = nullptr;
		unsigned int verticeslen = 0;//不准确
		unsigned int normalslen = 0;//不准确
		unsigned int uvslen = 0;//不准确
		unsigned int triangleslen = 0;//不准确
		int* triangles = nullptr;
		vertices = pReader->vertices;
		normals = pReader->normals;
		uvs = pReader->uvs;
		triangles = pReader->triangles;
		verticeslen = pReader->verticeslen;
		normalslen = pReader->normalslen;
		uvslen = pReader->uvslen;
		triangleslen = pReader->triangleslen;

		const uint32 NumVerts = verticeslen / 3;
		const uint32 NumTris = triangleslen;

		const uint32 VertexSize = NumVerts * sizeof(FVector);
		if (NumVerts == 0)
			return false;
		if (vertices)
		{
			//拷贝 顶点缓存
			//float* PositionBufferData = (float*)RHICmdList.LockBuffer(VertexBuffers.PositionVertexBuffer.VertexBufferRHI, 0, NumVerts * sizeof(FVector), RLM_WriteOnly);
			float* PositionBufferData = (float*)RHICmdList.LockBuffer(VertexBuffers.PositionVertexBuffer.VertexBufferRHI, 0, verticeslen * sizeof(float), RLM_WriteOnly);

			if (!PositionBufferData)
				return false;
			float* pos = PositionBufferData;
			/*UE_LOG(LogTemp, Warning, TEXT("============POS:  %p"), pos);
			UE_LOG(LogTemp, Warning, TEXT("===========vertices:  %p"), vertices);
			UE_LOG(LogTemp, Warning, TEXT("===========sizeof(FVector):  %d"), sizeof(FVector));
			UE_LOG(LogTemp, Warning, TEXT("===========sizeof(FVector):  %d"), sizeof(float));*/

			FMemory::Memcpy(pos, vertices, verticeslen * sizeof(float));
			//RHICmdList.UnlockBuffer(VertexBuffers.PositionVertexBuffer.VertexBufferRHI); 
			RHICmdList.UnlockBuffer(VertexBuffers.PositionVertexBuffer.VertexBufferRHI);

		}


		//拷贝 法线缓存  这里存在疑问
		if (normals)
		{
			typedef TStaticMeshVertexTangentDatum<typename TStaticMeshVertexTangentTypeSelector<EStaticMeshVertexTangentBasisType::HighPrecision>::TangentTypeT> TangentType;
			int16* TangentBufferData = (int16*)RHICmdList.LockBuffer(VertexBuffers.StaticMeshVertexBuffer.TangentsVertexBuffer.VertexBufferRHI, 0, NumVerts * sizeof(TangentType), RLM_WriteOnly);
			if (!TangentBufferData)
				return false;
			float* normBufPtr = normals;


			for (unsigned int i = 0; i < NumVerts * 8; i += 8) {
				//TangentBufferData [0] ?[3] = TangentX => on s'en fout
				//TangentBufferData [4] ?[7] = TangentZ => normale
				TangentBufferData[i + 4] = FMath::Clamp((int16)FMath::TruncToInt(normBufPtr[0] * 32767.5f), (int16)-32767, (int16)32767);
				TangentBufferData[i + 5] = FMath::Clamp((int16)FMath::TruncToInt(normBufPtr[1] * 32767.5f), (int16)-32767, (int16)32767);
				TangentBufferData[i + 6] = FMath::Clamp((int16)FMath::TruncToInt(normBufPtr[2] * 32767.5f), (int16)-32767, (int16)32767);
				//TangentBufferData[i + 7] = 0;

				normBufPtr += 3;
			}
			RHICmdList.UnlockBuffer(VertexBuffers.StaticMeshVertexBuffer.TangentsVertexBuffer.VertexBufferRHI);
		}



		// Coordinates
		if (uvslen == 0)
			return false;
		//FVector2D* CoordinateBufferData = (FVector2D*)RHICmdList.LockBuffer(VertexBuffers.StaticMeshVertexBuffer.TexCoordVertexBuffer.VertexBufferRHI, 0, (uvslen >> 1) * sizeof(FVector2D), RLM_WriteOnly);
		//if (!CoordinateBufferData)
		//	return false;
		//FMemory::Memcpy(CoordinateBufferData, uvs, (uvslen >> 1) * sizeof(FVector2D));
		//RHICmdList.UnlockBuffer(VertexBuffers.StaticMeshVertexBuffer.TexCoordVertexBuffer.VertexBufferRHI);
		if (uvs)
		{
			FVector2D* CoordinateBufferData = (FVector2D*)RHICmdList.LockBuffer(VertexBuffers.StaticMeshVertexBuffer.TexCoordVertexBuffer.VertexBufferRHI, 0, uvslen * sizeof(float), RLM_WriteOnly);
			if (!CoordinateBufferData)
				return false;
			FMemory::Memcpy(CoordinateBufferData, uvs, uvslen * sizeof(float));
			RHICmdList.UnlockBuffer(VertexBuffers.StaticMeshVertexBuffer.TexCoordVertexBuffer.VertexBufferRHI);

			// Indices
			int32* IndexBufferData = (int32*)RHICmdList.LockBuffer(IndexBuffer.IndexBufferRHI, 0, MaxTriangles * 3 * sizeof(int32), RLM_WriteOnly);
			//FMemory::Memset(IndexBufferData, 0, MaxTriangles * 3 * sizeof(int32));
			if (!IndexBufferData)
				return false;
			if (triangleslen == 0)
			{

				RHICmdList.UnlockBuffer(IndexBuffer.IndexBufferRHI);
				return false;
			}
			for (int i = triangleslen - 1; i >= 0; i--)
			{
				IndexBufferData[i] = triangles[i];
			}
			for (int i = triangleslen; i < (int)(MaxTriangles * 3); ++i)
			{
				IndexBufferData[i] = 0;
			}
			//FMemory::Memset(IndexBufferData + triangleslen, 0, (MaxTriangles * 3 * sizeof(int32)) - triangleslen);
			RHICmdList.UnlockBuffer(IndexBuffer.IndexBufferRHI);
		}

		isMeshEmpty = false;
		//后面是渲染贴图的，在创建模型之前已经把材质搞定了
		return true;
	}

	virtual void GetDynamicMeshElements(const TArray<const FSceneView*>& Views, const FSceneViewFamily& ViewFamily, uint32 VisibilityMap, FMeshElementCollector& Collector) const override
	{
		//double time = getCurrentClockSecInReader();
		// Set up wireframe material (if needed)
		if (isMeshEmpty)
			return;
		const bool bWireframe = AllowDebugViewmodes() && ViewFamily.EngineShowFlags.Wireframe;

		FColoredMaterialRenderProxy* WireframeMaterialInstance = NULL;
		if (bWireframe)
		{
			WireframeMaterialInstance = new FColoredMaterialRenderProxy(
				GEngine->WireframeMaterial ? GEngine->WireframeMaterial->GetRenderProxy() : NULL,
				FLinearColor(0, 0.5f, 1.f)
			);

			Collector.RegisterOneFrameMaterialProxy(WireframeMaterialInstance);
		}
		if (!Material)
			return;
		FMaterialRenderProxy* MaterialProxy = bWireframe ? WireframeMaterialInstance : Material->GetRenderProxy();
		// For each view..
		for (int32 ViewIndex = 0; ViewIndex < Views.Num(); ViewIndex++)
		{
			if (VisibilityMap & (1 << ViewIndex))
			{
				const FSceneView* View = Views[ViewIndex];
				// Draw the mesh.
				FMeshBatch& Mesh = Collector.AllocateMesh();
				FMeshBatchElement& BatchElement = Mesh.Elements[0];
				BatchElement.IndexBuffer = &IndexBuffer;
				Mesh.bWireframe = false;
				Mesh.VertexFactory = &VertexFactory;
				Mesh.MaterialRenderProxy = MaterialProxy;

				//BatchElement.PrimitiveUniformBuffer = CreatePrimitiveUniformBufferImmediate(GetLocalToWorld(), GetBounds(), GetLocalBounds(), true, UseEditorDepthTest());
				FDynamicPrimitiveUniformBuffer& DynamicPrimitiveUniformBuffer = Collector.AllocateOneFrameResource<FDynamicPrimitiveUniformBuffer>();
				DynamicPrimitiveUniformBuffer.Set(GetLocalToWorld(), GetLocalToWorld(), GetBounds(), GetLocalBounds(), true, false, false, false);
				BatchElement.PrimitiveUniformBufferResource = &DynamicPrimitiveUniformBuffer.UniformBuffer;

				BatchElement.FirstIndex = 0;
				BatchElement.NumPrimitives = IndexBuffer.Indices.Num() / 3;
				BatchElement.MinVertexIndex = 0;
				BatchElement.MaxVertexIndex = VertexBuffers.PositionVertexBuffer.GetNumVertices() - 1;
				Mesh.ReverseCulling = 0;// IsLocalToWorldDeterminantNegative();
				Mesh.Type = PT_TriangleList;
				Mesh.DepthPriorityGroup = SDPG_World;
				Mesh.bCanApplyViewModeOverrides = false;
				Collector.AddMesh(ViewIndex, Mesh);

			}
		}

		// Draw bounds
#if !(UE_BUILD_SHIPPING || UE_BUILD_TEST)
		for (int32 ViewIndex = 0; ViewIndex < Views.Num(); ViewIndex++)
		{
			if (VisibilityMap & (1 << ViewIndex))
			{
				// Render bounds
				RenderBounds(Collector.GetPDI(ViewIndex), ViewFamily.EngineShowFlags, GetBounds(), IsSelected());
			}
		}
#endif
		//time = getCurrentClockSecInReader() - time;
		//UE_LOG_FOR_ATTRIBUTE(LogPrometh, Warning, TEXT("[GetDynamicMeshElements]  UpdateElement  "));
		//isMeshEmpty = true;
	}
	virtual bool CanBeOccluded() const override
	{
		return !MaterialRelevance.bDisableDepthTest;
	}
	virtual uint32 GetMemoryFootprint(void) const
	{
		return(sizeof(*this) + GetAllocatedSize());
	}

	uint32 GetAllocatedSize(void) const
	{
		return(FPrimitiveSceneProxy::GetAllocatedSize());
	}
	virtual FPrimitiveViewRelevance GetViewRelevance(const FSceneView* View) const
	{
		FPrimitiveViewRelevance Result;
		Result.bDrawRelevance = IsShown(View);
		Result.bShadowRelevance = IsShadowCast(View);
		Result.bDynamicRelevance = true;
		Result.bRenderInMainPass = ShouldRenderInMainPass();
		Result.bUsesLightingChannels = GetLightingChannelMask() != GetDefaultLightingChannelMask();
		Result.bRenderCustomDepth = ShouldRenderCustomDepth();
		MaterialRelevance.SetPrimitiveViewRelevance(Result);
		return Result;
	}
	bool isMeshEmpty;
private:
	FStaticMeshVertexBuffers VertexBuffers;
	FDynamicMeshIndexBuffer32 IndexBuffer;
	FLocalVertexFactory VertexFactory;

	FMaterialRelevance MaterialRelevance;
	int textureBufferSize;
	UMaterialInterface* Material = nullptr;//材质要用actor的
	unsigned int MaxVertices;
	unsigned int MaxTriangles;
	FCriticalSection ProxyCriticalSection;

};

UCatchlightMeshComponent::UCatchlightMeshComponent(const FObjectInitializer& ObjectInitializer)
	:Super(ObjectInitializer)
{

}
bool UCatchlightMeshComponent::UpdateMesh(MeshParam* pReader, FRHICommandListImmediate& RHICmdList, UMaterialInterface* Material)
{
	if (SceneProxy)
	{

		//FScopeLock LockVideoTracksLoading(&resourceCriticalSection);
		FCatchlightSceneProxy* InScenePrpxy = (FCatchlightSceneProxy*)SceneProxy;
		//ENQUEUE_RENDER_COMMAND(UCatchlightUpdate)([InScenePrpxy, pReader](FRHICommandListImmediate& RHICmdList) {
		//	InScenePrpxy->UpdateSection_RenderThread(pReader);
		//	}
		//);
		//InScenePrpxy->isMeshEmpty = true;
		return InScenePrpxy->UpdateSection(pReader, RHICmdList, Material);

	}
	return false;
}

bool UCatchlightMeshComponent::UpdateMesh(MeshParam* pReader,
	TArray<FVector>& veterics,
	TArray<FVector>& normals,
	TArray<FVector2D>& UVs,
	TArray<int32>& triangles,
	FVector Location,
	TArray<FVector>& NiagaraVertics,
	FRHICommandListImmediate& RHICmdList,
	UMaterialInterface* Material)
{
	FCatchlightSceneProxy* InScenePrpxy = (FCatchlightSceneProxy*)SceneProxy;
	//ENQUEUE_RENDER_COMMAND(UCatchlightUpdate)([InScenePrpxy, pReader](FRHICommandListImmediate& RHICmdList) {
	//	InScenePrpxy->UpdateSection_RenderThread(pReader);
	//	}
	//);
	if (!InScenePrpxy) return false;
	//InScenePrpxy->isMeshEmpty = true;
	return InScenePrpxy->UpdateSection(pReader, veterics, normals, UVs, triangles, Location, NiagaraVertics, RHICmdList, Material);
}

void UCatchlightMeshComponent::UpdateMeshV2(TArray<FVector>& veterics, TArray<FVector>& normals, TArray<FVector2D>& UVs, TArray<int32>& triangles, UMaterialInterface* Material)
{
	FScopeLock LockVideoTracksLoading(&resourceCriticalSection);
	FCatchlightSceneProxy* InScenePrpxy = (FCatchlightSceneProxy*)SceneProxy;
	InScenePrpxy->UpdateSection(veterics, normals, UVs, triangles, Material);
}

FPrimitiveSceneProxy* UCatchlightMeshComponent::CreateSceneProxy()
{
	FPrimitiveSceneProxy* result;
	if (_maxVertices == 0)
		result = nullptr;
	else
		result = (FPrimitiveSceneProxy*)new FCatchlightSceneProxy(this);

	SceneProxy = result;
	return result;
}

void UCatchlightMeshComponent::Clear()
{
	FCatchlightSceneProxy* InScenePrpxy = (FCatchlightSceneProxy*)SceneProxy;
	if (InScenePrpxy)
		InScenePrpxy->isMeshEmpty = true;
}

void UCatchlightMeshComponent::UpdateLocalBounds()
{
	//todo: utiliser les vraies limites dans le fichier
	LocalBounds = FBoxSphereBounds(FVector(0, 0, 0), FVector(2, 2, 2), 2);
	UpdateBounds();
}

int32 UCatchlightMeshComponent::GetNumMaterials() const
{
	return 1;
}

FBoxSphereBounds UCatchlightMeshComponent::CalcBounds(const FTransform& LocalToWorld) const
{
	return LocalBounds.TransformBy(LocalToWorld);
}
