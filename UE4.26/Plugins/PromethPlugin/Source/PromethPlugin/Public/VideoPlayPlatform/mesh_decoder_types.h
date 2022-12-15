#pragma once

#include <string>
#include <vector>

typedef std::vector<float> CFV;
typedef std::vector<int> CIV;

typedef struct _Vertex {
	float x;
	float y;
	float z;
} Vertex;

typedef struct _Normals {
	float x;
	float y;
	float z;
} Normals;

typedef struct _UV {
	float x;
	float y;
} UV;
 


typedef struct _Mesh {
	size_t vertexCount;			// 顶点个数
	size_t triangleCount;		// 三角个数
	CFV *pVertexList;			// 定点列表
	CFV *pNormalsList;			// normal 列表
	CFV *pUVList;				// UV 列表
	CIV *pTriangleList;			// 三角列表
}Mesh;

typedef struct _MeshItemSizeInfo{
	unsigned int vertexBytesCount;
	unsigned int normalsBytesCount;
	unsigned int uvBytesCount;
	unsigned int trianglesBytesCount;
	unsigned int vertexCount;
	unsigned int trianglesCount;
} MeshItemSizeInfo;

typedef struct _MeshItemPointers{
	void* pVertex;
	void* pNormals;
	void* pUVs;
	void* pTriangles;
}MeshItemPointers;

typedef struct _MeshStreamInfo{
	double fps;
	int64_t duration;				// 总时长
	uint64_t frameCount;			//总帧数
} MeshStreamInfo;



//// 打开文件成功回调
typedef void (*OpenMeshStreamCompletionHandler)(bool success, const char* decoderID);
