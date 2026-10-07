#pragma once
#include "CoreMinimal.h"
#include "EReplayModuleReplayFileVersion.generated.h"

UENUM(BlueprintType)
enum class EReplayModuleReplayFileVersion : uint8 {
    Version_Old,
    Version_2_3,
    Version_2_4,
    Version_2_5,
    Version_2_6,
    Version_2_7,
    Version_2_8,
    Version_2_9,
    Version_2_10,
    Version_2_11,
    Version_2_12,
    Version_2_13,
    Version_2_14,
    Version_2_15,
    Version_2_16,
    Version_2_17,
    Version_Current = Version_2_17,
};

