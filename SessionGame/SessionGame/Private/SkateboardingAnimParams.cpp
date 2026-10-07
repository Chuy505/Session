#include "SkateboardingAnimParams.h"

FSkateboardingAnimParams::FSkateboardingAnimParams() {
    this->IsBrakingFoot = false;
    this->IsBrakingTail = false;
    this->IsFalling = false;
    this->IsLanding = false;
    this->IsAboutToLand = false;
    this->LandHeightRatio = 0.00f;
    this->PushState = EPushState::None;
    this->PushSpeedMultiplier = 0.00f;
}

