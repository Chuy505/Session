#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SaveGame -FallbackName=SaveGame
#include "ObjectPlacementPersistentData.h"
#include "ObjectPlacementSaveGame.generated.h"

UCLASS(Blueprintable)
class SESSIONGAME_API UObjectPlacementSaveGame : public USaveGame {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FObjectPlacementPersistentData ObjectPlacementData;
    
    UObjectPlacementSaveGame();

};

