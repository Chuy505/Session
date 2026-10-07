#pragma once
#include "CoreMinimal.h"
#include "EAudioReplayComponentMode.generated.h"

UENUM(BlueprintType)
enum class EAudioReplayComponentMode : uint8 {
    ARCM_RecordEvents,
    ARCM_RecordRaw,
};

