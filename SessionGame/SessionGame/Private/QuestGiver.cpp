#include "QuestGiver.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent

AQuestGiver::AQuestGiver(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->_rootComponent = (USceneComponent*)RootComponent;
    this->_boxComponentTrigger = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComponent"));
    this->_showOnlyIfQuestsAvailable = false;
    this->_questFlowType = EQuestGiverFlowType::QGFT_Sequential;
    this->DLCAffiliation = EDLCNames::DLC_NONE;
    this->_boxComponentTrigger->SetupAttachment(RootComponent);
}

void AQuestGiver::OnOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void AQuestGiver::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}


