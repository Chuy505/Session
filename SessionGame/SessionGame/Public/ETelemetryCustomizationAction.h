#pragma once
#include "CoreMinimal.h"
#include "ETelemetryCustomizationAction.generated.h"

UENUM()
enum class ETelemetryCustomizationAction : int32 {
    ETCA_Undifined,
    ETCA_Buy,
    ETCA_BuyAndEquip,
    ETCA_Sell,
    ETCA_Equip,
    ETCA_WheelsFlip,
};

