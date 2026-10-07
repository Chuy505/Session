#pragma once
#include "CoreMinimal.h"
#include "EDifficultyMode.generated.h"

UENUM(BlueprintType)
enum class EDifficultyMode : uint8 {
    DM_Undefined,
    DM_Normal,
    DM_Default,
    DM_Hardcore,
    DM_Custom,
    DM_Assisted,
    DM_Easy,
    DM_Legacy,
};

