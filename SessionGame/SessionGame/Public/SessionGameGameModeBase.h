#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameModeBase -FallbackName=GameModeBase
#include "SessionGameGameModeBase.generated.h"

UCLASS(Blueprintable, NonTransient)
class SESSIONGAME_API ASessionGameGameModeBase : public AGameModeBase {
    GENERATED_BODY()
public:
    ASessionGameGameModeBase(const FObjectInitializer& ObjectInitializer);

};

