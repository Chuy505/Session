#pragma once
#include "CoreMinimal.h"
#include "TRXProfilingDataConsumerBase.h"
#include "TRXProfilingDataConsumerHumanReadable.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class TRX_API UTRXProfilingDataConsumerHumanReadable : public UTRXProfilingDataConsumerBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SortDataBeforePrint;
    
public:
    UTRXProfilingDataConsumerHumanReadable();

};

