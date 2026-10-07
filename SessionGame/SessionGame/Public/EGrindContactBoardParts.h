#pragma once
#include "CoreMinimal.h"
#include "EGrindContactBoardParts.generated.h"

UENUM(BlueprintType)
enum class EGrindContactBoardParts : uint8 {
    EGCP_BoardBottomNose,
    EGCP_BoardBottomMiddle,
    EGCP_BoardBottomTail,
    EGCP_TruckBack,
    EGCP_TruckFront,
    EGCP_WheelsBack,
    EGCP_WheelsFront,
    EGCP_BoardTop,
    EGCP_BoardTopNose,
    EGCP_BoardTopMiddle,
    EGCP_BoardTopTail,
    EGCP_WheelsBackLeft,
    EGCP_WheelsBackRight,
    EGCP_WheelsFrontLeft,
    EGCP_WheelsFrontRight,
};

