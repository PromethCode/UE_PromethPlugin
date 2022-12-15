// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class PromethPlugin : ModuleRules
{
	public PromethPlugin(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
		
		PublicIncludePaths.AddRange(
			new string[] {
                "PromethPlugin/Public"
			}
			);
				
		
		PrivateIncludePaths.AddRange(
			new string[] {
                "PromethPlugin/Private"
			}
			);
			
		
		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
				"PromethPluginLibrary",
				"Projects",
				"CoreUObject",
				"Engine",
				"SlateCore",
				"MediaAssets",
                "MoviePlayer",
                "MovieScene",
                "MovieSceneTracks",
                "MediaUtils",
				//"RawMesh",
				"RenderCore",
                "RHI",

				"RawMesh",
				"HTTP",
				// ... add other public dependencies that you statically link with here ...
			}
			);
			
		
		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
                "Core",
                "PromethPluginLibrary",
                "Projects",
                "CoreUObject",

				"SlateCore",
				"Engine",
				"MediaAssets",
                "MoviePlayer",
                "MovieScene",
                "MovieSceneTracks",
                "MediaUtils",
				"RenderCore",
                "RHI",

				"RawMesh",
				// ... add private dependencies that you statically link with here ...	
			}
			);
		
		
		DynamicallyLoadedModuleNames.AddRange(
			new string[]
			{
				// ... add any modules that your module loads dynamically here ...
			}
			);
	}
}
