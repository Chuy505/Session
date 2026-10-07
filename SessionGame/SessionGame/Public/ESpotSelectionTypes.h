#pragma once
#include "CoreMinimal.h"
#include "ESpotSelectionTypes.generated.h"

UENUM(BlueprintType)
enum class ESpotSelectionTypes : uint8 {
    SST_Undefined,
    SST_SpotSession,
    SST_TurnBased,
    SST_RoundWinner,
};

