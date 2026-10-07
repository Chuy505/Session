#include "TransitManager.h"

ATransitManager::ATransitManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->_worldRotation = 0.00f;
    this->_worldScale = 0.00f;
    this->_maxTeleportationDelay = 0.10f;
    this->_transitMapBlueprint = NULL;
    this->_transitData = NULL;
}


