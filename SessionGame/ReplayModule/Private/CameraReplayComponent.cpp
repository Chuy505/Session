#include "CameraReplayComponent.h"

UCameraReplayComponent::UCameraReplayComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->_recordLocation = true;
    this->_recordRotation = true;
}


