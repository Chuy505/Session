#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SaveGame -FallbackName=SaveGame
#include "ChallengesPersistentData.h"
#include "ChallengesSaveGame.generated.h"

UCLASS(Blueprintable)
class SESSIONGAME_API UChallengesSaveGame : public USaveGame {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChallengesPersistentData ChallengesData;
    
    UChallengesSaveGame();

};

