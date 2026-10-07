#pragma once
#include "CoreMinimal.h"
#include "ECameraLensType.generated.h"

UENUM(BlueprintType)
enum class ECameraLensType : uint8 {
    CLT_None,
    CLT_Default,
    CLT_FisheyeWide,
    CLT_FisheyeConstrained,
    CLT_4_3,
    CLT_Last,
};

