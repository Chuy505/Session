#include "SkateEventLocationTriggerBox.h"

ASkateEventLocationTriggerBox::ASkateEventLocationTriggerBox(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->_locationType = ESkateEventLocationType::SELT_Undefined;
}

void ASkateEventLocationTriggerBox::OnOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void ASkateEventLocationTriggerBox::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}


