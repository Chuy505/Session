#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SaveGame -FallbackName=SaveGame
#include "ReplayEditorSettings.h"
#include "ReplayEditorSaveGame.generated.h"

UCLASS(Blueprintable)
class SESSIONGAME_API UReplayEditorSaveGame : public USaveGame {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReplayEditorSettings ReplayEditorSettings;
    
    UReplayEditorSaveGame();

};

