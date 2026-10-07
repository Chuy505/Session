#pragma once
#include "CoreMinimal.h"
#include "ReplayRecorderDynamicActorsPoolEntry.h"
#include "ReplayRecorderDynamicActorsPool.generated.h"

USTRUCT(BlueprintType)
struct FReplayRecorderDynamicActorsPool {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FReplayRecorderDynamicActorsPoolEntry> Pool;
    
    REPLAYMODULE_API FReplayRecorderDynamicActorsPool();
};

