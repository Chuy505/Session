#include "ReplayEditorSettings.h"

FReplayEditorSettings::FReplayEditorSettings() {
    this->IsCameraXInverted = false;
    this->IsCameraYInverted = false;
    this->IsNotificationsOn = false;
    this->IsAutoShowUIOn = false;
    this->CameraPathDisplayMode = EReplayCameraPathDisplayMode::RCPDM_Off;
}

