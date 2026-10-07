#pragma once
#include "CoreMinimal.h"
#include "EPedestrianWalkSpeed.generated.h"

UENUM(BlueprintType)
enum class EPedestrianWalkSpeed : uint8 {
    PWS_Stop,
    PWS_Walk,
    PWS_Run,
};

