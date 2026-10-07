#pragma once
#include "CoreMinimal.h"
#include "EQuestStepSkaterAction.generated.h"

UENUM()
enum class EQuestStepSkaterAction : int32 {
    QSSAF_None,
    QSSAF_BankLeft,
    QSSAF_BankRight,
    QSSAF_RotationOnGrinds,
};

