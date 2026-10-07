#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SaveGame -FallbackName=SaveGame
#include "NewsPersistentData.h"
#include "NewsSaveGame.generated.h"

UCLASS(Blueprintable)
class SESSIONGAME_API UNewsSaveGame : public USaveGame {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNewsPersistentData NewsData;
    
    UNewsSaveGame();

};

