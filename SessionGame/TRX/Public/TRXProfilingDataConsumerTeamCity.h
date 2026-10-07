#pragma once
#include "CoreMinimal.h"
#include "TRXProfilingDataConsumerBase.h"
#include "TRXProfilingDataConsumerTeamCity.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class TRX_API UTRXProfilingDataConsumerTeamCity : public UTRXProfilingDataConsumerBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> LLMTagsToConsider;
    
public:
    UTRXProfilingDataConsumerTeamCity();

};

