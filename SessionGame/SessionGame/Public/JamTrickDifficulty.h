#pragma once
#include "CoreMinimal.h"
#include "EEventLineTrickRotationType.h"
#include "EJamTrickDifficultyLevel.h"
#include "JamTrickDifficulty.generated.h"

USTRUCT(BlueprintType)
struct FJamTrickDifficulty {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EJamTrickDifficultyLevel BaseTrickDifficulty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EEventLineTrickRotationType, EJamTrickDifficultyLevel> RotationsDifficulty;
    
    SESSIONGAME_API FJamTrickDifficulty();
};

