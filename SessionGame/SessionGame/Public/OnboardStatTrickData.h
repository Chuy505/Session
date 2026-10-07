#pragma once
#include "CoreMinimal.h"
#include "OnboardStatTrickData.generated.h"

USTRUCT(BlueprintType)
struct FOnboardStatTrickData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Count;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxHeight;
    
    SESSIONGAME_API FOnboardStatTrickData();
};

