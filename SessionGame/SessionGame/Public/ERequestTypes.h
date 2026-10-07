#pragma once
#include "CoreMinimal.h"
#include "ERequestTypes.generated.h"

UENUM(BlueprintType)
enum class ERequestTypes : uint8 {
    ERT_UNDEFINED,
    ERT_DEFAULT,
    ERT_BUTTON,
    ERT_JOYSTICK = 4,
    ERT_SUBMIT = 8,
    ERT_MOUSE = 16,
    ERT_KEYBOARD = 32,
    ERT_START_INTERACTION = 64,
};

