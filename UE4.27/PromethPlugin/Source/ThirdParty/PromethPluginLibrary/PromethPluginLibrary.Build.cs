// Fill out your copyright notice in the Description page of Project Settings.

using System.IO;
using UnrealBuildTool;
using System;
using System.Threading;
using System.Collections.Generic;
public class PromethPluginLibrary : ModuleRules
{

    private void CopyDllAndLibToPluginBinaries(string Filepath, ReadOnlyTargetRules Target)
    {
       
        string binariesPath = Path.Combine(PluginDirectory, "Binaries", "ThirdParty", "PromethPluginLibrary", "Windows");
        
        Console.WriteLine("CopyTargetBinnaryDir:" + binariesPath);
        string Filename = Path.GetFileName(Filepath);
        bUsePrecompiled = false;
        if (!Directory.Exists(binariesPath))
        {
            Directory.CreateDirectory(binariesPath);
        }

        if (!File.Exists(Path.Combine(binariesPath, Filename)))
        {
            File.Copy(Filepath, Path.Combine(binariesPath, Filename), true);
        }
        else
            Console.WriteLine(Filename + " Exists!!!");

        PublicDelayLoadDLLs.Add(Path.Combine(binariesPath, Filename));
        RuntimeDependencies.Add(Path.Combine(binariesPath, Filename));
    }
    public List<string> LoadFile(string Dir, string Extension, bool DFS = true)
    {
        List<string> ListFile = new List<string>();

        DirectoryInfo directoryInfo = new DirectoryInfo(Dir);
        FileInfo[] files = directoryInfo.GetFiles();
        foreach (FileInfo file in files)
        {
            if (Path.GetExtension(file.FullName) == Extension)
            {
                ListFile.Add(file.FullName);
            }
        }
        DirectoryInfo[] dirfiles = directoryInfo.GetDirectories();
        if (dirfiles.Length > 0 && DFS)
        {
            foreach (DirectoryInfo DirFile in dirfiles)
            {
                ListFile.AddRange(LoadFile(DirFile.FullName, Extension));
            }
        }
        return ListFile;
    }
    public PromethPluginLibrary(ReadOnlyTargetRules Target) : base(Target)
	{
		Type = ModuleType.External;
        //Console.WriteLine(" Exists!!!");

        if (Target.Platform == UnrealTargetPlatform.Win64)
		{
            string WinThridPartyPath = Path.GetFullPath(Path.Combine(ModuleDirectory, "Windows"));

            // Copy Dll To Binaries and load
            /*CopyDllAndLibToPluginBinaries(Path.Combine(WinThridPartyPath, "mesh_decoder_plugin.dll"), Target);
            CopyDllAndLibToPluginBinaries(Path.Combine(WinThridPartyPath, "libcurl-x64.dll"), Target);
            CopyDllAndLibToPluginBinaries(Path.Combine(WinThridPartyPath, "windows_decoder_plugin.dll"), Target);*/
            List<string> WinFiles = LoadFile(WinThridPartyPath, ".dll");
            foreach (string file in WinFiles)
            {
                Console.WriteLine(file);
                CopyDllAndLibToPluginBinaries(file, Target);
            }

        }
        else if(Target.Platform == UnrealTargetPlatform.IOS)
        {
            string IOSThridPartyPath = Path.GetFullPath(Path.Combine(ModuleDirectory, "IOS"));
            PrivateIncludePaths.Add(IOSThridPartyPath);

            List<string> IOSFiles = LoadFile(Path.Combine(IOSThridPartyPath, "ffmpeg4.4.2", "lib"), ".a");
            
            PrivateIncludePaths.Add(Path.Combine(IOSThridPartyPath, "ffmpeg4.4.2", "include"));
            //List<string> IOSFiles = LoadFile(Path.Combine(IOSThridPartyPath, "ffmpeg"), ".a");
            Console.WriteLine("------------ffmpeg------------");
            foreach (string file in IOSFiles)
            {
                Console.WriteLine(file);
                PublicAdditionalLibraries.Add(file);
            }
             
            
            
            //List<string> IOSFiles = LoadFile(Path.Combine(IOSThridPartyPath, "ffmpeg_new", "lib"), ".a");
            /*
            PrivateIncludePaths.Add(Path.Combine(IOSThridPartyPath, "ffmpeg", "include"));
            List<string> IOSFiles = LoadFile(Path.Combine(IOSThridPartyPath, "ffmpeg"), ".a");
            Console.WriteLine("------------ffmpeg------------");
            foreach (string file in IOSFiles)
            {
                Console.WriteLine(file);
                PublicAdditionalLibraries.Add(file);
            }*/
            
            
            /*********ffmpeg new*********/
            /*
            PrivateIncludePaths.Add(Path.Combine(IOSThridPartyPath, "ffmpeg", "include"));
            PublicAdditionalLibraries.Add(Path.Combine(IOSThridPartyPath, "ffmpeg", "lib", "libavcodec.a"));
            PublicAdditionalLibraries.Add(Path.Combine(IOSThridPartyPath, "ffmpeg", "lib", "libavdevice.a"));
            PublicAdditionalLibraries.Add(Path.Combine(IOSThridPartyPath, "ffmpeg", "lib", "libavfilter.a"));
            PublicAdditionalLibraries.Add(Path.Combine(IOSThridPartyPath, "ffmpeg", "lib", "libavformat.a"));
            PublicAdditionalLibraries.Add(Path.Combine(IOSThridPartyPath, "ffmpeg", "lib", "libavutil.a"));
            PublicAdditionalLibraries.Add(Path.Combine(IOSThridPartyPath, "ffmpeg", "lib", "libswresample.a"));
            PublicAdditionalLibraries.Add(Path.Combine(IOSThridPartyPath, "ffmpeg", "lib", "libswscale.a"));
             */
            
            /*********ffmpeg new*********/

            IOSFiles = LoadFile(Path.Combine(IOSThridPartyPath, "draco"), ".a");
            Console.WriteLine("------------draco------------");
            foreach (string file in IOSFiles)
            {
                Console.WriteLine(file);
                PublicAdditionalLibraries.Add(file);
            }

            // Array Add .a
            Console.WriteLine("------------Array Add .a------------");
            PublicAdditionalLibraries.Add(Path.Combine(IOSThridPartyPath, "libYYCategories.a"));
            PublicAdditionalLibraries.Add(Path.Combine(IOSThridPartyPath, "libYYCache.a"));
            PublicAdditionalLibraries.Add(Path.Combine(IOSThridPartyPath, "libAFNetworking.a"));
            PublicAdditionalLibraries.Add(Path.Combine(IOSThridPartyPath, "libYTKNetwork.a"));
            PublicAdditionalLibraries.Add(Path.Combine(IOSThridPartyPath, "libAuthorization.a"));
            PublicAdditionalLibraries.Add(Path.Combine(IOSThridPartyPath, "libapple_mesh_decoder_plugin.a"));
            PublicAdditionalLibraries.Add(Path.Combine(IOSThridPartyPath, "libapple_decoder_plugin.a"));
            
            PublicAdditionalLibraries.Add(Path.Combine(IOSThridPartyPath, "libz.1.tbd"));
            PublicAdditionalLibraries.Add(Path.Combine(IOSThridPartyPath, "libc++.1.tbd"));
            PublicAdditionalLibraries.Add(Path.Combine(IOSThridPartyPath, "libbz2.1.0.tbd"));
            PublicAdditionalLibraries.Add(Path.Combine(IOSThridPartyPath, "libiconv.2.tbd"));
            
            PublicFrameworks.AddRange(
                new string[]
                {
                    "CoreFoundation",
                    "CoreMedia",
                    "CoreVideo",
                    "VideoToolbox",
                    "AudioToolbox",
                }

            );

            /****************************************************/
            //PublicAdditionalLibraries.Add("z");
            //PublicAdditionalLibraries.Add("sqlite3.0");
            //PublicAdditionalLibraries.Add("c++");
            /****************************************************/
        }
        else if (Target.Platform == UnrealTargetPlatform.Android)
        {
            string AndroidThridPartyPath = Path.GetFullPath(Path.Combine(ModuleDirectory, "Android"));
            string SoPath_v7a = Path.Combine(AndroidThridPartyPath, "armeabi-v7a");
            string SoPath_v8a = Path.Combine(AndroidThridPartyPath, "arm64-v8a");
            AdditionalPropertiesForReceipt.Add("AndroidPlugin", Path.Combine(ModuleDirectory, "AndroidXML.xml"));
          
            PublicAdditionalLibraries.Add(Path.Combine(SoPath_v8a, "lib_texture_decoder_plugin.so"));
            PublicAdditionalLibraries.Add(Path.Combine(SoPath_v8a, "libFastBase64.so"));
            /*         
            PublicAdditionalLibraries.Add(Path.Combine(SoPath_v8a, "libavcodec-57.so"));
            PublicAdditionalLibraries.Add(Path.Combine(SoPath_v8a, "libavdevice-57.so"));
            PublicAdditionalLibraries.Add(Path.Combine(SoPath_v8a, "libavfilter-6.so"));
            PublicAdditionalLibraries.Add(Path.Combine(SoPath_v8a, "libavformat-57.so"));
            PublicAdditionalLibraries.Add(Path.Combine(SoPath_v8a, "libavutil-55.so"));
            PublicAdditionalLibraries.Add(Path.Combine(SoPath_v8a, "lib_mesh_decoder_plugin.so"));
            PublicAdditionalLibraries.Add(Path.Combine(SoPath_v8a, "libpostproc-54.so"));
            PublicAdditionalLibraries.Add(Path.Combine(SoPath_v8a, "libswresample-2.so"));
            PublicAdditionalLibraries.Add(Path.Combine(SoPath_v8a, "libswscale-4.so"));
            */
        }
    }
}
