#pragma once
#include "CoreMinimal.h"
#include "ReplayTag.generated.h"

USTRUCT(BlueprintType)
struct FReplayTag {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Time;
    
    REPLAYMODULE_API FReplayTag();
};

