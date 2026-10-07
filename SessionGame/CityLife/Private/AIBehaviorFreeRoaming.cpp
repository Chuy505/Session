#include "AIBehaviorFreeRoaming.h"

UAIBehaviorFreeRoaming::UAIBehaviorFreeRoaming() {
    this->MinimalCooldownBetweenObjectSkating = 15.00f;
    this->MaximalCooldownBetweenObjectSkating = 25.00f;
}

void UAIBehaviorFreeRoaming::HandleOnSkaterBeginOverlap(AActor* OverlappedActor, AActor* OtherActor) {
}


