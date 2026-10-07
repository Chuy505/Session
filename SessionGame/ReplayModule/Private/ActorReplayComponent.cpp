#include "ActorReplayComponent.h"

UActorReplayComponent::UActorReplayComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->_recordRootComponent = true;
    this->_recordLocation = true;
    this->_recordRotation = true;
}


