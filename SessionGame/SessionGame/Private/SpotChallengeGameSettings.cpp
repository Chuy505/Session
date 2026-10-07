#include "SpotChallengeGameSettings.h"

FSpotChallengeGameSettings::FSpotChallengeGameSettings() {
    this->TimeLimit = 0;
    this->BailLimit = 0;
    this->FirstTo = 0;
    this->SpotSelectionType = ESpotSelectionTypes::SST_Undefined;
    this->WinningCondition = EGameWinningCondition::GWC_Undefined;
    this->LastChanceEnabled = false;
}

