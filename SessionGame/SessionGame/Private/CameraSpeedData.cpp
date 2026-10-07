#include "CameraSpeedData.h"

FCameraSpeedData::FCameraSpeedData() {
    this->LateralMoveSpeed = 0.00f;
    this->UpMoveSpeed = 0.00f;
    this->DownMoveSpeed = 0.00f;
    this->ForwardDistanceMoveSpeed = 0.00f;
    this->MinYawRotationSpeed = 0.00f;
    this->MaxYawRotationSpeed = 0.00f;
    this->YawRotationThreshold = 0.00f;
    this->PitchUpRotationSpeed = 0.00f;
    this->PitchDownRotationSpeed = 0.00f;
    this->TargetOffsetTransitionMultiplier = 0.00f;
}

