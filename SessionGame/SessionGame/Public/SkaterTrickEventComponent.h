#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "SkaterTrickEventComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SESSIONGAME_API USkaterTrickEventComponent : public UActorComponent {
    GENERATED_BODY()
public:
    USkaterTrickEventComponent(const FObjectInitializer& ObjectInitializer);

};

