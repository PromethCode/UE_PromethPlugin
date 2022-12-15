#pragma once
#include "mesh_decoder_types.h"


#define NDK_EXPORT_API __attribute__ ((visibility("default")))

extern "C" {

	void setLicenseKeyValid(bool isValid);
	bool isPassCertificate();

	NDK_EXPORT_API void executeLicenseKeyAuthorization(const char* licenseKey, const char* keyType);

	NDK_EXPORT_API Mesh* meshObjectAtIndex(const char* sessionID, unsigned int index);

	NDK_EXPORT_API MeshStreamInfo getMeshStreamInfo(const char* sessionID);

	NDK_EXPORT_API size_t getMeshTrianglesCount(const char* sessionID, unsigned int index);

	NDK_EXPORT_API bool updateMeshData(const char* sessionID, unsigned int index, MeshItemPointers pointers);

};

