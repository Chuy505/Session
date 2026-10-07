#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ProgressionStat.generated.h"

UCLASS(Blueprintable)
class UProgressionStat : public UObject {
    GENERATED_BODY()
public:
    UProgressionStat();

    UFUNCTION(BlueprintCallable)
    void SetStat(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetProgressRatio(float newRatio);
    
    UFUNCTION(BlueprintCallable)
    void ModifyStat(float valueDelta);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetProgressRatio() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMinValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetFloorValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentValue() const;
    
};

