#include "SessionCameraData.h"

USessionCameraData::USessionCameraData() {
    this->_minimumCameraTransitionMultiplier = 0.70f;
    this->_minimumDropCameraPitchSpeed = 1.50f;
    this->_minimumTargetOffsetFlippingSpeed = 3.00f;
    this->_maximumCameraTransitionMultiplier = 1.30f;
    this->_maximumDropCameraPitchSpeed = 3.50f;
    this->_maximumTargetOffsetFlippingSpeed = 5.00f;
    this->_maximumRotationOffsetForGrinds = 10.00f;
    this->_maximumLandingHeightForFlatAir = 20.00f;
    this->_maximumPopHeightForFlatAir = 175.00f;
    this->_maximumYawForVert = 90.00f;
    this->_minimumFloorUpAngleForVert = 10.00f;
    this->_maximumFloorRightAngleForVert = 45.00f;
    this->_minimumDropHeightForBigAir = 125.00f;
    this->_minimumPopHeightForBigAir = 150.00f;
    this->_LoSZOffsetForBigAir = 15.00f;
    this->_collisionCheckSize = 10.00f;
    this->_collisionCorrectionSpeed = 10.00f;
    this->_collisionEnsureSize = 55.00f;
    this->_enableDropDetection = true;
    this->_dropDetectionDistance = 1000.00f;
    this->_dropDetectionSize = 10.00f;
    this->_dropMinHeight = 50.00f;
    this->_dropMaxHeight = 300.00f;
    this->_dropMaxCameraPitch = NULL;
    this->_substepDelta = 0.02f;
    this->_substepLocation = true;
    this->_substepRotation = true;
    this->_defaultTransitionCurve = NULL;
    this->_smoothLandingTime = 0.70f;
    this->_predictedTransitionOnly = true;
    this->_tryRetainTargetDistance = true;
    this->_enableOnScreenDebug = false;
    this->_enableTransformDebug = false;
    this->_enableBigAirDebug = false;
    this->_enableDropDetectionDebug = false;
    this->_enableInAirPredictionDebug = false;
    this->_debugTextBlueprint = NULL;
}


