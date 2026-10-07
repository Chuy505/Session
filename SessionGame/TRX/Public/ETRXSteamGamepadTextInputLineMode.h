#pragma once
#include "CoreMinimal.h"
#include "ETRXSteamGamepadTextInputLineMode.generated.h"

UENUM(BlueprintType)
enum class ETRXSteamGamepadTextInputLineMode : uint8 {
    SingleLine,
    MultipleLines,
};

