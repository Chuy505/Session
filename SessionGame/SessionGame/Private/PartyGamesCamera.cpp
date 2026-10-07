#include "PartyGamesCamera.h"

APartyGamesCamera::APartyGamesCamera(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->_movementSpeed = 10.00f;
    this->_rotationSpeed = 10.00f;
    this->_rotationLag = 1.00f;
    this->_maxLineTraceDistance = 7500.00f;
    this->_surfaceAngleThreshold = 60.00f;
}


