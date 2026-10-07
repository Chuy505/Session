#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "SessionDynamicSky.generated.h"

UCLASS(Blueprintable)
class SESSIONGAME_API ASessionDynamicSky : public AActor {
    GENERATED_BODY()
public:
    ASessionDynamicSky(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetTimeOfDay(float newTimeOfDay);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetDayNightCycleOn(bool newIsOn);
    
    UFUNCTION(BlueprintCallable)
    void NativeOnToggleNightLights(bool enableNightLights);
    
};

