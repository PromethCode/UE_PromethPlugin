// Georgy Treshchev 2021.

#pragma once

#include "Http.h"

#include "RuntimeFilesDownloaderLibrary.generated.h"

/**
 * Possible results from a download request.
 */
UENUM(BlueprintType, Category = "Runtime Files Downloader")
enum DownloadResult
{
	SuccessDownloading UMETA(DisplayName = "Success"),
	DownloadFailed UMETA(DisplayName = "Download failed"),
	SaveFailed UMETA(DisplayName = "Save failed"),
	DirectoryCreationFailed UMETA(DisplayName = "Directory creation failed")
};

/**
 * Declare delegate which will be called during the download process. Divide "Bytes Received" by "Content Length" to get the download percentage
 */
DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnFilesDownloaderProgress, const int32, BytesSent, const int32, BytesReceived,
                                               const int32, ContentLength);

/**
 * Declare a delegate that will be called on the download result
 */
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnFilesDownloaderResult, TEnumAsByte < DownloadResult >, Result);

/**
 * Library for downloading files by direct link to the specified folder
 */
UCLASS(BlueprintType, Category = "Runtime Files Downloader")
class PROMETHPLUGIN_API URuntimeFilesDownloaderLibrary : public UObject
{
	GENERATED_BODY()

public:
	/**
	 * Bind to know when the download is on progress.
	 */
	UPROPERTY(BlueprintAssignable, Category = "Runtime Files Downloader")
	FOnFilesDownloaderProgress OnProgress;

	/**
	 * Bind to know when the download is complete (even if it fails)
	 */
	UPROPERTY(BlueprintAssignable, Category = "Runtime Files Downloader")
	FOnFilesDownloaderResult OnResult;

	/**
	 * URL where to start downloading the file
	 */
	UPROPERTY(BlueprintReadOnly, Category = "Runtime Files Downloader")
	FString FileURL;

	/**
	 * The path where to save the downloaded file
	 */
	UPROPERTY(BlueprintReadOnly, Category = "Runtime Files Downloader")
	FString FileSavePath;

	/**
	 * Instantiates a Files Downloader object, starts downloading and saves it when done
	 *
	 * @return The RuntimeFilesDownloader object. Bind to it's OnResult event to know when it is in the process of downloading and has been downloaded
	 */
	UFUNCTION(BlueprintCallable, Category = "Runtime Files Downloader")
	static URuntimeFilesDownloaderLibrary* CreateDownloader();

	/**
	 * Starts downloading a file and saves it when done
	 *
	 * @param URL The file URL to be downloaded
	 * @param SavePath The absolute path and file name to save the downloaded file
	 * @param TimeOut Maximum waiting time in case of zero download progress, in seconds
	 * @return Whether the download was started successfully or not
	 */
	UFUNCTION(BlueprintCallable, Category = "Runtime Files Downloader")
		 bool DownloadFile(const FString& URL, const FString& SavePath, float TimeOut = 5);

private:
	/**
	 * File downloading progress internal callback
	 */
	void OnProgress_Internal(FHttpRequestPtr Request, int32 BytesSent, int32 BytesReceived);

	/**
	 * File downloading finished internal callback
	 */
	void OnReady_Internal(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful);
};
