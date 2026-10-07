#include "PartyGamesHUD.h"

UPartyGamesHUD::UPartyGamesHUD() : UUserWidget(FObjectInitializer::Get()) {
    this->_playerWidgetBlueprint = NULL;
    this->_alertGameIsOverAnimation = NULL;
    this->_gameOverAnimation = NULL;
    this->_goAnimation = NULL;
    this->_gameOverPanel = NULL;
    this->_goTextPanel = NULL;
    this->_alertActionResultText = NULL;
    this->_remainingTimeText = NULL;
    this->_winningPlayerText = NULL;
    this->_playersVerticalBox = NULL;
    this->TriesAndTime = NULL;
    this->Alert = NULL;
    this->_countDownTick = NULL;
}


