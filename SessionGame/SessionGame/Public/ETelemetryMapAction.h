#pragma once
#include "CoreMinimal.h"
#include "ETelemetryMapAction.generated.h"

UENUM()
enum class ETelemetryMapAction : int32 {
    ETMA_Undifined,
    ETMA_Enter,
    ETMA_Skating,
    ETMA_Exit,
};

