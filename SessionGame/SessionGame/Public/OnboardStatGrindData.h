#pragma once
#include "CoreMinimal.h"
#include "OnboardStatGrindData.generated.h"

USTRUCT(BlueprintType)
struct FOnboardStatGrindData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Count;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDistance;
    
    SESSIONGAME_API FOnboardStatGrindData();
};

