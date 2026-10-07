#pragma once
#include "CoreMinimal.h"
#include "EBoardControlMode.generated.h"

UENUM(BlueprintType)
enum class EBoardControlMode : uint8 {
    BCMODE_Undefined,
    BCMODE_Auto,
    BCMODE_Manual,
};

