#pragma once
#include "CoreMinimal.h"
#include "EObjectDropperModes.generated.h"

UENUM(BlueprintType)
enum class EObjectDropperModes : uint8 {
    ODM_Inactive,
    ODM_Activate,
    ODM_Deactivate,
    ODM_SelectingObject,
    ODM_MovingObject,
    ODM_RotatingObject,
    ODM_MultiSelecting,
    ODM_SpawningObject,
};

