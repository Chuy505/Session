#pragma once
#include "CoreMinimal.h"
#include "EReplayKeyframeEditorAttributeType.generated.h"

UENUM(BlueprintType)
enum class EReplayKeyframeEditorAttributeType : uint8 {
    RKFEAT_Undefined,
    RKFEAT_FloatRange,
    RKFEAT_TextList,
};

