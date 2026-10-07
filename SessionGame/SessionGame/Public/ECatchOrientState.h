#pragma once
#include "CoreMinimal.h"
#include "ECatchOrientState.generated.h"

UENUM(BlueprintType)
enum class ECatchOrientState : uint8 {
    None,
    FrontFoot,
    BackFoot,
    BothFeetFrontFoot,
    BothFeetBackFoot,
    BothFeet,
    Shifties,
    DarkSlidesBothFeetFrontFoot,
    DarkSlidesBothFeetBackFoot,
    DarkSlidesBothFeet,
    ShiftiesNose,
    ShiftiesTail,
    PrimoBothFeet,
};

