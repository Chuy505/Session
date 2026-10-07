#pragma once
#include "CoreMinimal.h"
#include "EQuestStepCompletionType.generated.h"

UENUM(BlueprintType)
enum class EQuestStepCompletionType : uint8 {
    QSCT_Undefined,
    QSCT_Sequential,
    QSCT_AnyOrder,
};

