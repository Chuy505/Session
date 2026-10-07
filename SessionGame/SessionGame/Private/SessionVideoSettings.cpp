#include "SessionVideoSettings.h"

FSessionVideoSettings::FSessionVideoSettings() {
    this->Brightness = 0.00f;
    this->FrameRateLimitIndex = 0;
    this->FSRPresetIndex = 0;
    this->IsTrickDisplayEnabled = false;
    this->IsShopTrackerEnabled = false;
    this->IsMissionHUDReminderEnabled = false;
}

