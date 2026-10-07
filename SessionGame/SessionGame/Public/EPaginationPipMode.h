#pragma once
#include "CoreMinimal.h"
#include "EPaginationPipMode.generated.h"

UENUM(BlueprintType)
enum class EPaginationPipMode : uint8 {
    Inactive,
    Active,
    Highlighted,
};

