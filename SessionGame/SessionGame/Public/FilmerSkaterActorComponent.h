#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "FilmerSkaterActorComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SESSIONGAME_API UFilmerSkaterActorComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UFilmerSkaterActorComponent(const FObjectInitializer& ObjectInitializer);

};

