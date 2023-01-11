#pragma once

#include "AudioModel/ImportedSoundWave.h"
#include "AudioModel/RuntimeAudioImporterTypes.h"
#include "RuntimeAudioCompressor.generated.h"

DECLARE_MULTICAST_DELEGATE_TwoParams(FOnSoundWaveCompressedResultNative, bool bSuccess, USoundWave* SoundWaveRef);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnSoundWaveCompressedResult, bool, bSuccess, USoundWave*, SoundWaveRef);

UCLASS(BlueprintType)
class PROMETHPLUGIN_API URuntimeAudioCompressor : public UObject
{
	GENERATED_BODY()

public:
	FOnSoundWaveCompressedResultNative OnResultNative;
	
	UPROPERTY(BlueprintAssignable, meta = (DeprecatedProperty)) FOnSoundWaveCompressedResult OnResult;

	UFUNCTION(BlueprintCallable, meta = (DeprecatedFunction)) static URuntimeAudioCompressor* CreateRuntimeAudioCompressor();

	UFUNCTION(BlueprintCallable, meta = (DeprecatedFunction))
	void CompressSoundWave(UImportedSoundWave* ImportedSoundWaveRef, FCompressedSoundWaveInfo CompressedSoundWaveInfo, uint8 Quality, bool bFillCompressedBuffer, bool bFillPCMBuffer, bool bFillRAWWaveBuffer);

private:

	void BroadcastResult(USoundWave* SoundWaveRef);
};
