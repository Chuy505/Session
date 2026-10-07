#include "CrankDefinition.h"

FCrankDefinition::FCrankDefinition() {
    this->FootPosition = EFootPositionType::None;
    this->AdditionalCrankAngleThreshold = 0.00f;
    this->MaxCrankInStartTime = 0.00f;
    this->IsSwitchCrank = false;
    this->IsAvailableOnGrind = false;
    this->CrankInBlendSpace_AMXX = NULL;
    this->CrankLoopBlendSpace_AMXX = NULL;
    this->CrankInBlendSpace_AFXX = NULL;
    this->CrankLoopBlendSpace_AFXX = NULL;
}

