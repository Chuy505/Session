#pragma once
#include "CoreMinimal.h"
#include "ETRXControllerType.generated.h"

UENUM(BlueprintType)
enum class ETRXControllerType : uint8 {
    KeyboardAndMouse,
    XboxOneController,
    XSXController,
    PS4Controller,
    PS5Controller,
    SwitchJoyCon,
    SwitchProController,
};

