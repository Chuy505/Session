#pragma once
#include "CoreMinimal.h"
#include "EEventLineTrickRotationType.generated.h"

UENUM(BlueprintType)
enum class EEventLineTrickRotationType : uint8 {
    ELTRT_None,
    ELTRT_Frontside,
    ELTRT_Frontside360,
    ELTRT_Frontside540,
    ELTRT_Frontside720,
    ELTRT_Frontside900,
    ELTRT_Frontside1080,
    ELTRT_Backside,
    ELTRT_Backside360,
    ELTRT_Backside540,
    ELTRT_Backside720,
    ELTRT_Backside900,
    ELTRT_Backside1080,
    ELTRT_Any,
};

