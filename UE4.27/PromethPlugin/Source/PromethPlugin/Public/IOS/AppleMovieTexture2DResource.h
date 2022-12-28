
// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Containers/ResourceArray.h"
#include "../../../ThirdParty/PromethPluginLibrary/IOS/CoreFoundation.framework/Versions/A/Headers/CFBase.h"

/**
 * 
 */
class PROMETHPLUGIN_API FAppleMovieStreamerTexture2DResourceWrapper_My : public FResourceBulkDataInterface
{
public:
    FAppleMovieStreamerTexture2DResourceWrapper_My(CFTypeRef InImageBuffer)
		: ImageBuffer(InImageBuffer)
	{
        if(!ImageBuffer)
            UE_LOG(LogTemp, Warning, TEXT(" PromethPlugin : FAppleMovieStreamerTexture2DResourceWrapper_My ImageBuffer is nullptr"));

        UE_LOG(LogTemp, Warning, TEXT(" PromethPlugin : FAppleMovieStreamerTexture2DResourceWrapper_My Init"));
		check(ImageBuffer);
        UE_LOG(LogTemp, Warning, TEXT(" PromethPlugin : FAppleMovieStreamerTexture2DResourceWrapper_My check"));
		CFRetain(ImageBuffer);
        UE_LOG(LogTemp, Warning, TEXT(" PromethPlugin : FAppleMovieStreamerTexture2DResourceWrapper_My CFRetain"));

	}

	virtual ~FAppleMovieStreamerTexture2DResourceWrapper_My()
	{
		CFRelease(ImageBuffer);
		ImageBuffer = nullptr;
	}
public:

	//~ FResourceBulkDataInterface interface

	virtual void Discard() override
	{
		delete this;
	}

	virtual const void* GetResourceBulkData() const override
	{
		return ImageBuffer;
	}
	
	virtual uint32 GetResourceBulkDataSize() const override
	{
		return ImageBuffer ? ~0u : 0;
	}

	virtual EBulkDataType GetResourceType() const override
	{
		return EBulkDataType::MediaTexture;
	}
	
	CFTypeRef ImageBuffer;
};
