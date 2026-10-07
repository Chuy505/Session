#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TickFunction -FallbackName=TickFunction
#include "SkaterMovementComponentPostPhysicsTickFunction.generated.h"

USTRUCT(BlueprintType)
struct FSkaterMovementComponentPostPhysicsTickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    SESSIONGAME_API FSkaterMovementComponentPostPhysicsTickFunction();
};

template<>
struct TStructOpsTypeTraits<FSkaterMovementComponentPostPhysicsTickFunction> : public TStructOpsTypeTraitsBase2<FSkaterMovementComponentPostPhysicsTickFunction>
{
    enum
    {
        WithCopy = false
    };
};

