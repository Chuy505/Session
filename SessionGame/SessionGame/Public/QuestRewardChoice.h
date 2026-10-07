#pragma once
#include "CoreMinimal.h"
#include "QuestRewardChoice.generated.h"

class UQuestRewardDefinitionBase;

USTRUCT(BlueprintType)
struct FQuestRewardChoice {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UQuestRewardDefinitionBase*> RewardChoices;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumberOfRewards;
    
    SESSIONGAME_API FQuestRewardChoice();
};

