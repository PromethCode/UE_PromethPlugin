#pragma once

#include "AudioModel/RuntimeAudioImporterTypes.h"
#include "Sound/SoundWaveProcedural.h"
#include "ImportedSoundWave.generated.h"

DECLARE_MULTICAST_DELEGATE(FOnAudioPlaybackFinishedNative);

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnAudioPlaybackFinished);

DECLARE_MULTICAST_DELEGATE_OneParam(FOnGeneratePCMDataNative, const TArray<float>&);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGeneratePCMData, const TArray<float>&, PCMData);

UCLASS(BlueprintType, Category = "Imported Sound Wave")
class PROMETHPLUGIN_API UImportedSoundWave : public USoundWaveProcedural
{
	GENERATED_BODY()

public:
	UImportedSoundWave(const FObjectInitializer& ObjectInitializer);
	
	virtual void BeginDestroy() override;
	virtual void Parse(class FAudioDevice* AudioDevice, const UPTRINT NodeWaveInstanceHash, FActiveSound& ActiveSound, const FSoundParseParameters& ParseParams, TArray<FWaveInstance*>& WaveInstances) override;

	UFUNCTION(BlueprintCallable, Category = "Imported Sound Wave|Miscellaneous") void ReleaseMemory();

	UFUNCTION(BlueprintCallable, Category = "Imported Sound Wave|Properties") void SetLooping(bool bLoop);
	UFUNCTION(BlueprintCallable, Category = "Imported Sound Wave|Properties") void SetSubtitles(UPARAM(DisplayName = "Subtitles") const TArray<FEditableSubtitleCue>& InSubtitles);
	UFUNCTION(BlueprintCallable, Category = "Imported Sound Wave|Properties") void SetVolume(UPARAM(DisplayName = "Volume") float InVolume = 1);
	UFUNCTION(BlueprintCallable, Category = "Imported Sound Wave|Properties") void SetPitch(UPARAM(DisplayName = "Pitch") float InPitch = 1);

	UFUNCTION(BlueprintCallable, Category = "Imported Sound Wave|Main") bool RewindPlaybackTime(float PlaybackTime);

	bool ChangeCurrentFrameCount(uint32 NumOfFrames);

	UFUNCTION(BlueprintCallable, Category = "Imported Sound Wave|Info") float GetPlaybackTime() const;
	UFUNCTION(BlueprintCallable, Category = "Imported Sound Wave|Info", meta = (DisplayName = "Get Duration")) float GetDurationConst() const;
	UFUNCTION(BlueprintCallable, Category = "Imported Sound Wave|Info") virtual float GetDuration()

#if ENGINE_MAJOR_VERSION < 5
	override;
#else
	const override;
#endif

	UFUNCTION(BlueprintCallable, Category = "Imported Sound Wave|Info") float GetPlaybackPercentage() const;
	UPROPERTY(BlueprintReadOnly, Category = "Imported Sound Wave|Info") int32 SamplingRate;

	UFUNCTION(BlueprintCallable, Category = "Imported Sound Wave|Utility") bool IsPlaybackFinished();

	FOnAudioPlaybackFinishedNative OnAudioPlaybackFinishedNative;
	UPROPERTY(BlueprintAssignable, Category = "Imported Sound Wave|Delegates") FOnAudioPlaybackFinished OnAudioPlaybackFinished;
	FOnGeneratePCMDataNative OnGeneratePCMDataNative;
	UPROPERTY(BlueprintAssignable, Category = "Imported Sound Wave|Delegates") FOnGeneratePCMData OnGeneratePCMData;

private:
	
	bool PlaybackFinishedBroadcast = false;

public:

	virtual int32 OnGeneratePCMAudio(TArray<uint8>& OutAudio, int32 NumSamples) override;
	virtual Audio::EAudioMixerStreamDataFormat::Type GetGeneratedPCMDataFormat() const override;

	UPROPERTY(BlueprintReadOnly, Category = "Imported Sound Wave|Info") int32 CurrentNumOfFrames;

	FPCMStruct PCMBufferInfo;
};
