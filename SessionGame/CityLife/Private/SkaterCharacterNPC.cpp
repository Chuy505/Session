#include "SkaterCharacterNPC.h"

ASkaterCharacterNPC::ASkaterCharacterNPC(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BaseVisualDefinition = NULL;
    this->CrankDuration = 1.00f;
    this->MaxTrickDuration = 5.00f;
}


