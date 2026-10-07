#pragma once
#include "CoreMinimal.h"
#include "ECaspersMode.generated.h"

UENUM(BlueprintType)
enum class ECaspersMode : uint8 {
    CM_Disabled,
    CM_Easy,
    CM_Advanced,
};

