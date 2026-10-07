#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "SkateEventTracker.generated.h"

UCLASS(Blueprintable)
class SESSIONGAME_API ASkateEventTracker : public AActor {
    GENERATED_BODY()
public:
    ASkateEventTracker(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StartTracking();
    
    UFUNCTION(BlueprintCallable)
    void EndTracking();
    
};

