#include "SkaterAITricksHandlerComponent.h"

USkaterAITricksHandlerComponent::USkaterAITricksHandlerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AITricksDefinition = NULL;
    this->MinimumTimeBetweenTricks = 5.00f;
    this->MaximumTimeBetweenTricks = 15.00f;
}


