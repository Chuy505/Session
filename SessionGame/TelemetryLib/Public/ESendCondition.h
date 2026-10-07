#pragma once
#include "CoreMinimal.h"
#include "ESendCondition.generated.h"

UENUM(BlueprintType)
enum class ESendCondition : uint8 {
    ESC_Instant,
    ESC_Timed,
    ESC_Byte,
};

