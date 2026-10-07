#include "EntryPointGameMode.h"

AEntryPointGameMode::AEntryPointGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->_introLevelName = TEXT("NYC01_Persistent");
    this->_hubLevelName = TEXT("HUB_Persistent");
    this->_difficultyWizardUIBlueprint = NULL;
}


