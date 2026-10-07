#include "SpawnerCrowdStation.h"

ASpawnerCrowdStation::ASpawnerCrowdStation(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->_canBeDisrupted = true;
    this->_idlePose = NULL;
}


