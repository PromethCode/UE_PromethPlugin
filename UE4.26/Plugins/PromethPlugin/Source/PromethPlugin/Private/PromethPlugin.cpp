// Copyright Epic Games, Inc. All Rights Reserved.

#include "PromethPlugin.h"
#include "Core.h"
#include "Modules/ModuleManager.h"
#include "Interfaces/IPluginManager.h"
//#include "PromethPluginLibrary/ExampleLibrary.h"

#define LOCTEXT_NAMESPACE "FPromethPluginModule"

void FPromethPluginModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module

	// Get the base directory of this plugin
	FString BaseDir = IPluginManager::Get().FindPlugin("PromethPlugin")->GetBaseDir();

	// Add on the relative location of the third party dll and load it
	FString LibraryPath;
#if PLATFORM_WINDOWS
	this->ImportDLL(FPaths::Combine(*BaseDir, TEXT("Binaries/ThirdParty/PromethPluginLibrary/Windows/windows_decoder_plugin.dll")));
	this->ImportDLL(FPaths::Combine(*BaseDir, TEXT("Binaries/ThirdParty/PromethPluginLibrary/Windows/libcurl-x64.dll")));
	this->ImportDLL(FPaths::Combine(*BaseDir, TEXT("Binaries/ThirdParty/PromethPluginLibrary/Windows/mesh_decoder_plugin.dll")));
#elif PLATFORM_MAC
    //LibraryPath = FPaths::Combine(*BaseDir, TEXT("Source/ThirdParty/PromethPluginLibrary/Mac/Release/libExampleLibrary.dylib"));
#endif // PLATFORM_WINDOWS	
}

void FPromethPluginModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.

	for (auto handle : this->LibrarayHandles) {
		if(handle){
			FPlatformProcess::FreeDllHandle(handle);
			handle = nullptr;
		}
	}
	this->LibrarayHandles.clear();
}

void FPromethPluginModule::ImportDLL(const FString& FilePath) {
	if (!FPaths::FileExists(FilePath))
	{
		UE_LOG(LogTemp, Display, TEXT("[Prometh] import so dll dylb %s no exist!"), *FilePath);
	}
	void* Handle;
#if PLATFORM_WINDOWS
	Handle = !FilePath.IsEmpty() ? FPlatformProcess::GetDllHandle(*FilePath) : nullptr;
#elif PLATFORM_ANDROID
	Handle = !FilePath.IsEmpty() ? FPlatformProcess::GetDllHandle(*FilePath) : nullptr;
#elif PLATFORM_IOS
	//Handle = !FilePath.IsEmpty() ? dlopen(TCHAR_TO_UTF8(FilePath.GetCharArray().GetData()), RTLD_GLOBAL|RTLD_NOW) : nullptr;//FPlatformProcess::GetDllHandle(*FilePath) : nullptr;
	Handle = !FilePath.IsEmpty() ? dlopen(TCHAR_TO_UTF8(FilePath.GetCharArray().GetData()), RTLD_LAZY) : nullptr;//FPlatformProcess::GetDllHandle(*FilePath) : nullptr;
#endif
	if (Handle) {
		this->LibrarayHandles.push_back(Handle);
	}
	else {
		UE_LOG(LogTemp, Display, TEXT("[Prometh] Import %s Failed!"), *FilePath);
	}
}



#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FPromethPluginModule, PromethPlugin)

DEFINE_LOG_CATEGORY(LogRuntimeAudioImporter);