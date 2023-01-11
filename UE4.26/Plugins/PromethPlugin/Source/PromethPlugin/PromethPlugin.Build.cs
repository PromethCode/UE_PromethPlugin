// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class PromethPlugin : ModuleRules
{
	public PromethPlugin(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

        AddEngineThirdPartyPrivateStaticDependencies(Target,
            "UEOgg",
            "Vorbis"
        );

        PublicDefinitions.AddRange(
            new string[]
            {
                "DR_WAV_IMPLEMENTATION=1",
                "DR_MP3_IMPLEMENTATION=1",
                "DR_FLAC_IMPLEMENTATION=1"
            }
        );

#if !UE_5_00_OR_LATER
        PrivateDependencyModuleNames.Add("AudioPlatformConfiguration");
#endif

        PublicIncludePaths.AddRange(
			new string[] {
				// ... add public include paths required here ...
			}
			);
				
		
		PrivateIncludePaths.AddRange(
			new string[] {
				// ... add other private include paths required here ...
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
