#pragma once
#include "CoreMinimal.h"
#include "EGrabState.h"
#include "GrabDefinition.generated.h"

USTRUCT(BlueprintType)
struct FGrabDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGrabState GrabState;
    
    SESSIONGAME_API FGrabDefinition();
};

