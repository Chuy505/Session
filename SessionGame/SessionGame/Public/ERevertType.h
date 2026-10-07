#pragma once
#include "CoreMinimal.h"
#include "ERevertType.generated.h"

UENUM(BlueprintType)
enum class ERevertType : uint8 {
    REVERT_None,
    REVERT_FrontSide,
    REVERT_BackSide,
    REVERT_Any,
};

