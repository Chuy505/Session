#pragma once
#include "CoreMinimal.h"
#include "EQuestGiverFlowType.generated.h"

UENUM(BlueprintType)
enum class EQuestGiverFlowType : uint8 {
    QGFT_Undefined,
    QGFT_Sequential,
    QGFT_Random,
};

