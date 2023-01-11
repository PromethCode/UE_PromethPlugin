#pragma once

#include "CoreMinimal.h"
#include "Math/UnrealMathUtility.h"
#include "HAL/UnrealMemory.h"
#include "AudioModel/RuntimeAudioImporterDefines.h"

class PROMETHPLUGIN_API RAWTranscoder
{
public:
	/**
	 * 获取指定RAW格式的最小值和最大值
	 */
	template <typename IntegralType>
	static TTuple<float, float> GetRawMinAndMaxValues()
	{
		if (TIsSame<IntegralType, int16>::Value)
		{
			return TTuple<float, float>(-32767.f, 32768.f);
		}

		if (TIsSame<IntegralType, int32>::Value)
		{
			return TTuple<float, float>(-2147483648.f, 2147483647.f);
		}

		if (TIsSame<IntegralType, uint8>::Value)
		{
			return TTuple<float, float>(0.f, 255.f);
		}

		if (TIsSame<IntegralType, float>::Value)
		{
			return TTuple<float, float>(-1.f, 1.f);
		}

		return TTuple<float, float>(-1.f, 1.f);
	}

	template <typename IntegralTypeFrom, typename IntegralTypeTo>
	static void TranscodeRAWData(const TArray<uint8>& RAWData_From, TArray<uint8>& RAWData_To)
	{
		const IntegralTypeFrom* DataFrom = reinterpret_cast<const IntegralTypeFrom*>(RAWData_From.GetData());
		const int32 DataFrom_Size = RAWData_From.Num();

		IntegralTypeTo* DataTo = nullptr;
		int32 DataTo_Size = 0;

		TranscodeRAWData<IntegralTypeFrom, IntegralTypeTo>(DataFrom, DataFrom_Size, DataTo, DataTo_Size);

		RAWData_To = TArray<uint8>(reinterpret_cast<uint8*>(DataTo), DataTo_Size);
		
		FMemory::Free(DataTo);
	}

	template <typename IntegralTypeFrom, typename IntegralTypeTo>
	static void TranscodeRAWData(const IntegralTypeFrom* RAWData_From, int32 RAWDataSize_From, IntegralTypeTo*& RAWData_To, int32& RAWDataSize_To)
	{
		const int32 NumSamples = RAWDataSize_From / sizeof(IntegralTypeFrom);

		RAWDataSize_To = NumSamples * sizeof(IntegralTypeTo);

		IntegralTypeTo* TempPCMData = static_cast<IntegralTypeTo*>(FMemory::MallocZeroed(RAWDataSize_To));

		const TTuple<float, float> MinAndMaxValuesFrom{GetRawMinAndMaxValues<IntegralTypeFrom>()};
		const TTuple<float, float> MinAndMaxValuesTo{GetRawMinAndMaxValues<IntegralTypeTo>()};

		for (int32 SampleIndex = 0; SampleIndex < NumSamples; ++SampleIndex)
		{
			TempPCMData[SampleIndex] = static_cast<IntegralTypeTo>(FMath::GetMappedRangeValueClamped(FVector2D(MinAndMaxValuesFrom.Key, MinAndMaxValuesFrom.Value), FVector2D(MinAndMaxValuesTo.Key, MinAndMaxValuesTo.Value), RAWData_From[SampleIndex]));
		}

		RAWData_To = reinterpret_cast<IntegralTypeTo*>(TempPCMData);

		UE_LOG(LogRuntimeAudioImporter, Log, TEXT("Transcoding RAW data of size '%d' (min: %f, max: %f) to size '%d' (min: %f, max: %f)"),
		       static_cast<int32>(sizeof(IntegralTypeFrom)), MinAndMaxValuesFrom.Key, MinAndMaxValuesFrom.Value, static_cast<int32>(sizeof(IntegralTypeTo)), MinAndMaxValuesTo.Key, MinAndMaxValuesTo.Value);
	}
};
