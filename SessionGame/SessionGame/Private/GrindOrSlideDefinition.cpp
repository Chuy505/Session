#include "GrindOrSlideDefinition.h"

UGrindOrSlideDefinition::UGrindOrSlideDefinition() {
    this->MirrorGrindDefinition = NULL;
    this->Priority = 0;
    this->ApproachType = ESkaterApproachType::None;
    this->AdditionalPopHeight = 0.00f;
    this->FrictionFactor = 1.00f;
    this->IsDarkSlide = false;
    this->Mute = false;
    this->GrindContactParts = 0;
    this->AdditionalGrindContactParts = 0;
    this->DirectionScoringMethod = EGrindDirectionScoringMethod::GDSM_AbsoluteValue;
    this->PartMaxDistanceToEdgeMultiplier = 1.00f;
    this->LiptrickPartMinHeightToEdge = 0.00f;
    this->CatchOrientState = ECatchOrientState::None;
    this->PIDMultiplier = 1.00f;
    this->TargetRefAngle = 0.00f;
    this->GrindDismountMinAngleSpeed = 300.00f;
    this->GrindDismountMinAngle = 10.00f;
    this->GrindDismountMaxAngle = 90.00f;
    this->GrindDismountMinAngleMinLateralSpeed = 175.00f;
    this->GrindDismountMaxAngleMinLateralSpeed = 175.00f;
    this->IsUsingPitchAngle = true;
    this->OverrideTrickStartPitch = true;
    this->OverrideTrickEndPitch = true;
    this->AnimTrickPopRatioModifier = 0.00f;
    this->GrindTargetBoardRotationAngle = 0.00f;
    this->LiptrickUpAlignmentSmoothingOverride = 0.00f;
    this->LiptrickSpeedAlignmentCurve = NULL;
    this->LiptrickSpeedGrindAlignmentCurve = NULL;
}


