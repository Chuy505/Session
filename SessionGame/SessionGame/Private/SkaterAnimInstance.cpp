#include "SkaterAnimInstance.h"

USkaterAnimInstance::USkaterAnimInstance() {
    this->IsAFXXSkater = false;
    this->bankingRatio = 0.00f;
    this->BodyRotationRatio = 0.00f;
    this->ShoulderAdditiveAlpha = 0.00f;
    this->ShoulderRotationRatio = 0.00f;
    this->IsInPowerslideStance = false;
    this->IsPowerSliding = false;
    this->IsExitingPowerslide = false;
    this->PowerslideCOMOffsetRatio = 0.00f;
    this->PowerslidePitchRatio = 0.00f;
    this->PowerslideRatio = 0.00f;
    this->PowerslideTargetRatio = 0.00f;
    this->PowerslideExitRatio = 0.00f;
    this->PowerslideExitTime = 0.00f;
    this->SpeedRatio = 0.00f;
    this->Speed = 0.00f;
    this->OnFootTurnRatio = 0.00f;
    this->IsOnBoard = true;
    this->IsPickingUp = false;
    this->IsThrowingDown = false;
    this->IsSkatingSwitch = false;
    this->IsSkatingGoofy = false;
    this->FootPositionType = EFootPositionType::Regular;
    this->LandingFootPositionType = EFootPositionType::Regular;
    this->FootPositionTransitionType = EFootPositionTransitionType::TRANS_None;
    this->FootToBoardTransitionType = EFootToBoardTransitionType::EFBTT_None;
    this->BoardToFootTransitionType = EBoardToFootTransitionType::EFBTT_None;
    this->FlipTrickStanceTransferRatio = 0.00f;
    this->IsTrickPending = false;
    this->CatchMode = ECatchMode::CMODE_Manual;
    this->CatchOrientState = ECatchOrientState::None;
    this->HasLeftFootCatchOrient = false;
    this->HasRightFootCatchOrient = false;
    this->HasDarkSlideCatchOrient = false;
    this->CatchOrientYawRatio = 0.00f;
    this->CatchOrientPitchRatio = 0.00f;
    this->IsAutoCatching = false;
    this->CatchOrientPreLandRatio = 0.00f;
    this->GrabState = EGrabState::None;
    this->IsPushing = false;
    this->IsPushingRegular = false;
    this->IsPushingMongo = false;
    this->IsPushingSwitch = false;
    this->WasPushingMongo = false;
    this->IsInManual = false;
    this->IsInNoseManual = false;
    this->ManualRatio = 0.00f;
    this->IsInCasper = false;
    this->IsInAntiCasper = false;
    this->CasperRatio = 0.00f;
    this->IsGrinding = false;
    this->IsGrindingInLiptrick = false;
    this->GrindAnimSetIndex = 0;
    this->GrindPreLandRatio = 0.00f;
    this->LiptrickAnimSetIndex = 0;
    this->IsKickTurnLeft = false;
    this->IsKickTurnRight = false;
    this->WasKickTurnLeft = false;
    this->WasKickTurnRight = false;
    this->IsInPrimo = false;
    this->IsWallRiding = false;
    this->WallRideAngleRatio = 0.00f;
    this->WallRideState = EWallRideState::None;
    this->IsAnimMirrorOn = false;
    this->IsAnimatedThrowdown = false;
    this->ThrowdownFeetIKAlpha = 0.00f;
    this->FootIKAutoAdjust = true;
    this->FootIKAutoAdjustSmoothing = 15.00f;
    this->FootIKAutoAdjustMaxExtentX = 20.00f;
    this->FootIKAutoAdjustMaxExtentY = 40.00f;
    this->FootIKAutoAdjustMaxExtentZ = 30.00f;
    this->LeftFootIKAlpha = 0.00f;
    this->RightFootIKAlpha = 0.00f;
    this->LeftHandIKAlpha = 0.00f;
    this->RightHandIKAlpha = 0.00f;
    this->MongoPushAvoidanceActive = false;
    this->MongoPushAvoidanceLeftFoot = false;
    this->HasCatchLoop = false;
    this->HasLateTrick = false;
    this->HasTrickLoop = false;
    this->IsBoardFlipping = false;
    this->IsBoardRotating = false;
    this->IsCranking = false;
    this->CrankPocketRatio = 0.00f;
    this->CrankInBlendSpace = NULL;
    this->CrankLoopBlendSpace = NULL;
    this->CrankGrindsLoopBlendSpace = NULL;
    this->CrankManualsLoopBlendSpace = NULL;
    this->CrankInStartTime = 0.00f;
    this->IsQuickCrankSwapping = false;
    this->FlipTrick = NULL;
    this->FlipTrickPopRatio = 0.00f;
    this->FlipTrickPlaybackRate = 1.00f;
    this->RevertType = ERevertType::REVERT_None;
    this->RevertRatio = 0.00f;
    this->RevertBlendSpace = NULL;
    this->FlipTrickAnimSetIndex = 0;
    this->HeadLookAtAlpha = 0.00f;
    this->IsInitialized = false;
    this->IsInIntro = false;
    this->ResetSkater = false;
    this->OnFootIsJumping = false;
    this->OnFootPreLandRatio = 0.00f;
    this->IsExitingIntro = false;
    this->IsGrounded = true;
    this->IsGroundedWheels = true;
    this->IsFalling = false;
    this->IsLanding = false;
    this->IsJustLanded = false;
    this->LandHeightRatio = 0.00f;
    this->LandDropHeightRatio = 0.00f;
}

void USkaterAnimInstance::SetIntroAsCompleted() {
}

void USkaterAnimInstance::ResetFootPosition() {
}

void USkaterAnimInstance::OnFullyEnteredOnFootState() {
}

void USkaterAnimInstance::OnFullyEnteredOnBoardState() {
}

void USkaterAnimInstance::OnCompletedThrowdown() {
}

ASkaterCharacterBase* USkaterAnimInstance::GetSkater() const {
    return NULL;
}

FAnimatedSkateboardInfo USkaterAnimInstance::GetAnimatedSkateboardInfo() const {
    return FAnimatedSkateboardInfo{};
}

FName USkaterAnimInstance::GetActiveStateName() {
    return NAME_None;
}

void USkaterAnimInstance::EnableSkateboardYawRotation() {
}

void USkaterAnimInstance::DisableSkateboardYawRotation() {
}


