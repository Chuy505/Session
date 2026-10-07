#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "StatTracker.generated.h"

UCLASS(Blueprintable)
class SESSIONGAME_API AStatTracker : public AActor {
    GENERATED_BODY()
public:
    AStatTracker(const FObjectInitializer& ObjectInitializer);

};

