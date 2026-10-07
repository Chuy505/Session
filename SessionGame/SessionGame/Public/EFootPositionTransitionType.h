#pragma once
#include "CoreMinimal.h"
#include "EFootPositionTransitionType.generated.h"

UENUM(BlueprintType)
enum class EFootPositionTransitionType : uint8 {
    TRANS_None,
    TRANS_REG_TO_SWT,
    TRANS_SWT_TO_REG,
};

