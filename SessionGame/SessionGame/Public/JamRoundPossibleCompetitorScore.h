#pragma once
#include "CoreMinimal.h"
#include "JamRoundPossibleCompetitorScore.generated.h"

USTRUCT(BlueprintType)
struct FJamRoundPossibleCompetitorScore {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinPossibleRoundScore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxPossibleRoundScore;
    
    SESSIONGAME_API FJamRoundPossibleCompetitorScore();
};

