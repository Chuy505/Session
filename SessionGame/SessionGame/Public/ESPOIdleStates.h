#pragma once
#include "CoreMinimal.h"
#include "ESPOIdleStates.generated.h"

UENUM(BlueprintType)
enum class ESPOIdleStates : uint8 {
    SPO_Undefined,
    SPO_Normal,
    SPO_SettingRoundRules,
    SPO_StartRound,
    SPO_SelectingSpot,
    SPO_SelectingOneSpot,
};

