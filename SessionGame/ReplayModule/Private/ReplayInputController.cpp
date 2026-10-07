#include "ReplayInputController.h"

AReplayInputController::AReplayInputController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->_cameraRotatePitchRate = 120.00f;
    this->_cameraRotateRollRate = 60.00f;
    this->_cameraRotateYawRate = 120.00f;
    this->_clipLimitAdjustSpeed = 2.00f;
    this->_additionalReplayInputs = NULL;
}


