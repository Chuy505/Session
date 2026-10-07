#include "AnimNode_SequenceScrubber.h"

FAnimNode_SequenceScrubber::FAnimNode_SequenceScrubber() {
    this->Sequence = NULL;
    this->bLoopAnimation = false;
    this->PlayRate = 0.00f;
    this->StartPosition = 0.00f;
    this->ScrubPosition = 0.00f;
}

