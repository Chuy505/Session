#pragma once
#include "CoreMinimal.h"
#include "DIYObjectQuestRewardLoot.h"
#include "QuestRewardDefinitionBase.h"
#include "DIYObjectQuestRewardDefinition.generated.h"

UCLASS(Blueprintable)
class SESSIONGAME_API UDIYObjectQuestRewardDefinition : public UQuestRewardDefinitionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool _randomize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDIYObjectQuestRewardLoot> _DIYObjectList;
    
public:
    UDIYObjectQuestRewardDefinition();

};

