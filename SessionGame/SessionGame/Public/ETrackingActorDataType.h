#pragma once
#include "CoreMinimal.h"
#include "ETrackingActorDataType.generated.h"

UENUM(BlueprintType)
enum class ETrackingActorDataType : uint8 {
    TADT_Undefined,
    TADT_LoadLevelTrigger,
    TADT_PlacedObject,
    TADT_PlacedObjectActionTriggerBox,
    TADT_QuestGiver,
    TADT_QuestLocation,
    TADT_SkateEventLocationTriggerBox,
    TADT_TransitNode,
    TADT_SkateShop,
};

