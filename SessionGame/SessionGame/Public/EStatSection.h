#pragma once
#include "CoreMinimal.h"
#include "EStatSection.generated.h"

UENUM(BlueprintType)
enum class EStatSection : uint8 {
    SS_Undefined,
    SS_Global,
    SS_FlipTricks,
    SS_GrindsOrSlides,
};

