#include "EventLineTrickEntry.h"

FEventLineTrickEntry::FEventLineTrickEntry() {
    this->TrickType = EEventLineTrickEntryType::ELTET_Undefined;
    this->FlipTrick = NULL;
    this->Grind = NULL;
    this->AutoConvertGrindWhenGoofy = false;
    this->NoPopGrindExit = false;
    this->IgnoreFlipIn = false;
    this->AllowAny = false;
    this->SelectAny = false;
    this->ValidManualTypes = 0;
    this->RotationType = EEventLineTrickRotationType::ELTRT_None;
    this->RevertType = ERevertType::REVERT_None;
}

