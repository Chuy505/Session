#include "PedestrianCharacter.h"

APedestrianCharacter::APedestrianCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->_skaterDefinition = NULL;
    this->_targetArea = NULL;
    this->_resetRagdollDelay = 3.00f;
    this->_lookAtRotationSpeed = 0.03f;
}


void APedestrianCharacter::OnTargetAreaBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void APedestrianCharacter::OnCapsuleComponentHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}

void APedestrianCharacter::HandleOnDebugTextVisibilityChanged(bool Visible) {
}


