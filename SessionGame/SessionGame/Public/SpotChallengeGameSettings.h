#pragma once
#include "CoreMinimal.h"
#include "BaseGameSettings.h"
#include "EGameWinningCondition.h"
#include "ESpotSelectionTypes.h"
#include "SpotChallengeGameSettings.generated.h"

USTRUCT(BlueprintType)
struct FSpotChallengeGameSettings : public FBaseGameSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TimeLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BailLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FirstTo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESpotSelectionTypes SpotSelectionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGameWinningCondition WinningCondition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool LastChanceEnabled;
    
    SESSIONGAME_API FSpotChallengeGameSettings();
};

