#pragma once

#include "AudioModel/ImportedSoundWave.h"
#include "AudioModel/RuntimeAudioImporterTypes.h"
#include "RuntimeAudioImporterLibrary.generated.h"

class URuntimeAudioImporterLibrary;

DECLARE_MULTICAST_DELEGATE_OneParam(FOnAudioImporterProgressNative, int32 Percentage);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAudioImporterProgress, int32, Percentage);

DECLARE_MULTICAST_DELEGATE_ThreeParams(FOnAudioImporterResultNative, URuntimeAudioImporterLibrary* Importer, UImportedSoundWave* ImportedSoundWave, ETranscodingStatus Status);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnAudioImporterResult, URuntimeAudioImporterLibrary*, Importer, UImportedSoundWave*, ImportedSoundWave, ETranscodingStatus, Status);


DECLARE_DELEGATE_TwoParams(FOnAudioExportToBufferResultNative, bool, const TArray<uint8>&);

DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnAudioExportToBufferResult, bool, bSucceeded, const TArray<uint8>&, AudioData);

DECLARE_DELEGATE_OneParam(FOnAudioExportToFileResultNative, bool);

DECLARE_DYNAMIC_DELEGATE_OneParam(FOnAudioExportToFileResult, bool, bSucceeded);


DECLARE_DELEGATE_TwoParams(FOnRAWDataTranscodeFromBufferResultNative, bool, const TArray<uint8>&);

DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnRAWDataTranscodeFromBufferResult, bool, bSucceeded, UPARAM(DisplayName = "RAW Data") const TArray<uint8>&, RAWData);


DECLARE_DELEGATE_OneParam(FOnRAWDataTranscodeFromFileResultNative, bool);

DECLARE_DYNAMIC_DELEGATE_OneParam(FOnRAWDataTranscodeFromFileResult, bool, bSucceeded);


UCLASS(BlueprintType)
class PROMETHPLUGIN_API URuntimeAudioImporterLibrary : public UObject
{
	GENERATED_BODY()

public:
	
	FOnAudioImporterProgressNative OnProgressNative;

	UPROPERTY(BlueprintAssignable) FOnAudioImporterProgress OnProgress;

	FOnAudioImporterResultNative OnResultNative;

	UPROPERTY(BlueprintAssignable) FOnAudioImporterResult OnResult;

	UFUNCTION(BlueprintCallable, meta = (Keywords = "Create, Audio, Runtime, MP3, FLAC, WAV, OGG, Vorbis"))
	static URuntimeAudioImporterLibrary* CreateRuntimeAudioImporter();

	UFUNCTION(BlueprintCallable, meta = (Keywords = "Importer, Transcoder, Converter, Runtime, MP3, FLAC, WAV, OGG, Vorbis"))
	void ImportAudioFromFile(const FString& FilePath, EAudioFormat AudioFormat);

	UFUNCTION(BlueprintCallable, meta = (Keywords = "Importer, Transcoder, Converter, Runtime, MP3"))
	void ImportAudioFromPreImportedSound(class UPreImportedSoundAsset* PreImportedSoundAsset);

	UFUNCTION(BlueprintCallable, meta = (Keywords = "Importer, Transcoder, Converter, Runtime, MP3, FLAC, WAV, OGG, Vorbis"))
	void ImportAudioFromBuffer(TArray<uint8> AudioData, EAudioFormat AudioFormat);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Import Audio From RAW File"))
	void ImportAudioFromRAWFile(const FString& FilePath, UPARAM(DisplayName = "RAW Format") ERAWAudioFormat RAWFormat, int32 SampleRate = 44100, int32 NumOfChannels = 1);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Import Audio From RAW Buffer"))
	void ImportAudioFromRAWBuffer(UPARAM(DisplayName = "RAW Buffer") TArray<uint8> RAWBuffer, UPARAM(DisplayName = "RAW Format") ERAWAudioFormat RAWFormat, int32 SampleRate = 44100, int32 NumOfChannels = 1);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Transcode RAW Data From Buffer"))
	static void TranscodeRAWDataFromBuffer(UPARAM(DisplayName = "RAW Data From") TArray<uint8> RAWDataFrom, UPARAM(DisplayName = "RAW Format From") ERAWAudioFormat RAWFormatFrom, UPARAM(DisplayName = "RAW Format To") ERAWAudioFormat RAWFormatTo, const FOnRAWDataTranscodeFromBufferResult& Result);

	static void TranscodeRAWDataFromBuffer(UPARAM(DisplayName = "RAW Data From") TArray<uint8> RAWDataFrom, UPARAM(DisplayName = "RAW Format From") ERAWAudioFormat RAWFormatFrom, UPARAM(DisplayName = "RAW Format To") ERAWAudioFormat RAWFormatTo, const FOnRAWDataTranscodeFromBufferResultNative& Result);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Transcode RAW Data From File"))
	static void TranscodeRAWDataFromFile(const FString& FilePathFrom, UPARAM(DisplayName = "RAW Format From") ERAWAudioFormat RAWFormatFrom, const FString& FilePathTo, UPARAM(DisplayName = "RAW Format To") ERAWAudioFormat RAWFormatTo, const FOnRAWDataTranscodeFromFileResult& Result);

	static void TranscodeRAWDataFromFile(const FString& FilePathFrom, UPARAM(DisplayName = "RAW Format From") ERAWAudioFormat RAWFormatFrom, const FString& FilePathTo, UPARAM(DisplayName = "RAW Format To") ERAWAudioFormat RAWFormatTo, const FOnRAWDataTranscodeFromFileResultNative& Result);

	UFUNCTION(BlueprintCallable)
	static void ExportSoundWaveToFile(UImportedSoundWave* ImportedSoundWave, const FString& SavePath, EAudioFormat AudioFormat, uint8 Quality, const FOnAudioExportToFileResult& Result);

	static void ExportSoundWaveToFile(UImportedSoundWave* ImportedSoundWave, const FString& SavePath, EAudioFormat AudioFormat, uint8 Quality, const FOnAudioExportToFileResultNative& Result);

	UFUNCTION(BlueprintCallable)
	static void ExportSoundWaveToBuffer(UImportedSoundWave* ImportedSoundWave, EAudioFormat AudioFormat, uint8 Quality, const FOnAudioExportToBufferResult& Result);

	static void ExportSoundWaveToBuffer(UImportedSoundWave* ImportedSoundWave, EAudioFormat AudioFormat, uint8 Quality, const FOnAudioExportToBufferResultNative& Result);

	UFUNCTION(BlueprintCallable)
	static EAudioFormat GetAudioFormat(const FString& FilePath);

	UFUNCTION(BlueprintCallable)
	static EAudioFormat GetAudioFormatAdvanced(const TArray<uint8>& AudioData);

	UFUNCTION(BlueprintCallable)
	static FString ConvertSecondsToString(int32 Seconds);

	static bool DecodeAudioData(FEncodedAudioStruct& EncodedAudioInfo, FDecodedAudioStruct& DecodedAudioInfo);

	static bool EncodeAudioData(const FDecodedAudioStruct& DecodedAudioInfo, FEncodedAudioStruct& EncodedAudioInfo, uint8 Quality);

	static EAudioFormat GetAudioFormat(const uint8* AudioData, int32 AudioDataSize);

	void ImportAudioFromFloat32Buffer(uint8* PCMData, int32 PCMDataSize, int32 SampleRate = 44100, int32 NumOfChannels = 1);

	void ImportAudioFromDecodedInfo(const FDecodedAudioStruct& DecodedAudioInfo);

	virtual void DefineSoundWave(UImportedSoundWave* ImportedSoundWave, const FDecodedAudioStruct& DecodedAudioInfo);

	static void FillSoundWaveBasicInfo(UImportedSoundWave* ImportedSoundWave, const FDecodedAudioStruct& DecodedAudioInfo);

	static void FillPCMData(UImportedSoundWave* ImportedSoundWave, const FDecodedAudioStruct& DecodedAudioInfo);

protected:
	
	virtual UImportedSoundWave* CreateImportedSoundWave() const;

	void OnProgress_Internal(int32 Percentage);

	void OnResult_Internal(UImportedSoundWave* ImportedSoundWave, ETranscodingStatus Status);
};
