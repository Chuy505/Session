#include "ChallengesHUD.h"

UChallengesHUD::UChallengesHUD() : UUserWidget(FObjectInitializer::Get()) {
    this->TrackedChallengeBlueprint = NULL;
    this->_displayCompletedNotificationTime = 3.00f;
    this->_audioSet = NULL;
}



