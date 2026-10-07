#include "PartyGamesManager.h"

APartyGamesManager::APartyGamesManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultGameOfSkatePartyGame = NULL;
    this->DefaultSkateOrDicePartyGame = NULL;
    this->DefaultSpotChallengePartyGame = NULL;
    this->_diceDefinitions = NULL;
    this->_partyGamesGameSettingsMenuPage = NULL;
    this->_stanceAssignmentMenuPage = NULL;
    this->_gamepadAssignmentMenuPage = NULL;
    this->_partyGamesDefaultGameSettings = NULL;
    this->DefaultPartyGamesSaveGame = NULL;
}

void APartyGamesManager::SetNumberOfPlayers(int32 NumberOfPlayers) {
}

void APartyGamesManager::QuitPartyGame() {
}

int32 APartyGamesManager::GetNumberOfPlayers() const {
    return 0;
}

int32 APartyGamesManager::GetMaxNumberOfControllers() {
    return 0;
}


