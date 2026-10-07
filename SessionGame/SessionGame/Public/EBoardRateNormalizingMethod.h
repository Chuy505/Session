#pragma once
#include "CoreMinimal.h"
#include "EBoardRateNormalizingMethod.generated.h"

UENUM(BlueprintType)
enum class EBoardRateNormalizingMethod : uint8 {
    None,
    MatchFlipRate,
    MatchRotationRate,
};

