#pragma once
#include "CoreMinimal.h"
#include "EFootPositionType.generated.h"

UENUM(BlueprintType)
enum class EFootPositionType : uint8 {
    None,
    Regular,
    Fakie,
    Nollie,
    Switch,
};

