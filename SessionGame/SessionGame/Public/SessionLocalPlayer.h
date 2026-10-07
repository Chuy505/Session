#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=LocalPlayer -FallbackName=LocalPlayer
#include "SessionLocalPlayer.generated.h"

UCLASS(Blueprintable, NonTransient)
class SESSIONGAME_API USessionLocalPlayer : public ULocalPlayer {
    GENERATED_BODY()
public:
    USessionLocalPlayer();

};

