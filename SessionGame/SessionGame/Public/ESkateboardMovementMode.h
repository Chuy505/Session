#pragma once
#include "CoreMinimal.h"
#include "ESkateboardMovementMode.generated.h"

UENUM(BlueprintType)
enum class ESkateboardMovementMode : uint8 {
    MOVE_None,
    MOVE_Skateboarding,
    MOVE_Grinding,
    MOVE_Falling,
    MOVE_ToOnFoot,
    MOVE_OnFoot,
    MOVE_Throwdown,
    MOVE_ToSkateboarding,
    MOVE_Bailing,
    MOVE_Replay,
    MOVE_Intro,
};

