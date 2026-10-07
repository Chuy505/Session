#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SaveGame -FallbackName=SaveGame
#include "QuestsPersistentData.h"
#include "QuestsSaveGame.generated.h"

UCLASS(Blueprintable)
class SESSIONGAME_API UQuestsSaveGame : public USaveGame {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuestsPersistentData QuestsData;
    
    UQuestsSaveGame();

};

