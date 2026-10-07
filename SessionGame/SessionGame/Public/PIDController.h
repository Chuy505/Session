#pragma once
#include "CoreMinimal.h"
#include "PIDControllerBase.h"
#include "PIDController.generated.h"

USTRUCT(BlueprintType)
struct SESSIONGAME_API FPIDController : public FPIDControllerBase {
    GENERATED_BODY()
public:
    FPIDController();
};

