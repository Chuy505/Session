#pragma once
#include "CoreMinimal.h"
#include "QuestRewardDefinitionBase.h"
#include "CurrencyQuestRewardDefinition.generated.h"

UCLASS(Blueprintable)
class SESSIONGAME_API UCurrencyQuestRewardDefinition : public UQuestRewardDefinitionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 _minAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 _maxAmount;
    
public:
    UCurrencyQuestRewardDefinition();

};

