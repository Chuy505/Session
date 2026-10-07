#pragma once
#include "CoreMinimal.h"
#include "ETRXSteamFloatingGamepadTextInputMode.generated.h"

UENUM(BlueprintType)
enum class ETRXSteamFloatingGamepadTextInputMode : uint8 {
    SingleLine,
    MultipleLines,
    Email,
    Numeric,
};

