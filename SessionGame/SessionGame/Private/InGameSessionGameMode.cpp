#include "InGameSessionGameMode.h"

AInGameSessionGameMode::AInGameSessionGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->_fadeInUI_Blueprint = NULL;
    this->_replayManager_Blueprint = NULL;
    this->_fadeInWidgetInstance = NULL;
    this->DefaultFilmerModeManager = NULL;
    this->DefaultPartyGamesManager = NULL;
}


