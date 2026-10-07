#pragma once
#include "CoreMinimal.h"
#include "PlayCinematicParameters.h"
#include "QuestStepReplays.generated.h"

USTRUCT(BlueprintType)
struct FQuestStepReplays {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool PlayReplayOnStepBegin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayCinematicParameters ReplayOnStepBegin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool PlayReplayOnStepEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayCinematicParameters ReplayOnStepEnd;
    
    SESSIONGAME_API FQuestStepReplays();
};

