#pragma once
#include "CoreMinimal.h"
#include "EQuickShovesMode.generated.h"

UENUM(BlueprintType)
enum class EQuickShovesMode : uint8 {
    QSM_Off,
    QSM_On,
    QSM_GrindsOnly,
};

