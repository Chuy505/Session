#include "TrackingManager.h"

ATrackingManager::ATrackingManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->_trackedTargetHUDBlueprint = NULL;
    this->_trackedAreaDefaultBlueprint = NULL;
    this->_trackingVisualParams = NULL;
    this->_projectPlayerViewportRelative = false;
}


