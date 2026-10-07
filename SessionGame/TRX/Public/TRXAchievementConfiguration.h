#pragma once
#include "CoreMinimal.h"
#include "TRXAchievementConfiguration.generated.h"

USTRUCT(BlueprintType)
struct FTRXAchievementConfiguration {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HasProgression;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ProgressionTargetValue;
    
    TRX_API FTRXAchievementConfiguration();
};

