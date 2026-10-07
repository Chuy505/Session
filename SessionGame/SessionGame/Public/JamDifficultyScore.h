#pragma once
#include "CoreMinimal.h"
#include "JamDifficultyScore.generated.h"

USTRUCT(BlueprintType)
struct FJamDifficultyScore {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BaseScore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RepeatedTrickScore;
    
    SESSIONGAME_API FJamDifficultyScore();
};

