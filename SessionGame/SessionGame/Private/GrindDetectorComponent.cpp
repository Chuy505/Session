#include "GrindDetectorComponent.h"

UGrindDetectorComponent::UGrindDetectorComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->_edgeMinimumAngle = 25.00f;
    this->_railTestMaxWidth = 15.00f;
    this->_debugDuration_casting = -1.00f;
    this->_debugDuration_contactNormals = -1.00f;
    this->_debugDuration_edgeResults = -1.00f;
    this->_debugDuration_grindMoveDirection = -1.00f;
}


