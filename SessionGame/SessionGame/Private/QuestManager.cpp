#include "QuestManager.h"

AQuestManager::AQuestManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->_questDefinitionsRootPath = TEXT("Quests/Definitions");
    this->_firstQuest = NULL;
    this->_statusUpgradeUIBlueprint = NULL;
    this->_questStepCompletedAudioSet = NULL;
    this->_questStepFailedAudioSet = NULL;
}


