#pragma once
#include "CoreMinimal.h"
#include "ClothesContactPartDirtRates.h"
#include "ClothesContactPartDecayRecord.generated.h"

USTRUCT(BlueprintType)
struct FClothesContactPartDecayRecord {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FClothesContactPartDirtRates _defaultDecay;
    
public:
    SESSIONGAME_API FClothesContactPartDecayRecord();
};

