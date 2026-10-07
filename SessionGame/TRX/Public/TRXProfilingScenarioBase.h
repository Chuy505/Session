#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "TRXProfilingScenarioBase.generated.h"

class UWorld;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class TRX_API UTRXProfilingScenarioBase : public UObject {
    GENERATED_BODY()
public:
    UTRXProfilingScenarioBase();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void TearDownScenario(UWorld* World);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetupScenario(UWorld* World);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FString GetScenarioName() const;
    
};

