#pragma once
#include "CoreMinimal.h"
#include "EGrindDirectionScoringMethod.generated.h"

UENUM(BlueprintType)
enum class EGrindDirectionScoringMethod : uint8 {
    GDSM_Undefined,
    GDSM_AbsoluteValue,
    GDSM_Clamped,
};

