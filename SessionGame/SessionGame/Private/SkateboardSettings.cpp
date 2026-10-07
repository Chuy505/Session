#include "SkateboardSettings.h"

FSkateboardSettings::FSkateboardSettings() {
    this->TruckTightnessFront = 0.00f;
    this->TruckTightnessBack = 0.00f;
    this->WearAndDirt = false;
    this->SyncTruckTightness = false;
    this->IsWheelBiteEnabled = false;
    this->IsBoardBreakingEnabled = false;
    this->BoardBreakingMultiplier = 0.00f;
    this->IsFlatSpotsEnabled = false;
}

