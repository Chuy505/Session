#include "PartyGamesTrickSelectorWidget.h"

UPartyGamesTrickSelectorWidget::UPartyGamesTrickSelectorWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->WidgetSwitcher = NULL;
    this->SettingsVerticalBox = NULL;
    this->TrickSelectionBorder = NULL;
    this->NumberOfTricksList = NULL;
    this->TricksSizeBox = NULL;
    this->TricksScrollBox = NULL;
    this->RotationSelectionBorder = NULL;
    this->RotationVerticalBox = NULL;
    this->ConfirmationBorder = NULL;
    this->ConfirmButton = NULL;
    this->BackButton = NULL;
    this->SwitchButton = NULL;
    this->NumberOfDisplayedTricks = 5;
    this->ListOptionBlueprint = NULL;
}


