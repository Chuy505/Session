#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "FilmerDroneActorComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SESSIONGAME_API UFilmerDroneActorComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UFilmerDroneActorComponent(const FObjectInitializer& ObjectInitializer);

};

