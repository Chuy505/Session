#include "FilmerLocalPlayerController.h"

AFilmerLocalPlayerController::AFilmerLocalPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ClickEventKeys.AddDefaulted(1);
    this->_defaultFilmerModeMenuWidget = NULL;
    this->MoveSpeedMultiplier = 1.50f;
    this->MoveSpeed = 250.00f;
    this->CameraMoveSpeed = 700.00f;
    this->_bInvertX = false;
    this->_bInvertY = false;
    this->_cameraAngularVelocity = 45.00f;
    this->_cameraLag = 30.00f;
    this->_cameraMovementAccelLag = 2.50f;
    this->_cameraMovementDeccelLag = 6.00f;
    this->_cameraRotationAccelLag = 4.00f;
    this->_cameraRotationDeccelLag = 6.00f;
    this->_spotMarkerWidget_Blueprint = NULL;
    this->_setSpotTimeDelaySeconds = 0.00f;
    this->_minGotoMarkerTimeDelaySeconds = 0.00f;
    this->_maxGotoMarkerTimeDelaySeconds = 0.00f;
    this->_minSpotDistanceTimeDelayAffect = 0.00f;
    this->_maxSpotDistanceTimeDelayAffect = 0.00f;
}

void AFilmerLocalPlayerController::SetInvertY(bool invert) {
}

void AFilmerLocalPlayerController::SetInvertX(bool invert) {
}

void AFilmerLocalPlayerController::SetFilmerType(EFilmerTypes FilmerType) {
}

void AFilmerLocalPlayerController::SaveMarkerLocation(bool forceSave) {
}

bool AFilmerLocalPlayerController::GetIsShowTempUIPressed() {
    return false;
}


