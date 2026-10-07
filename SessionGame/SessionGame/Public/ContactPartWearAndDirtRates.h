#pragma once
#include "CoreMinimal.h"
#include "ContactPartWearAndDirtRates.generated.h"

USTRUCT(BlueprintType)
struct FContactPartWearAndDirtRates {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float _dirtDecayRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float _wearDecayRate;
    
public:
    SESSIONGAME_API FContactPartWearAndDirtRates();
};

