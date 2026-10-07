#pragma once
#include "CoreMinimal.h"
#include "ETelemetryActionState.generated.h"

UENUM()
enum class ETelemetryActionState : int32 {
    ETA_Undifined,
    ETA_Started,
    ETA_Completed,
    ETA_Skipped,
    ETA_Failed,
    ETA_Replayed,
    ETA_ForceReplayed,
};

