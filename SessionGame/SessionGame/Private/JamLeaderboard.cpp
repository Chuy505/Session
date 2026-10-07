#include "JamLeaderboard.h"

UJamLeaderboard::UJamLeaderboard() : UUserWidget(FObjectInitializer::Get()) {
    this->Title = NULL;
    this->VerticalBoxLines = NULL;
    this->ContinueButton = NULL;
    this->JamLeaderboardLineClass = NULL;
    this->NeededPressDuration = 1.00f;
    this->_audioSet = NULL;
}


