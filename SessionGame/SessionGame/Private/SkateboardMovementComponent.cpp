#include "SkateboardMovementComponent.h"
#include "Net/UnrealNetwork.h"

USkateboardMovementComponent::USkateboardMovementComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->EnablePhysicsInteraction = true;
    this->MaxSimulationTimeStep = 0.05f;
    this->MaxSimulationIterations = 8;
    this->_movementMode = ESkateboardMovementMode::MOVE_None;
    this->_debugDisableFlipScoopNormalization = false;
}

void USkateboardMovementComponent::BoxTouched(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void USkateboardMovementComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(USkateboardMovementComponent, _movementMode);
}


