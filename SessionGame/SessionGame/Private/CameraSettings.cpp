#include "CameraSettings.h"

FCameraSettings::FCameraSettings() {
    this->SkateboardCameraType = ESkateboardCameraType::SCT_Undefined;
    this->CustomDistance = 0.00f;
    this->CustomHorizontalOffset = 0.00f;
    this->CustomVerticalOffset = 0.00f;
    this->GrindCustomDistance = 0.00f;
    this->GrindCustomHorizontalOffset = 0.00f;
    this->GrindCustomVerticalOffset = 0.00f;
    this->CameraSpeed = 0.00f;
    this->IsStanceAutoOffset = false;
    this->IsGrindsSlidesCameraEnabled = false;
    this->IsOnFootCameraInvertedX = false;
    this->IsOnFootCameraInvertedY = false;
    this->CameraModelType = ECameraModelType::CMT_None;
    this->CameraLensType = ECameraLensType::CLT_None;
    this->CameraFilterIndex = 0;
    this->CameraFilterIntensity = 0.00f;
    this->CameraLightType = ECameraLightType::CLT_Off;
}

