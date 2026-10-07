#include "QuestsPersistentDataInstance.h"

FQuestsPersistentDataInstance::FQuestsPersistentDataInstance() {
    this->PlayerStatus = ESessionPlayerStatus::ShopSponsored;
    this->WasAlwaysInManualCatch = false;
    this->ExposureAmount = 0;
}

