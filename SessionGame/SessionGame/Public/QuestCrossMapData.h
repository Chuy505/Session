#pragma once
#include "CoreMinimal.h"
#include "QuestStepCrossMapData.h"
#include "QuestCrossMapData.generated.h"

USTRUCT(BlueprintType)
struct FQuestCrossMapData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FQuestStepCrossMapData> QuestStepsData;
    
    SESSIONGAME_API FQuestCrossMapData();
};

