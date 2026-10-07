#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SaveGame -FallbackName=SaveGame
#include "GameOfSkatePersistentData.h"
#include "SkateOrDicePersistentData.h"
#include "SpotChallengePersistentData.h"
#include "PartyGamesSaveGame.generated.h"

UCLASS(Blueprintable)
class SESSIONGAME_API UPartyGamesSaveGame : public USaveGame {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameOfSkatePersistentData GameOfSkatePersistentData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSkateOrDicePersistentData SkateOrDicePersistentData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpotChallengePersistentData SpotChallengePersistentData;
    
    UPartyGamesSaveGame();

};

