#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameInstanceSubsystem -FallbackName=GameInstanceSubsystem
#include "TRXProfilingSubsystem.generated.h"

class UTRXProfilingDataConsumerBase;
class UTRXProfilingDataProducerBase;
class UTRXProfilingScenarioBase;
class UTRXProfilingScenarioList;

UCLASS(Blueprintable)
class TRX_API UTRXProfilingSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTRXProfilingScenarioList* ProfilingScenarioList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTRXProfilingScenarioBase* ActiveScenario;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UTRXProfilingDataProducerBase*> ActiveDataProducers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UTRXProfilingDataConsumerBase*> ActiveDataConsumers;
    
public:
    UTRXProfilingSubsystem();

    UFUNCTION(BlueprintCallable)
    void StopAutomaticProfilingSession();
    
    UFUNCTION(BlueprintCallable)
    void StartAutomaticProfilingSessionFromId(const FName& profilingScenarioId);
    
    UFUNCTION(BlueprintCallable)
    void StartAutomaticProfilingSession(UTRXProfilingScenarioBase* scenario);
    
    UFUNCTION(BlueprintCallable)
    void SetActiveProfilingCamera(int32 cameraConfigurationIndex);
    
    UFUNCTION(BlueprintCallable)
    void PreviewProfilingCameraDisplacement(int32 cameraConfigurationIndex);
    
    UFUNCTION(BlueprintCallable)
    void CyclePreviousProfilingCamera();
    
    UFUNCTION(BlueprintCallable)
    void CycleNextProfilingCamera();
    
};

