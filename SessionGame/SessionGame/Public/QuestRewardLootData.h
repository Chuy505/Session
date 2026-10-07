#pragma once
#include "CoreMinimal.h"
#include "ERewardDeliveryType.h"
#include "QuestRewardLootData.generated.h"

USTRUCT(BlueprintType)
struct FQuestRewardLootData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ItemName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ItemQuantity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERewardDeliveryType DeliveryType;
    
    SESSIONGAME_API FQuestRewardLootData();
};

