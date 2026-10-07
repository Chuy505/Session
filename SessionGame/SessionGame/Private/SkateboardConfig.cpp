#include "SkateboardConfig.h"

USkateboardConfig::USkateboardConfig() {
    this->SlopeCruisingForceApplied = NULL;
    this->BankingFlipperCrankMaxAngle = 5.00f;
    this->BankingEndSmoothing = 0.50f;
    this->BankingFlipperMaxAngleCurve = NULL;
    this->BankingFlipperMaxAngleNoBiteCurve = NULL;
    this->BankingTightnessSmoothingCurve = NULL;
    this->BankingSpeedRatioCurve = NULL;
    this->NoBankingTightnessSmoothingCurve = NULL;
    this->BankingTightnessPIDCurve = NULL;
    this->TruckTightnessStrengthCurve = NULL;
    this->TruckBankingRatioCurve = NULL;
    this->InAirGroundUpAlignmentSmoothing = 10.00f;
    this->InAirGroundUpAlignmentHeight = 40.00f;
}


