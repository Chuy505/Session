#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "ERewardDeliveryType.h"
#include "QuestRewardDefinitionBase.generated.h"

UCLASS(Abstract, Blueprintable)
class SESSIONGAME_API UQuestRewardDefinitionBase : public UDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText _displayDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERewardDeliveryType _deliveryType;
    
public:
    UQuestRewardDefinitionBase();

};

