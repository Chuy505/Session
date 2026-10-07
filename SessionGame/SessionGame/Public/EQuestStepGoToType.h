#pragma once
#include "CoreMinimal.h"
#include "EQuestStepGoToType.generated.h"

UENUM()
enum class EQuestStepGoToType : int32 {
    QSGTT_Any,
    QSGTT_OnBoardOnly,
    QSGTT_OffBoardOnly,
};

