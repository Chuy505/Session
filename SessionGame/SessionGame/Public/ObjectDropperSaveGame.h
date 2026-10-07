#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SaveGame -FallbackName=SaveGame
#include "ObjectDropperPersistentData.h"
#include "ObjectDropperSaveGame.generated.h"

UCLASS(Blueprintable)
class SESSIONGAME_API UObjectDropperSaveGame : public USaveGame {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FObjectDropperPersistentData ObjectDropperData;
    
    UObjectDropperSaveGame();

};

