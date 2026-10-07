#include "FlipTrickDefinition.h"

UFlipTrickDefinition::UFlipTrickDefinition() {
    this->FootPosition = EFootPositionType::None;
    this->PopType = ETrickPopType::High;
    this->MaxCrankRatioOnGrinds = 1.00f;
    this->DefaultCatchFootType = ECatchFootType::CF_LeftFoot;
    this->AdditionalPopHeightMin = 0.00f;
    this->AdditionalPopHeightMax = 0.00f;
    this->AdditionalPopHeightGrind = 0.00f;
    this->IsAvailableOnGrind = true;
    this->IsLateTrick = false;
    this->IsPrimoTrick = false;
    this->IsQuickShove = false;
    this->IsPressureTrick = false;
    this->Mute = false;
    this->FirstInputAngleThreshold = 90.00f;
    this->FlipInputSpeedMinMultiplier = 1.00f;
    this->FlipInputSpeedMaxMultiplier = 1.00f;
    this->AnimTrickTimeMin = 0.00f;
    this->AnimTrickTimeMax = 0.00f;
    this->FootAutoAdjustMultiplier = 1.00f;
    this->PopBoardForwardOffsetMin = 0.00f;
    this->PopBoardForwardOffsetMax = 0.00f;
    this->PopBoardForwardOffsetAlignRatioCurve = NULL;
    this->PopBoardSideOffsetMin = 0.00f;
    this->PopBoardSideOffsetMax = 0.00f;
    this->PopBoardHeightAdditionalOffsetMin = 0.00f;
    this->PopBoardHeightAdditionalOffsetMax = 0.00f;
    this->OverrideStartPitchData = false;
    this->BoardControlInversePitch = false;
    this->BoardControlExtraPitchDown = 0.00f;
    this->BoardControlExtraPitchUp = 0.00f;
    this->BoardControlExtraRollPitchDown = 0.00f;
    this->BoardControlExtraRollPitchUp = 0.00f;
    this->BoardControlExtraScoopBS = 0.00f;
    this->BoardControlExtraScoopFS = 0.00f;
    this->BoardControlExtraRollScoopBS = 0.00f;
    this->BoardControlExtraRollScoopFS = 0.00f;
    this->BoardControlMaxSideMovementBS = 0.00f;
    this->BoardControlMaxSideMovementFS = 0.00f;
    this->ForceAutoCatch = false;
    this->BoardFlipPreCatchAngle = 60.00f;
    this->BoardRotationPreCatchAngle = 60.00f;
    this->BoardPitchPreCatchAngleMin = 0.00f;
    this->BoardPitchPreCatchAngleMax = 0.00f;
    this->OtherFootCatchTime = 0.15f;
    this->CatchTargetPitchAngle = 0.00f;
    this->CatchTargetRollAngle = 0.00f;
    this->CatchPitchAlignDelay = 0.50f;
    this->CatchPitchAlignSmoothing = 10.00f;
    this->YawAlignMinCatchRatio = 1.00f;
    this->CatchRollAlignSmoothing = 5.00f;
    this->CatchManualFlipAngleThreshold = 90.00f;
    this->CatchManualRotationAngleThreshold = 90.00f;
    this->CasperPopHeightMultiplierOverride = -1.00f;
}


