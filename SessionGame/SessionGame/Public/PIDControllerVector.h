#pragma once
#include "CoreMinimal.h"
#include "PIDControllerBase.h"
#include "PIDControllerVector.generated.h"

USTRUCT(BlueprintType)
struct SESSIONGAME_API FPIDControllerVector : public FPIDControllerBase {
    GENERATED_BODY()
public:
    FPIDControllerVector();
};

