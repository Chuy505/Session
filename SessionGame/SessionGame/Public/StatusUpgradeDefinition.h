#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "ESessionPlayerStatus.h"
#include "QuestRewardChoice.h"
#include "StatusUpgradeDefinition.generated.h"

class UQuestRewardDefinitionBase;

UCLASS(Blueprintable)
class SESSIONGAME_API UStatusUpgradeDefinition : public UDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESessionPlayerStatus NewPlayerStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UQuestRewardDefinitionBase*> GivenRewards;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FQuestRewardChoice> ChoiceRewards;
    
public:
    UStatusUpgradeDefinition();

};

