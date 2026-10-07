#include "AnimPitchData.h"

FAnimPitchData::FAnimPitchData() {
    this->FootPosition = EFootPositionType::None;
    this->TimeMin = 0.00f;
    this->TimeMax = 0.00f;
    this->TargetAngleMin = 0.00f;
    this->TargetAngleMax = 0.00f;
    this->PitchCurve = NULL;
}

