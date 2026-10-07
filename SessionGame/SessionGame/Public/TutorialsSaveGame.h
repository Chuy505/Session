#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SaveGame -FallbackName=SaveGame
#include "TutorialsPersistentData.h"
#include "TutorialsSaveGame.generated.h"

UCLASS(Blueprintable)
class SESSIONGAME_API UTutorialsSaveGame : public USaveGame {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTutorialsPersistentData TutorialsData;
    
    UTutorialsSaveGame();

};

