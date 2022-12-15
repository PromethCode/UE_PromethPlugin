#pragma once
#include "mesh_decoder_types.h"



extern "C" {

     void executeLicenseKeyAuthorization(const char* licenseKey,   const char* keyType);
            
     bool isPassCertificate();
     
     void openMeshFile(const char *fileName, const char *sessionID, OpenMeshStreamCompletionHandler completionHandler);

     void startRead(const char *sessionID);

    void stress(const char *sessionID);
    
    void stopRead(const char* sessionID);
    
    void seekAtIndex(const char* sessionID, unsigned int index);
    
    void suspendRead(const char* sessionID);
    
    void resumeRead(const char* sessionID);
    
    Mesh* meshObjectAtIndex(const char* sessionID, unsigned int index);
    
    MeshStreamInfo getMeshStreamInfo(const char* sessionID);
    
    MeshItemSizeInfo getMeshSizeItemInfo(const char* sessionID, unsigned int index);

    size_t getMeshTrianglesCount(const char* sessionID, unsigned int index);
    
    bool updateMeshData(const char* sessionID, unsigned int index, MeshItemPointers pointers);
    
    const char *getDebugMeshFileName(void);

    void debugEntryPoint(const char* caller);
};

