#pragma once
#include "CoreMinimal.h"
#include "TRXAutomaticProfilingConfiguration.generated.h"

USTRUCT(BlueprintType)
struct FTRXAutomaticProfilingConfiguration {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeToWaitBeforeScreenshotInSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeToWaitAfterScreenshotInSeconds;
    
    TRX_API FTRXAutomaticProfilingConfiguration();
};

