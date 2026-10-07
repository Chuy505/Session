#pragma once
#include "CoreMinimal.h"
#include "SkaterInstanceInventoryPersistentData.h"
#include "PlayerInventoryPersistentData.generated.h"

USTRUCT(BlueprintType)
struct FPlayerInventoryPersistentData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Version;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrencyAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FSkaterInstanceInventoryPersistentData> SkaterInstanceDatas;
    
    SESSIONGAME_API FPlayerInventoryPersistentData();
};

