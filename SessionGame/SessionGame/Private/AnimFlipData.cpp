#include "AnimFlipData.h"

FAnimFlipData::FAnimFlipData() {
    this->TargetAngleMin = 0.00f;
    this->TargetAngleMax = 0.00f;
    this->CatchManualFlipAxisRollAngle = 0.00f;
    this->FlipSpeedModifierInput = EInputType::Undefined;
    this->LegacyFlipSpeedModifierInput = EInputType::Undefined;
    this->BoardFlipSpeedMultiplierMin = 0.00f;
    this->BoardFlipSpeedMultiplierMax = 0.00f;
}

