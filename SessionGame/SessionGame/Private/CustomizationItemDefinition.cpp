#include "CustomizationItemDefinition.h"

UCustomizationItemDefinition::UCustomizationItemDefinition() {
    this->CompanyId = -1;
    this->CategoryId = -1;
    this->bHideWhenCustomizingSocks = true;
    this->Cost = 25.00f;
    this->MaxInstanceInInventory = 5;
    this->IsHidden = false;
    this->IsLocked = false;
    this->IsUnique = true;
    this->IsCustomizable = false;
    this->Mute = false;
    this->DLCAffiliation = EDLCNames::DLC_NONE;
}


