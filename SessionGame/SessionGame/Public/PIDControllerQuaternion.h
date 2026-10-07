#pragma once
#include "CoreMinimal.h"
#include "PIDControllerBase.h"
#include "PIDControllerQuaternion.generated.h"

USTRUCT(BlueprintType)
struct SESSIONGAME_API FPIDControllerQuaternion : public FPIDControllerBase {
    GENERATED_BODY()
public:
    FPIDControllerQuaternion();
};

