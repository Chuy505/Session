#pragma once
#include "CoreMinimal.h"
#include "GearQuestRewardLoot.h"
#include "QuestRewardDefinitionBase.h"
#include "GearQuestRewardDefinition.generated.h"

UCLASS(Blueprintable)
class SESSIONGAME_API UGearQuestRewardDefinition : public UQuestRewardDefinitionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool _randomize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGearQuestRewardLoot> _gearList;
    
public:
    UGearQuestRewardDefinition();

};

