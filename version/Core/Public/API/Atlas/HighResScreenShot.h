#pragma once
#include "../Base.h"
#include <API/UE/Containers/TIndirectArray.h>

struct  FHighResScreenshotConfig
{
	FIntRect UnscaledCaptureRegion;
	FIntRect CaptureRegion;
	float ResolutionMultiplier;
	float ResolutionMultiplierScale;
	bool bMaskEnabled;
	bool bDumpBufferVisualizationTargets;
	TWeakPtr<FSceneViewport, 0> TargetViewport;
	bool bDisplayCaptureRegion;
	bool bCaptureHDR;
	TSharedPtr<IImageWrapper, 0> ImageCompressorLDR;
	TSharedPtr<IImageWrapper, 0> ImageCompressorHDR;
};


void  FHighResScreenshotConfig::Init(FHighResScreenshotConfig* this); // idb
char  FHighResScreenshotConfig::MergeMaskIntoAlpha(FHighResScreenshotConfig* this, TArray<FColor, FDefaultAllocator>* InBitmap);
char  FHighResScreenshotConfig::ParseConsoleCommand(FHighResScreenshotConfig* this, FString* InCmd, FOutputDevice* Ar);