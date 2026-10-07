#include "NPCTargetArea.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent

ANPCTargetArea::ANPCTargetArea(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("AreaBox"));
    this->AreaBox = (UBoxComponent*)RootComponent;
}


