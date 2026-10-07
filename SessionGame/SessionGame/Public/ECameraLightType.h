#pragma once
#include "CoreMinimal.h"
#include "ECameraLightType.generated.h"

UENUM(BlueprintType)
enum class ECameraLightType : uint8 {
    CLT_Off,
    CLT_On,
    CLT_Auto,
};

