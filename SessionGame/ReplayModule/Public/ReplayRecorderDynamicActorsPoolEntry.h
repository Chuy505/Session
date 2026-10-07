#pragma once
#include "CoreMinimal.h"
#include "ReplayRecorderDynamicActorsPoolEntry.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FReplayRecorderDynamicActorsPoolEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Actor;
    
    REPLAYMODULE_API FReplayRecorderDynamicActorsPoolEntry();
};

