#include "CompanyItemDefinition.h"

FCompanyItemDefinition::FCompanyItemDefinition() {
    this->CompanyId = 0;
    this->CategoryFlags = 0;
    this->DLCAffiliation = EDLCNames::DLC_NONE;
    this->DisplayTexture = NULL;
    this->ExcludeFromShop = false;
    this->Mute = false;
}

