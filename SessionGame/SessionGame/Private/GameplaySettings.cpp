#include "GameplaySettings.h"

FGameplaySettings::FGameplaySettings() {
    this->DifficultyMode = EDifficultyMode::DM_Undefined;
    this->InputModeType = EInputModeType::None;
    this->BodyRotationMode = EBodyRotationMode::BRMODE_Undefined;
    this->ClothesDirt = false;
    this->CatchMode = ECatchMode::CMODE_Undefined;
    this->BoardControlMode = EBoardControlMode::BCMODE_Undefined;
    this->BoardFlipSpeedMode = EBoardFlipSpeedMode::BFSMODE_Undefined;
    this->BoardRotationSpeedMode = EBoardRotationSpeedMode::BRSMODE_Undefined;
    this->BoardRotationInputMode = EBoardRotationInputMode::BRIMODE_Undefined;
    this->BoardFlipContinuousMode = false;
    this->BoardScoopContinuousMode = false;
    this->SyncFlipsScoops = false;
    this->CasualGrindsMode = false;
    this->IsAutoGrind = false;
    this->CrankRelativeInputOnGrinds = false;
    this->GrindAlignmentRatio = 0.00f;
    this->IsDarkSlidesEnabled = false;
    this->IsLiptricksEnabled = false;
    this->IsPopHeightGlobal = false;
    this->IsLateTricksEnabled = false;
    this->IsCaspersEnabled = false;
    this->IsPrimosEnabled = false;
    this->IsBailAutoRespawnEnabled = false;
    this->IsBigDropLandingInputEnabled = false;
    this->IsRevertOnGroundEnabled = false;
    this->IsRevertOnLandingEnabled = false;
    this->RevertSensitivity = 0.00f;
    this->AutoRevertMode = EAutoRevertMode::ARMODE_Disabled;
    this->QuickShovesMode = EQuickShovesMode::QSM_Off;
}

