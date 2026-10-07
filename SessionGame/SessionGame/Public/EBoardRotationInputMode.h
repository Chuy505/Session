#pragma once
#include "CoreMinimal.h"
#include "EBoardRotationInputMode.generated.h"

UENUM(BlueprintType)
enum class EBoardRotationInputMode : uint8 {
    BRIMODE_Undefined,
    BRIMODE_Normal,
    BRIMODE_Small,
};

