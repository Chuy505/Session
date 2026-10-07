#pragma once
#include "CoreMinimal.h"
#include "EBoardRotationSpeedMode.generated.h"

UENUM(BlueprintType)
enum class EBoardRotationSpeedMode : uint8 {
    BRSMODE_Undefined,
    BRSMODE_Auto,
    BRSMODE_Speed,
};

