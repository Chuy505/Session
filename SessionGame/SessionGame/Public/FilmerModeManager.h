#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "FilmingPlayerSetting.h"
#include "Templates/SubclassOf.h"
#include "FilmerModeManager.generated.h"

class AFilmerCharacter;
class AFilmerLocalPlayerController;
class AFilmerModeHUD;
class UFilmerModeSaveGame;
class UMenuPageDefinition;

UCLASS(Blueprintable)
class SESSIONGAME_API AFilmerModeManager : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AFilmerLocalPlayerController> DefaultFilmerLocalPlayerController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AFilmerCharacter> DefaultFilmerCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AFilmerModeHUD> DefaultFilmerModeHUD;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFilmerModeSaveGame> _defaultFilmerModeSaveGame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMenuPageDefinition* _filmerModeSettingsMenuPage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 _maxNumberOfControllers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 _maxNumberOfPlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFilmingPlayerSetting> _defaultFilmingPlayerSettings;
    
public:
    AFilmerModeManager(const FObjectInitializer& ObjectInitializer);

};

