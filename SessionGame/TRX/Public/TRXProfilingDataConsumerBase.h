#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "TRXProfilingDataConsumerBase.generated.h"

UCLASS(Abstract, Blueprintable)
class TRX_API UTRXProfilingDataConsumerBase : public UObject {
    GENERATED_BODY()
public:
    UTRXProfilingDataConsumerBase();

};

