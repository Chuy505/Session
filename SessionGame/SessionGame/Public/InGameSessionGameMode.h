#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameModeBase -FallbackName=GameModeBase
#include "Templates/SubclassOf.h"
#include "InGameSessionGameMode.generated.h"

class AFilmerModeManager;
class APartyGamesManager;
class AReplayManager;
class UFadeInUI;

UCLASS(Blueprintable, NonTransient)
class SESSIONGAME_API AInGameSessionGameMode : public AGameModeBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFadeInUI> _fadeInUI_Blueprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AReplayManager> _replayManager_Blueprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFadeInUI* _fadeInWidgetInstance;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AFilmerModeManager> DefaultFilmerModeManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<APartyGamesManager> DefaultPartyGamesManager;
    
    AInGameSessionGameMode(const FObjectInitializer& ObjectInitializer);

};

