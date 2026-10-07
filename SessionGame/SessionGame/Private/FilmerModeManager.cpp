#include "FilmerModeManager.h"

AFilmerModeManager::AFilmerModeManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultFilmerLocalPlayerController = NULL;
    this->DefaultFilmerCharacter = NULL;
    this->DefaultFilmerModeHUD = NULL;
    this->_defaultFilmerModeSaveGame = NULL;
    this->_filmerModeSettingsMenuPage = NULL;
    this->_maxNumberOfControllers = 4;
    this->_maxNumberOfPlayers = 2;
}


