#include "SkaterProgression.h"

USkaterProgression::USkaterProgression() {
}

float USkaterProgression::GetFlipTrickPopHeightStatValue(FName StatName) const {
    return 0.0f;
}

float USkaterProgression::GetBaseStatValue(FName StatName) const {
    return 0.0f;
}

UProgressionStat* USkaterProgression::GetBaseStat(FName StatName) const {
    return NULL;
}


