#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PlayerState -FallbackName=PlayerState
#include "SessionPlayerState.generated.h"

UCLASS(Blueprintable)
class SESSIONGAME_API ASessionPlayerState : public APlayerState {
    GENERATED_BODY()
public:
    ASessionPlayerState(const FObjectInitializer& ObjectInitializer);

};

