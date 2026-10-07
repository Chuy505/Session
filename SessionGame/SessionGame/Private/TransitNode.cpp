#include "TransitNode.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent

ATransitNode::ATransitNode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->_transitNodeVisual = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent"));
    this->_boxComponentTrigger = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComponent"));
    this->_canEnter = false;
    this->_canExit = false;
    this->_boxComponentTrigger->SetupAttachment(RootComponent);
    this->_transitNodeVisual->SetupAttachment(RootComponent);
}

void ATransitNode::OnOverlapEnd(UPrimitiveComponent* Other, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void ATransitNode::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void ATransitNode::HandleSkaterSetOnFoot() {
}

void ATransitNode::HandleSkaterSetOnBoard() {
}


