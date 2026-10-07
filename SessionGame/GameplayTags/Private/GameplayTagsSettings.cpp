#include "GameplayTagsSettings.h"

UGameplayTagsSettings::UGameplayTagsSettings() {
    this->ConfigFileName = TEXT("../../../SessionGame/Config/DefaultGameplayTags.ini");
    this->ImportTagsFromConfig = false;
    this->WarnOnInvalidTags = true;
    this->ClearInvalidTags = false;
    this->FastReplication = false;
    this->InvalidTagCharacters = TEXT("\"',");
    this->NumBitsForContainerSize = 6;
    this->NetIndexFirstBitSegment = 16;
}


