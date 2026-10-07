#pragma once
#include "CoreMinimal.h"
#include "EQuestFailBehavior.generated.h"

UENUM(BlueprintType)
enum class EQuestFailBehavior : uint8 {
    QFB_None,
    QFB_BackToFirstStep,
    QFB_BackToLastStep,
    QFB_ResetAllPreviousChallengesteps,
    QFB_ResetAllPreviousCheckpointsSteps,
    QFB_RestartQuest,
};

