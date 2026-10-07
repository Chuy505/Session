#pragma once
#include "CoreMinimal.h"
#include "QuestRewardLoot.generated.h"

class UQuestRewardDefinitionBase;

USTRUCT(BlueprintType)
struct FQuestRewardLoot {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SelectionWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UQuestRewardDefinitionBase* Item;
    
    SESSIONGAME_API FQuestRewardLoot();
};

