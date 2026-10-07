#pragma once
#include "CoreMinimal.h"
#include "EBoardFlipSpeedMode.generated.h"

UENUM(BlueprintType)
enum class EBoardFlipSpeedMode : uint8 {
    BFSMODE_Undefined,
    BFSMODE_Auto,
    BFSMODE_Speed,
    BFSMODE_Directional,
};

