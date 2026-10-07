#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "SessionPhysicalDayNight.generated.h"

UCLASS(Blueprintable)
class SESSIONGAME_API ASessionPhysicalDayNight : public AActor {
    GENERATED_BODY()
public:
    ASessionPhysicalDayNight(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void NativeOnToggleNightLights(bool enableNightLights);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventSetDayNightCycleOn(bool newIsOn);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventOnSetTimeOfDay(float newTimeOfDay);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventOnSetSunAngle(float newSunAngle);
    
};

