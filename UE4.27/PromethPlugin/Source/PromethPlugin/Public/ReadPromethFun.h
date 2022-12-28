// Fill out your copyright notice in the Description page of Project Settings.

//#pragma once
//
//#include "CoreMinimal.h"
//#if PLATFORM_IOS
//#include "IOS/IUnityInterface.h"
//#endif
//#if PLATFORM_ANDROID
//#include "Android/mesh_deocder_plugin.h"
//#include "Android/android_texture_decoder_plugin.h"
//#endif
//#include "PromethPlugin.h"
//
//#if PLATFORM_WINDOWS
//typedef struct _TextureDescriptor {
//	void* nativeTex;
//	bool isValidData;
//	unsigned int index;
//} TextureDescriptor;
//
//struct VideoStreamInfo {
//	int  width;
//	int height;
//	double fps;
//	int64 duration;
//	int64 frameCount;
//};
//
//typedef std::vector<float> CFV;
//typedef std::vector<int> CIV;
//typedef struct _Vertex {
//	float x;
//	float y;
//	float z;
//} Vertex;
//
//typedef struct _Normals {
//	float x;
//	float y;
//	float z;
//} Normals;
//
//typedef struct _UV {
//	float x;
//	float y;
//} UV;
//
//typedef struct _Mesh {
//	size_t vertexCount;				// 定点个数
//	size_t triangleCount;			// 三角个数
//	CFV* pVertexList;				// 顶点列表
//	CFV* pNormalsList;			// normal 列表
//	CFV* pUVList;						// UV 列表
//	CIV* pTriangleList;			// 三角列表
//} Mesh;
//
//typedef struct _MeshItemSizeInfo {
//	unsigned int vertexBytesCount;
//	unsigned int normalsBytesCount;
//	unsigned int uvBytesCount;
//	unsigned int trianglesBytesCount;
//	unsigned int vertexCount;
//	unsigned int trianglesCount;
//} MeshItemSizeInfo;
//
//typedef struct _MeshItemPointers {
//	void* pVertex;
//	void* pNormals;
//	void* pUVs;
//	void* pTriangles;
//}MeshItemPointers;
//
//
//typedef struct _MeshStreamInfo {
//	double fps;
//	int64_t duration;				// 总时长
//	uint64_t frameCount;		//总帧数
//} MeshStreamInfo;
//
//
//typedef void (*OpenVideoCompletionHandler)(bool success, const char* guid);
//typedef void (*OpenMeshStreamCompletionHandler)(bool success, const char* decoderID);
//#endif
//class PROMETHPLUGIN_API ReadPromethFun
//{
//public:
//	ReadPromethFun();
//	~ReadPromethFun();
//public:
//// Media Fun
////#if PLATFORM_WINDOWS || PLATFORM_IOS
//
//	typedef void(*OpenVideo)(const char* videoFullPath, const char* sessionID, OpenVideoCompletionHandler completion);
//	OpenVideo	OpenVideoAPI;
////#elif PLATFORM_ANDROID
////	typedef void(*OpenVideo)(const char* fileName, const char* sessionID, OpenVideoCompletionHandler completion);
////	OpenVideo	OpenVideoAPI;
////#endif
//	// 开始播放
//	typedef void (*StartPlay)(const char* decoderID);
//	StartPlay		StartPlayAPI;
//	// 停止播放函数
//	typedef void (*StopPlay)(const char* decoderID);
//	StopPlay StopPlayAPI;
//	// Pause
//	typedef void (*SuspendPlay)(const char* decoderID);
//	SuspendPlay SuspendPlayAPI;
//	// 继续播放
//	typedef void (*ResumePlay)(const char* decoderID);
//	ResumePlay ResumePlayAPI;
//	// 跳帧
//	typedef void (*SeekAtFrameIndex)(const char* decoderID, const int frameIndex);
//	SeekAtFrameIndex SeekAtFrameIndexAPI;
//	// 获取纹理信息
//#if PLATFORM_WINDOWS || PLATFORM_IOS
//	typedef TextureDescriptor(*TextureDataAtIndex)(const char* decoderID, unsigned int index);
//	TextureDataAtIndex TextureDataAtIndexAPI;
//#elif PLATFORM_ANDROID
//	typedef TextureItem(*TextureDataAtIndex)(const char* decoderID, unsigned int index);
//	TextureDataAtIndex TextureDataAtIndexAPI;
//#endif
//	// 获取视频参数
//	typedef VideoStreamInfo(*GetVideoStreamInfo)(const char* decoderID);
//	GetVideoStreamInfo GetVideoStreamInfoAPI;
//	// 自动重播
//	typedef void(*AutoReplay)(const char* decoderID);
//	AutoReplay AutoReplayAPI;
//
//	// Keys
//	typedef void (*ExecuteLicenseKeyAuthorization)(const char* licenseKey, const char* keyType);
//	ExecuteLicenseKeyAuthorization ExecuteLicenseKeyAuthorizationAPI;
//
//// MeshFun
//	typedef void (*_openMeshFile)(const char* fileName, const char* sessionID, OpenMeshStreamCompletionHandler completionHandler);
//	_openMeshFile OpenMeshFileAPI;
//	typedef void (*_startRead)(const char* decoderID);
//	_startRead StartReadAPI;
//	typedef void (*_stress)(const char* decoderID);
//	_stress StressAPI;
//	typedef void (*_stopRead)(const char* decoderID);
//	_stopRead StopReadAPI;
//	typedef void (*_seekAtIndex)(const char* decoderID, unsigned int index);
//	_seekAtIndex SeekAtIndexAPI;
//	typedef void (*_suspendRead)(const char* decoderID);
//	_suspendRead SuspendReadAPI;
//	typedef void (*_resumeRead)(const char* decoderID);
//	_resumeRead ResumeReadAPI;
//	typedef Mesh* (*_meshObjectAtIndex)(const char* decoderID, unsigned int index);
//	_meshObjectAtIndex MeshObjectAtIndexAPI;
//	typedef MeshStreamInfo (*_getMeshStreamInfo)(const char* decoderID);
//	_getMeshStreamInfo GetMeshStreamInfoAPI;
//	typedef MeshItemSizeInfo (*_getMeshSizeItemInfo)(const char* decoderID, unsigned int index);
//	_getMeshSizeItemInfo GetMeshSizeItemInfoAPI;
//	typedef void (*_updateMeshData)(const char* decoderID, unsigned int index, MeshItemPointers pointers);
//	_updateMeshData UpdateMeshDataAPI;
//
//
//	typedef const char* (*_GetPublicLog)();
//	_GetPublicLog GetPublicLogAPI;
//	typedef const char* (*_GetMeshPublicLog)();
//	_GetMeshPublicLog GetMeshPublicLogAPI;
//
//#if PLATFORM_IOS
//#define UNITY_EXPORT(rtype) extern "C" UNITY_INTERFACE_EXPORT rtype UNITY_INTERFACE_API
//	UNITY_EXPORT(void) openVideo(const char* videoFullPath, OpenVideoCompletionHandler completion);
//	UNITY_EXPORT(VideoStreamInfo)  getVideoStreamInfo(const char* decoderID);
//	UNITY_EXPORT(void) startPlay(const char* decoderID);
//	UNITY_EXPORT(void) stopPlay(const char* decoderID);
//	UNITY_EXPORT(void) autoReplay(const char* decoderID);
//	UNITY_EXPORT(void) suspendPlay(const char* decoderID);
//	UNITY_EXPORT(void) resumePlay(const char* decoderID);
//	UNITY_EXPORT(void) seekAtFrameIndex(const char* decoderID, const int frameIndex);
//	UNITY_EXPORT(TextureDescriptor) ue418TextureDataAtIndex(const char* decoderID, unsigned int index);
//#endif
//// MeshFun
//public:
//	void InitAPIFunPtr();
//	void Clear();
//	FPromethPluginModule* PromethModule;
//public:
//	static ReadPromethFun* ReadDecodeVideoAPIInstance;
//	static ReadPromethFun* GetAPIInst();
//
//};
