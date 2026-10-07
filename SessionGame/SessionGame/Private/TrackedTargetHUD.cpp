#include "TrackedTargetHUD.h"

UTrackedTargetHUD::UTrackedTargetHUD() : UUserWidget(FObjectInitializer::Get()) {
    this->_trackedTragetBlueprint = NULL;
    this->_trackedTargetsPanel = NULL;
    this->_text = NULL;
}


