#pragma once
#include "CoreMinimal.h"
#include "ESessionPlayerStatus.generated.h"

UENUM(BlueprintType)
enum class ESessionPlayerStatus : uint8 {
    ShopSponsored,
    Flow,
    Am,
    Pro,
};

