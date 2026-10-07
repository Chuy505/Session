#include "SkaterMovementComponent.h"
#include "Net/UnrealNetwork.h"

USkaterMovementComponent::USkaterMovementComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SkaterConfig = NULL;
    this->MinWalkSpeed = 100.00f;
    this->MaxWalkSpeedMultiplier = 1.65f;
    this->MaxWalkSpeedMultiplierIncrease = 0.15f;
    this->MaxWalkSpeedMultiplierDecrease = 0.15f;
    this->DebugShowPopStartEndLines = false;
    this->DebugShowPopCurves = false;
    this->_targetRotationRatio = 0.00f;
    this->_currentRotationRate = 0.00f;
    this->_currentSkaterRotationAngle = 0.00f;
    this->_currentSkaterShoulderRotationRatio = 0.00f;
    this->_currentSkaterRotationRatio = 0.00f;
    this->_trajectoryCurve = NULL;
    this->_isOnBoard = false;
    this->SkateboardGroundMovementMode = MOVE_None;
    this->SkateboardGroundCustomMovementMode = ESkaterMovementMode::MOVE_None;
}

FVector USkaterMovementComponent::GetVelocity() const {
    return FVector{};
}

float USkaterMovementComponent::GetMaxSkateboardingSpeed() const {
    return 0.0f;
}

float USkaterMovementComponent::GetMaxOnFootSpeed() const {
    return 0.0f;
}

float USkaterMovementComponent::GetLastFallHeight() const {
    return 0.0f;
}

float USkaterMovementComponent::GetLastAirHeight() const {
    return 0.0f;
}

float USkaterMovementComponent::GetLastAirDistance() const {
    return 0.0f;
}

float USkaterMovementComponent::GetCurrentSpeed() const {
    return 0.0f;
}

float USkaterMovementComponent::GetCurrentBankingRatio() const {
    return 0.0f;
}

void USkaterMovementComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(USkaterMovementComponent, _isOnBoard);
}


