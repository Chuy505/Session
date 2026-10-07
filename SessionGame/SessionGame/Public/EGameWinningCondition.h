#pragma once
#include "CoreMinimal.h"
#include "EGameWinningCondition.generated.h"

UENUM(BlueprintType)
enum class EGameWinningCondition : uint8 {
    GWC_Undefined,
    GWC_Classic,
    GWC_FirstTo,
};

