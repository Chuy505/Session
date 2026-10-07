#include "SkaterVisualsDefinition.h"

USkaterVisualsDefinition::USkaterVisualsDefinition() {
    this->CharacterType = ECharacterType::CT_Undefined;
    this->Stance = EStanceType::Regular;
    this->CharacterSkeleton = NULL;
    this->CharacterMesh = NULL;
    this->CharacterPHAT = NULL;
    this->AnimClass = NULL;
    this->IsCustomizable = true;
    this->IsStanceCustomizable = true;
    this->IsComingSoon = false;
    this->MaxWalkSpeed = 100.00f;
    this->MaxRunSpeed = 300.00f;
    this->SpeedVariation = 0.20f;
    this->SkateboardDefinition = NULL;
    this->CustomizationAnimClass = NULL;
    this->DLCAffiliation = EDLCNames::DLC_NONE;
}


