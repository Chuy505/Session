#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SaveGame -FallbackName=SaveGame
#include "MapLayoutPersistentData.h"
#include "MapLayoutSaveGame.generated.h"

UCLASS(Blueprintable)
class SESSIONGAME_API UMapLayoutSaveGame : public USaveGame {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMapLayoutPersistentData MapLayoutData;
    
    UMapLayoutSaveGame();

};

