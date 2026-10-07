#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "TRXProfilingDataProducerBase.generated.h"

UCLASS(Abstract, Blueprintable)
class TRX_API UTRXProfilingDataProducerBase : public UObject {
    GENERATED_BODY()
public:
    UTRXProfilingDataProducerBase();

};

