#pragma once
#include "CoreMinimal.h"
#include "EAutoRevertMode.generated.h"

UENUM(BlueprintType)
enum class EAutoRevertMode : uint8 {
    ARMODE_Disabled,
    ARMODE_OnBail,
    ARMODE_Always,
};

