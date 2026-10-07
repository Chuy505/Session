#pragma once
#include "CoreMinimal.h"
#include "ESkaterCameraModes.generated.h"

UENUM(BlueprintType)
enum class ESkaterCameraModes : uint8 {
    SCM_Undefined,
    SCM_OnBoard,
    SCM_FlatAir,
    SCM_SmallAir,
    SCM_BigAir,
    SCM_OnFoot,
    SCM_Ragdoll,
    SCM_Grind,
    SCM_Revert,
    SCM_Vert,
    SCM_Intro,
};

