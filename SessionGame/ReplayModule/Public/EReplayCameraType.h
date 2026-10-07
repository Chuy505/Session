#pragma once
#include "CoreMinimal.h"
#include "EReplayCameraType.generated.h"

UENUM(BlueprintType)
enum class EReplayCameraType : uint8 {
    RCT_None,
    RCT_Orbit,
    RCT_Free,
    RCT_Tripod,
    RCT_RecordedCamera,
    RCT_LastCyclable,
    RCT_Keyframe,
};

