#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "ObjectDropperPickableObject.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SESSIONGAME_API UObjectDropperPickableObject : public UActorComponent {
    GENERATED_BODY()
public:
    UObjectDropperPickableObject(const FObjectInitializer& ObjectInitializer);

};

