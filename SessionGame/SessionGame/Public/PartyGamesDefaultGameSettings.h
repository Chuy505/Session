#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "GameOfSkateDefaults.h"
#include "SkateOrDiceDefaults.h"
#include "SpotChallengeDefaults.h"
#include "PartyGamesDefaultGameSettings.generated.h"

UCLASS(Blueprintable)
class SESSIONGAME_API UPartyGamesDefaultGameSettings : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameOfSkateDefaults GameOfSkateDefaults;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSkateOrDiceDefaults SkateOrDiceDefaults;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpotChallengeDefaults SpotChallengeDefaults;
    
    UPartyGamesDefaultGameSettings();

};

