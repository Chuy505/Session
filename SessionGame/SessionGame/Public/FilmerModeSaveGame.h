#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SaveGame -FallbackName=SaveGame
#include "FilmingPlayerSettings.h"
#include "FilmerModeSaveGame.generated.h"

UCLASS(Blueprintable)
class SESSIONGAME_API UFilmerModeSaveGame : public USaveGame {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFilmingPlayerSettings FilmingPlayerSettings;
    
    UFilmerModeSaveGame();

};

