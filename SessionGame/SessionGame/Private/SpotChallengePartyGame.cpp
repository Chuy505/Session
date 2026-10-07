#include "SpotChallengePartyGame.h"

ASpotChallengePartyGame::ASpotChallengePartyGame(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->_skateEventLocationTriggerBoxBlueprint = NULL;
    this->_spotScaleSpeed = 5.00f;
    this->_spotRotationSpeed = 5.00f;
    this->_customWidgetBlueprint = NULL;
    this->_cameraActorBlueprint = NULL;
}


