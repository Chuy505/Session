#pragma once
#include "CoreMinimal.h"
#include "ETelemetryReplayEditorAction.generated.h"

UENUM()
enum class ETelemetryReplayEditorAction : int32 {
    ETREA_Undifined,
    ETREA_Open,
    ETREA_FilmerMode,
    ETREA_KeyframeAdded,
    ETREA_KeyframeEdit,
    ETREA_KeyframeDelete,
};

