#include "SpawnerSkaterStation.h"

ASpawnerSkaterStation::ASpawnerSkaterStation(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TricksList.AddDefaulted(1);
    this->ExitTricksList.AddDefaulted(1);
    this->GrindsList.AddDefaulted(1);
}


