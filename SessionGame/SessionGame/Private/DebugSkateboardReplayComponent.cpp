#include "DebugSkateboardReplayComponent.h"

UDebugSkateboardReplayComponent::UDebugSkateboardReplayComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->_recordSkateboardDebugData = false;
    this->_recordBoardControllerQuat = false;
    this->_recordFlipperQuat = false;
    this->_recordCatchOrientBaseRotation = false;
    this->_recordCenterOfMass = false;
    this->_recordMovementDirection = false;
    this->_recordGrindDirection = false;
    this->_recordGeneralInfo = false;
    this->_recordStateInfo = false;
    this->_recordAnimationInfo = false;
    this->_recordGroundedInfo = false;
    this->_recordSpecialCatchesInfo = false;
    this->_recordCollision = false;
    this->_recordGrindDetection = false;
    this->_recordFrictionTypes = false;
    this->_recordCatchSockets = false;
}


