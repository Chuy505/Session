#pragma once
#include "CoreMinimal.h"
#include "ClothesContactPartDirtRates.generated.h"

USTRUCT(BlueprintType)
struct FClothesContactPartDirtRates {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float _dirtDecayRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float _dirtDecayBurst;
    
public:
    SESSIONGAME_API FClothesContactPartDirtRates();
};

