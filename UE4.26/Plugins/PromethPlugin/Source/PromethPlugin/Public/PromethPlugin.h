// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include <vector>
#include "Modules/ModuleManager.h"

class FPromethPluginModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;

	template<typename T>
	T GetMeshPlayerPluginFunction(const FString& ProcName) {
		T Ret = nullptr;
		for(auto Handle:this->LibrarayHandles){
#if PLATFORM_WINDOWS || PLATFORM_ANDROID
			Ret = (T)FPlatformProcess::GetDllExport(Handle, *ProcName);
#elif PLATFORM_IOS
			Ret = (T)dlsym(Handle, TCHAR_TO_UTF8(ProcName.GetCharArray().GetData()));
#endif
			if (Ret) return Ret;
		}
		return Ret;
	}

private:
	/** Handle to the test dll we will load */
	/*void*	ExampleLibraryHandle;*/
	std::vector<void*> LibrarayHandles;
private:
	void ImportDLL(const FString& FilePath);
};
