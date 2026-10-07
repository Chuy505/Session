#pragma once
#include "CoreMinimal.h"
#include "ObjectDropperPickableObject.h"
#include "ObjectDropperStorableObject.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SESSIONGAME_API UObjectDropperStorableObject : public UObjectDropperPickableObject {
    GENERATED_BODY()
public:
    UObjectDropperStorableObject(const FObjectInitializer& ObjectInitializer);

};

