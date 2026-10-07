#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TickFunction -FallbackName=TickFunction
#include "SkateboardExMovementComponentPostPhysicsTickFunction.generated.h"

USTRUCT(BlueprintType)
struct FSkateboardExMovementComponentPostPhysicsTickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    SESSIONGAME_API FSkateboardExMovementComponentPostPhysicsTickFunction();
};

template<>
struct TStructOpsTypeTraits<FSkateboardExMovementComponentPostPhysicsTickFunction> : public TStructOpsTypeTraitsBase2<FSkateboardExMovementComponentPostPhysicsTickFunction>
{
    enum
    {
        WithCopy = false
    };
};

