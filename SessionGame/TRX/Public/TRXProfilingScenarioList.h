#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "TRXProfilingScenarioList.generated.h"

class UTRXProfilingScenarioBase;

UCLASS(Blueprintable)
class TRX_API UTRXProfilingScenarioList : public UDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<FName, UTRXProfilingScenarioBase*> ProfilingScenarios;
    
public:
    UTRXProfilingScenarioList();

};

