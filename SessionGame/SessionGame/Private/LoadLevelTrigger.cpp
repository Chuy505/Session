#include "LoadLevelTrigger.h"

ALoadLevelTrigger::ALoadLevelTrigger(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->_isConfirmationRequired = true;
    this->_confirmationText = FText::FromString(TEXT("Goto..."));
}

void ALoadLevelTrigger::OnOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void ALoadLevelTrigger::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}


