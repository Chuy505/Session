#pragma once
#include "CoreMinimal.h"
#include "QuestRewardDefinitionBase.h"
#include "SponsorshipQuestRewardDefinition.generated.h"

UCLASS(Blueprintable)
class SESSIONGAME_API USponsorshipQuestRewardDefinition : public UQuestRewardDefinitionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName _companyName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 _discount;
    
public:
    USponsorshipQuestRewardDefinition();

};

