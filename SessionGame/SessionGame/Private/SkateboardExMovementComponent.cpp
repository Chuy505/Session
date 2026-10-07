#include "SkateboardExMovementComponent.h"

USkateboardExMovementComponent::USkateboardExMovementComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->_skateboardConfig = NULL;
    this->_debugDisableFlipScoopNormalization = false;
    this->_debugDisplayTruckBankingInfo = false;
}

void USkateboardExMovementComponent::HandleOnComponentHitWheelFrontRight(UPrimitiveComponent* hitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}

void USkateboardExMovementComponent::HandleOnComponentHitWheelFrontLeft(UPrimitiveComponent* hitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}

void USkateboardExMovementComponent::HandleOnComponentHitWheelBackRight(UPrimitiveComponent* hitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}

void USkateboardExMovementComponent::HandleOnComponentHitWheelBackLeft(UPrimitiveComponent* hitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}

void USkateboardExMovementComponent::HandleOnComponentHitFlipper(UPrimitiveComponent* hitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}



