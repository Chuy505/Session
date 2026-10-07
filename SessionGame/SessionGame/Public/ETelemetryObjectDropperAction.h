#pragma once
#include "CoreMinimal.h"
#include "ETelemetryObjectDropperAction.generated.h"

UENUM()
enum class ETelemetryObjectDropperAction : int32 {
    ETODA_Undifined,
    ETODA_Open,
    ETODA_PlaceObject,
    ETODA_PickupObject,
    ETODA_RecallObject,
};

