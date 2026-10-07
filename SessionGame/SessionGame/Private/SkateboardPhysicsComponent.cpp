#include "SkateboardPhysicsComponent.h"

USkateboardPhysicsComponent::USkateboardPhysicsComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->EnablePhysicsInteraction = false;
}

void USkateboardPhysicsComponent::BoxTouched(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}


