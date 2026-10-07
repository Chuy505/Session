#pragma once
#include "CoreMinimal.h"
#include "ETrackedTargetTextureType.generated.h"

UENUM(BlueprintType)
enum class ETrackedTargetTextureType : uint8 {
    TTTT_Undefined,
    TTTT_QuestionMark,
    TTTT_Transit,
    TTTT_QuestLocation,
    TTTT_QuestArea,
    TTTT_QuestObjectPlacement,
    TTTT_Skateshop,
};

