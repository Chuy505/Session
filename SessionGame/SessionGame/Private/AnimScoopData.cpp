#include "AnimScoopData.h"

FAnimScoopData::FAnimScoopData() {
    this->TargetAngleMin = 0.00f;
    this->TargetAngleMax = 0.00f;
    this->RotationSpeedModifierInput = EInputType::Undefined;
    this->LegacyRotationSpeedModifierInput = EInputType::Undefined;
    this->BoardRotationSpeedMultiplierMin = 0.00f;
    this->BoardRotationSpeedMultiplierMax = 0.00f;
    this->BoardRotationEaseInSmoothing = 0.00f;
}

