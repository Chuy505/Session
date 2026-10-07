#include "DebugInputReplayComponent.h"

UDebugInputReplayComponent::UDebugInputReplayComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->_recordDebugData = false;
    this->_recordStickInput = false;
    this->_recordActiveInputs = false;
}


