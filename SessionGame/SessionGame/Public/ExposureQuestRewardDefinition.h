#pragma once
#include "CoreMinimal.h"
#include "QuestRewardDefinitionBase.h"
#include "ExposureQuestRewardDefinition.generated.h"

UCLASS(Blueprintable)
class SESSIONGAME_API UExposureQuestRewardDefinition : public UQuestRewardDefinitionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 _minExposure;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 _maxExposure;
    
public:
    UExposureQuestRewardDefinition();

};

