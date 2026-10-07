#include "ReplayButtonConfig.h"

FReplayButtonConfig::FReplayButtonConfig() {
    this->Visibility = ESlateVisibility::Visible;
    this->ShiftVisibility = ESlateVisibility::Visible;
    this->Enabled = false;
    this->ShiftEnabled = false;
}

