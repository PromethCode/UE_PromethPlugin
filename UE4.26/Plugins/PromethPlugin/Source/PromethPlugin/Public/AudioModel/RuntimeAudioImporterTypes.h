#pragma once

#include "Engine/EngineBaseTypes.h"
#include "Sound/SoundGroups.h"
#include "AudioModel/RuntimeAudioImporterDefines.h"
#include "Serialization/BulkDataBuffer.h"
#include "HAL/UnrealMemory.h"

#include "RuntimeAudioImporterTypes.generated.h"

UENUM(BlueprintType)
enum class ETranscodingStatus : uint8
{
	SuccessfulImport UMETA(DisplayName = "Success"),
	FailedToReadAudioDataArray UMETA(DisplayName = "Failed to read Audio Data Array"),
	SoundWaveDeclarationError UMETA(DisplayName = "SoundWave declaration error"),
	InvalidAudioFormat UMETA(DisplayName = "Invalid audio format"),
	AudioDoesNotExist UMETA(DisplayName = "Audio does not exist"),
	LoadFileToArrayError UMETA(DisplayName = "Load file to array error")
};

UENUM(BlueprintType)
enum class EAudioFormat : uint8
{
	Auto UMETA(DisplayName = "Determine format automatically"),
	Mp3 UMETA(DisplayName = "mp3"),
	Wav UMETA(DisplayName = "wav"),
	Flac UMETA(DisplayName = "flac"),
	OggVorbis UMETA(DisplayName = "ogg vorbis"),
	Invalid UMETA(DisplayName = "invalid (not defined format, internal use only)", Hidden)
};

UENUM(BlueprintType)
enum class ERAWAudioFormat : uint8
{
	Int16 UMETA(DisplayName = "Signed 16-bit PCM"),
	Int32 UMETA(DisplayName = "Signed 32-bit PCM"),
	UInt8 UMETA(DisplayName = "Unsigned 8-bit PCM"),
	Float32 UMETA(DisplayName = "32-bit float")
};

struct FSoundWaveBasicStruct
{
	uint32 NumOfChannels;
	uint32 SampleRate;

	float Duration;

	FString ToString() const
	{
		return FString::Printf(TEXT("Number of channels: %d, sample rate: %d, duration: %f"), NumOfChannels, SampleRate, Duration);
	}
};

struct FPCMStruct
{
	FBulkDataBuffer<uint8> PCMData;

	uint32 PCMNumOfFrames;

	FPCMStruct()
		: PCMNumOfFrames(0)
	{
	}

	bool IsValid() const
	{
		return PCMData.GetView().GetData() != nullptr && PCMNumOfFrames > 0 && PCMData.GetView().Num() > 0;
	}

	FString ToString() const
	{
		return FString::Printf(TEXT("Validity of PCM data in memory: %s, number of PCM frames: %d, PCM data size: %lld"),
		                       PCMData.GetView().IsValidIndex(0) ? TEXT("Valid") : TEXT("Invalid"), PCMNumOfFrames, PCMData.GetView().Num());
	}
};

struct FDecodedAudioStruct
{
	FSoundWaveBasicStruct SoundWaveBasicInfo;

	FPCMStruct PCMInfo;

	FString ToString() const
	{
		return FString::Printf(TEXT("SoundWave Basic Info:\n%s\n\nPCM Info:\n%s"), *SoundWaveBasicInfo.ToString(), *PCMInfo.ToString());
	}
};

struct FEncodedAudioStruct
{
	FBulkDataBuffer<uint8> AudioData;

	EAudioFormat AudioFormat;

	FEncodedAudioStruct()
		: AudioFormat{EAudioFormat::Invalid}
	{
	}

	FEncodedAudioStruct(uint8* AudioData, int32 AudioDataSize, EAudioFormat AudioFormat)
		: AudioData(AudioData, AudioDataSize)
	  , AudioFormat{AudioFormat}
	{
	}

	FString ToString() const
	{
		return FString::Printf(TEXT("Validity of audio data in memory: %s, audio data size: %lld, audio format: %s"),
		                       AudioData.GetView().IsValidIndex(0) ? TEXT("Valid") : TEXT("Invalid"), AudioData.GetView().Num(),
		                       *UEnum::GetValueAsName(AudioFormat).ToString());
	}
};

USTRUCT(BlueprintType)
struct FCompressedSoundWaveInfo
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite) TEnumAsByte<ESoundGroup> SoundGroup;
	UPROPERTY(BlueprintReadWrite) bool bLooping;

	UPROPERTY(BlueprintReadWrite, meta = (ClampMin = "0.0")) float Volume;
	UPROPERTY(BlueprintReadWrite, meta = (ClampMin = "0.125", ClampMax = "4.0")) float Pitch;

	FCompressedSoundWaveInfo()
		: SoundGroup(ESoundGroup::SOUNDGROUP_Default)
	  , bLooping(false)
	  , Volume(1.f)
	  , Pitch(1.f)
	{
	}
};

USTRUCT(BlueprintType)
struct FEditableSubtitleCue
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite) FText Text;
	UPROPERTY(EditAnywhere, BlueprintReadWrite) float Time;

	FEditableSubtitleCue()
		: Time(0)
	{
	}
};
