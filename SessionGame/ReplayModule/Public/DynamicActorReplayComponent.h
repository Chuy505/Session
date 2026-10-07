#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "DynamicActorReplayComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class REPLAYMODULE_API UDynamicActorReplayComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UDynamicActorReplayComponent(const FObjectInitializer& ObjectInitializer);

};

