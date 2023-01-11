#pragma once

#include "CoreMinimal.h"
#include "AudioModel/RuntimeAudioImporterTypes.h"
#include "PreImportedSoundAsset.generated.h"

UCLASS(BlueprintType, Category = "Pre Imported Sound Asset")
class PROMETHPLUGIN_API UPreImportedSoundAsset : public UObject
{
	GENERATED_BODY()

public:
	UPreImportedSoundAsset();

	UPROPERTY() TArray<uint8> AudioDataArray;

	UPROPERTY(Category = "Info", VisibleAnywhere, Meta = (DisplayName = "Audio format")) EAudioFormat AudioFormat;

#if WITH_EDITORONLY_DATA

	UPROPERTY(Category = "File Path", VisibleAnywhere, Meta = (DisplayName = "Source file path")) FString SourceFilePath;

	UPROPERTY(Category = "Info", VisibleAnywhere, Meta = (DisplayName = "Sound duration")) FString SoundDuration;

	UPROPERTY(Category = "Info", VisibleAnywhere, Meta = (DisplayName = "Number of channels")) int32 NumberOfChannels;

	UPROPERTY(Category = "Info", VisibleAnywhere, Meta = (DisplayName = "Sample rate")) int32 SampleRate;
#endif
};
