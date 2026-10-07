#include "PowerSlidesDatabase.h"

UPowerSlidesDatabase::UPowerSlidesDatabase() {
    this->PowerSlideMinInputForce = 0.75f;
    this->PowerSlideExitMinInputForce = 0.10f;
    this->PowerSlideAngleTolerance = 90.00f;
    this->PowerSlideMinAngle = 30.00f;
    this->PowerSlideMaxAngle = 110.00f;
    this->PowerSlideMaxStickAngle = 180.00f;
    this->PowerSlideMaxSingleStickAngle = 90.00f;
    this->PowerSlideSingleStickAngleTolerance = 10.00f;
    this->PowerSlideSwitchingDirectionAngle = 120.00f;
    this->PowerSlideExitMinSpeed = 150.00f;
    this->PowerSlideMaxSpeedExitRatio = 0.20f;
    this->PowerSlideExitAngleRatio = 0.97f;
    this->PowerSlideMoveDirectionForceExitMinRatio = 0.25f;
    this->PowerSlideMinTime = 0.30f;
    this->PowerSlideMaxTailPitch = 45.00f;
    this->PowerSlideMaxNosePitch = 45.00f;
    this->PowerSlideTriggerRotationTurnRate = 360.00f;
    this->PowerSlideLiptrickTriggerRotationTurnRate = 270.00f;
    this->PowerSlideRotationSmoothing = 15.00f;
    this->PowerSlideInSmoothing = 7.50f;
    this->PowerSlideOutSmoothing = 10.00f;
    this->PowerSlideLiptrickSmoothing = 5.00f;
    this->PowerSlidePitchSmoothing = 10.00f;
    this->PowerSlideExtraAngleSmoothing = 5.00f;
    this->PowerSlideCOMOffsetSmoothing = 10.00f;
    this->PowerSlideExitCOMOffset = 0.50f;
    this->PowerSlideExitRatioCurve = NULL;
    this->PowerSlideExitTimeCurve = NULL;
    this->PowerSlideExitTimeMultiplierCurve = NULL;
    this->PowerSlideExitRedirectionCurve = NULL;
    this->PowerSlideFrictionMultiplierCurve = NULL;
    this->PowerSlideAddedVelocityCurve = NULL;
    this->PowerSlideAddedVelocityMultiplierCurve = NULL;
    this->PowerSlideAddedVelocityDelay = 0.15f;
    this->AnimBlendPowerSlidePitchRatioSmoothing = 7.50f;
}


