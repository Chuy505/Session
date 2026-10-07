#pragma once
#include "CoreMinimal.h"
#include "SpotChallengeGameSettings.h"
#include "SpotChallengePersistentData.generated.h"

USTRUCT(BlueprintType)
struct FSpotChallengePersistentData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Version;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpotChallengeGameSettings GameSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpotChallengeGameSettings CustomGameSettings;
    
    SESSIONGAME_API FSpotChallengePersistentData();
};

