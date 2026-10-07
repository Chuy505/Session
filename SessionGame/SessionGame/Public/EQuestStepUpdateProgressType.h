#pragma once
#include "CoreMinimal.h"
#include "EQuestStepUpdateProgressType.generated.h"

UENUM(BlueprintType)
enum class EQuestStepUpdateProgressType : uint8 {
    QSUPT_StepCount,
    QSUPT_StepMetric,
    QSUPT_StepFailed,
    QSUPT_StepFailedAndLostProgress,
};

