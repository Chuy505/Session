#pragma once
#include "CoreMinimal.h"
#include "EGrabState.generated.h"

UENUM(BlueprintType)
enum class EGrabState : uint8 {
    None,
    Nose,
    Melon,
    Mute,
    ChickenSalad,
    Taipan,
    SeatBelt,
    FrontHand_LAST,
    Tail = 100,
    StaleFish,
    Indy,
    RoastBeef,
    CanadianBacon,
    Crail,
    RearHand_LAST,
};

