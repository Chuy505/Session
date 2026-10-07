#include "ReplayCamera.h"

AReplayCamera::AReplayCamera(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->_moveSpeed = 1000.00f;
    this->_moveSpeedUp = 125.00f;
    this->_moveSpeedUpAcceleration = 150.00f;
    this->_minDistanceToTarget = 50.00f;
    this->_maxDistanceToTarget = 1000.00f;
    this->_viewPitchMin = -89.90f;
    this->_viewPitchMax = 89.90f;
    this->_viewRollMin = 0.00f;
    this->_viewRollMax = 360.00f;
    this->_viewYawMin = 0.00f;
    this->_viewYawMax = 360.00f;
}


