#include "SessionPlayerController.h"
#include "SessionCheatManager.h"

ASessionPlayerController::ASessionPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CheatClass = USessionCheatManager::StaticClass();
    this->ClickEventKeys.AddDefaulted(1);
    this->bShouldPerformFullTickWhenPaused = true;
    this->DebugHUDRef = NULL;
    this->SkaterCameraBlueprint = NULL;
    this->_maxRepairBoardInputDelay = 1.00f;
    this->_spotMarkerWidget_Blueprint = NULL;
    this->_setSpotTimeDelaySeconds = 0.20f;
    this->_minGotoMarkerTimeDelaySeconds = 0.20f;
    this->_maxGotoMarkerTimeDelaySeconds = 5.00f;
    this->_minSpotDistanceTimeDelayAffect = 2000.00f;
    this->_maxSpotDistanceTimeDelayAffect = 20000.00f;
    this->_trickDisplayWidgetBlueprint = NULL;
    this->_introUIBlueprint = NULL;
    this->PauseMenuPageContainerBlueprint = NULL;
    this->VideoMontagePauseMenuPageContainerBlueprint = NULL;
    this->_brokenBoardPopupWidgetBlueprint = NULL;
    this->DefaultFilmerModeManager = NULL;
    this->_introUI = NULL;
    this->_activePauseMenuPageContainer = NULL;
}

void ASessionPlayerController::UnBindInputs() {
}

void ASessionPlayerController::SimulateInput_Throwdown(bool toSwitch) {
}

void ASessionPlayerController::SimulateInput_Sprint() {
}

void ASessionPlayerController::SimulateInput_RightStick_Y_Axis(float AxisValue) {
}

void ASessionPlayerController::SimulateInput_RightStick_X_Axis(float AxisValue) {
}

void ASessionPlayerController::SimulateInput_PushRight(bool Pressed) {
}

void ASessionPlayerController::SimulateInput_PushLeft(bool Pressed) {
}

void ASessionPlayerController::SimulateInput_Push(bool Pressed) {
}

void ASessionPlayerController::SimulateInput_LeftStick_Y_Axis(float AxisValue) {
}

void ASessionPlayerController::SimulateInput_LeftStick_X_Axis(float AxisValue) {
}

void ASessionPlayerController::SimulateInput_Jump(bool Pressed) {
}

void ASessionPlayerController::SimulateInput_Brake(bool Pressed) {
}

void ASessionPlayerController::SimulateInput_BankRight(float AxisValue) {
}

void ASessionPlayerController::SimulateInput_BankLeft(float AxisValue) {
}

void ASessionPlayerController::SetInputModeType(EInputModeType newInputModeType) {
}

void ASessionPlayerController::SetAutoReceiveInput(TEnumAsByte<EAutoReceiveInput::Type> processingPlayer) {
}

void ASessionPlayerController::SaveMarkerLocation(bool forceSave, bool broadcastEvent) {
}


bool ASessionPlayerController::IsWithEditor() const {
    return false;
}

void ASessionPlayerController::GotoMarker() {
}

ASkaterCharacter* ASessionPlayerController::GetSkater() const {
    return NULL;
}

EInputModeType ASessionPlayerController::GetInputModeType() const {
    return EInputModeType::None;
}

UUserWidget* ASessionPlayerController::GetDebugHUD() const {
    return NULL;
}

void ASessionPlayerController::BindInGameInputs() {
}


