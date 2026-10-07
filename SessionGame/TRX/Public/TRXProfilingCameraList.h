#pragma once
#include "CoreMinimal.h"
#include "TRXProfilingCameraConfiguration.h"
#include "TRXProfilingCameraList.generated.h"

USTRUCT(BlueprintType)
struct FTRXProfilingCameraList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTRXProfilingCameraConfiguration> Cameras;
    
    TRX_API FTRXProfilingCameraList();
};

