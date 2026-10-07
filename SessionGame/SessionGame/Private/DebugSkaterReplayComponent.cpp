#include "DebugSkaterReplayComponent.h"

UDebugSkaterReplayComponent::UDebugSkaterReplayComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->_recordSkaterOrientationData = false;
    this->_recordSkaterAnimatedFlipperData = false;
    this->_recordSkaterActorLocation = false;
    this->_recordSkaterMeshLocation = false;
    this->_recordGeneralInfo = false;
    this->_recordStateInfo = false;
    this->_recordAnimationInfo = false;
    this->_recordCollision = false;
    this->_recordRigidBodies = false;
    this->_recordFeetIK = false;
    this->_recordLookAt = false;
    this->_recordSkateSkeleton = false;
}


