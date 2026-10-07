#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SaveGame -FallbackName=SaveGame
#include "GeneralStatsPersistentData.h"
#include "OnBoardStatsPersistentData.h"
#include "StatsSaveGame.generated.h"

UCLASS(Blueprintable)
class SESSIONGAME_API UStatsSaveGame : public USaveGame {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBoardStatsPersistentData OnBoardStats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGeneralStatsPersistentData GeneralStats;
    
    UStatsSaveGame();

};

