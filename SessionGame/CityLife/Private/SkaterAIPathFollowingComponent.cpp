#include "SkaterAIPathFollowingComponent.h"

USkaterAIPathFollowingComponent::USkaterAIPathFollowingComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ToleranceAngle = 5.00f;
    this->MaximumVelocity = 400.00f;
    this->MaxDesiredVelocityPercentageBeforeBraking = 0.10f;
    this->BlockRecoveryModeDuration = 3.00f;
}


