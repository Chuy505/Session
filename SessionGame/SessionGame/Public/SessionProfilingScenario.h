#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=TRX -ObjectName=TRXProfilingScenarioBase -FallbackName=TRXProfilingScenarioBase
#include "SessionProfilingScenario.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class SESSIONGAME_API USessionProfilingScenario : public UTRXProfilingScenarioBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeOfDay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool FreezeTime;
    
public:
    USessionProfilingScenario();

};

