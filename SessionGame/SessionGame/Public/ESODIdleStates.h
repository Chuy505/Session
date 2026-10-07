#pragma once
#include "CoreMinimal.h"
#include "ESODIdleStates.generated.h"

UENUM(BlueprintType)
enum class ESODIdleStates : uint8 {
    SOD_Undefined,
    SOD_Normal,
    SOD_ErrorChecking,
    SOD_DiceRoll,
    SOD_GiveOrTake,
    SOD_StartRound,
};

