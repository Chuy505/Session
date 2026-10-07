#pragma once
#include "CoreMinimal.h"
#include "ESkateboardFlipDirection.generated.h"

UENUM(BlueprintType)
enum class ESkateboardFlipDirection : uint8 {
    SSD_None,
    SSD_Clockwise,
    SSD_CounterClockwise,
};

