#include "JamDefinition.h"

UJamDefinition::UJamDefinition() {
    this->ScoreToWinRaw = 30.00f;
    this->ScoreToWinConversion = 9.00f;
    this->TricksDifficultyDatabase = NULL;
    this->TimeOfDay = 1000.00f;
    this->MaxAllowedTimeOutsideBoundary = 10;
    this->RoundDuration = 60.00f;
    this->RoundStartCountdownTime = 10;
}


