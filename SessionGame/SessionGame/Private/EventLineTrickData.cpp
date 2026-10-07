#include "EventLineTrickData.h"

FEventLineTrickData::FEventLineTrickData() {
    this->TrickType = EEventLineTrickEntryType::ELTET_Undefined;
    this->AutoConvertGrindWhenGoofy = false;
    this->NoPopGrindExit = false;
    this->IgnoreFlipIn = false;
    this->ValidManualTypes = 0;
    this->RotationType = EEventLineTrickRotationType::ELTRT_None;
    this->RevertType = ERevertType::REVERT_None;
}

