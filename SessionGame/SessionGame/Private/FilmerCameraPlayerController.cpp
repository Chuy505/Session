#include "FilmerCameraPlayerController.h"

AFilmerCameraPlayerController::AFilmerCameraPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ClickEventKeys.AddDefaulted(1);
    this->CameraHorizontalMoveSpeed = 200.00f;
    this->CameraVerticalMoveSpeed = 200.00f;
}


