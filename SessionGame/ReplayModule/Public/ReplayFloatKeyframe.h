#pragma once
#include "CoreMinimal.h"
#include "ReplayKeyframe.h"
#include "ReplayFloatKeyframe.generated.h"

USTRUCT(BlueprintType)
struct REPLAYMODULE_API FReplayFloatKeyframe : public FReplayKeyframe {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    FReplayFloatKeyframe();
};

