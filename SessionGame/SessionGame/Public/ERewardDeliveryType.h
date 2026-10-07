#pragma once
#include "CoreMinimal.h"
#include "ERewardDeliveryType.generated.h"

UENUM(BlueprintType)
enum class ERewardDeliveryType : uint8 {
    RDT_Undefined,
    RDT_Give,
    RDT_SkateShopUnlocked,
    RDT_SkateShopVisibleOnly,
};

