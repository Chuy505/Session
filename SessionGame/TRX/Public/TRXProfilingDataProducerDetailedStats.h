#pragma once
#include "CoreMinimal.h"
#include "TRXProfilingDataProducerBase.h"
#include "TRXProfilingDataProducerDetailedStats.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class TRX_API UTRXProfilingDataProducerDetailedStats : public UTRXProfilingDataProducerBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> StatsGroupsToRecord;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SkipZeroStats;
    
public:
    UTRXProfilingDataProducerDetailedStats();

};

