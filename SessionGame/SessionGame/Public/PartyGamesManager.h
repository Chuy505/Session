#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "Templates/SubclassOf.h"
#include "PartyGamesManager.generated.h"

class AGameOfSkatePartyGame;
class ASkateOrDicePartyGame;
class ASpotChallengePartyGame;
class UDiceDefinitions;
class UMenuPageDefinition;
class UPartyGamesDefaultGameSettings;
class UPartyGamesSaveGame;

UCLASS(Blueprintable)
class SESSIONGAME_API APartyGamesManager : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AGameOfSkatePartyGame> DefaultGameOfSkatePartyGame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ASkateOrDicePartyGame> DefaultSkateOrDicePartyGame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ASpotChallengePartyGame> DefaultSpotChallengePartyGame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDiceDefinitions* _diceDefinitions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMenuPageDefinition* _partyGamesGameSettingsMenuPage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMenuPageDefinition* _stanceAssignmentMenuPage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMenuPageDefinition* _gamepadAssignmentMenuPage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPartyGamesDefaultGameSettings* _partyGamesDefaultGameSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPartyGamesSaveGame> DefaultPartyGamesSaveGame;
    
public:
    APartyGamesManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetNumberOfPlayers(int32 NumberOfPlayers);
    
    UFUNCTION(BlueprintCallable)
    void QuitPartyGame();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumberOfPlayers() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxNumberOfControllers();
    
};

