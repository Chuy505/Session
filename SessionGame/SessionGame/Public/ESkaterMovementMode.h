#pragma once
#include "CoreMinimal.h"
#include "ESkaterMovementMode.generated.h"

UENUM(BlueprintType)
enum class ESkaterMovementMode : uint8 {
    MOVE_None,
    MOVE_Skateboarding,
    MOVE_SkateboardingInAir,
    MOVE_ToOnFoot,
    MOVE_ToSkateboarding,
    MOVE_Bailing,
    MOVE_Replay,
    MOVE_Intro,
};

