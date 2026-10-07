#pragma once
#include "CoreMinimal.h"
#include "ERevertDirection.generated.h"

UENUM(BlueprintType)
enum class ERevertDirection : uint8 {
    REVERTDIR_None,
    REVERTDIR_CW,
    REVERTDIR_CCW,
};

