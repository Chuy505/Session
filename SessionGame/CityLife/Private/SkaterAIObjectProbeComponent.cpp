#include "SkaterAIObjectProbeComponent.h"

USkaterAIObjectProbeComponent::USkaterAIObjectProbeComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ProbingInterval = 3.00f;
    this->ProbingRadius = 700.00f;
    this->DistanceBetweenTraces = 30.00f;
    this->SkaterMaxJumpHeight = 100.00f;
    this->FloorZTolerance = 5.00f;
    this->MinimalLongestDimension = 130.00f;
    this->MassiveObjectMinimalVolume = 1000000000.00f;
    this->TinyObjectMaximalVolume = 125000.00f;
    this->FinalPointDistanceFromLastPathPoint = 60.00f;
}


