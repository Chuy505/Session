#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SaveGame -FallbackName=SaveGame
#include "ExperimentalSettings.h"
#include "ExperimentalSaveGame.generated.h"

UCLASS(Blueprintable)
class SESSIONGAME_API UExperimentalSaveGame : public USaveGame {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FExperimentalSettings ExperimentalSettings;
    
    UExperimentalSaveGame();

};

