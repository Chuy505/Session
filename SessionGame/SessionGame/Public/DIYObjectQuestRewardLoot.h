#pragma once
#include "CoreMinimal.h"
#include "DIYObjectQuestRewardLoot.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FDIYObjectQuestRewardLoot {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SelectionWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AActor> Item;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Quantity;
    
    SESSIONGAME_API FDIYObjectQuestRewardLoot();
};

