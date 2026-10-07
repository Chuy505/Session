#pragma once
#include "CoreMinimal.h"
#include "ESpecialDiceRollTypes.generated.h"

UENUM(BlueprintType)
enum class ESpecialDiceRollTypes : uint8 {
    SDR_Undefined,
    SDR_SameFour,
    SDR_Four,
    SDR_Three,
    SDR_OneOrTwo,
    SDR_Zero,
};

