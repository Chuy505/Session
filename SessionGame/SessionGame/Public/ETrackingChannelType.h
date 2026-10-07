#pragma once
#include "CoreMinimal.h"
#include "ETrackingChannelType.generated.h"

UENUM(BlueprintType)
enum class ETrackingChannelType : uint8 {
    TCT_Default,
    TCT_Skateshop,
    TCT_Unique,
};

