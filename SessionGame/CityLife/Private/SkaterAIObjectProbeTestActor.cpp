#include "SkaterAIObjectProbeTestActor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "SkaterAIObjectProbeComponent.h"

ASkaterAIObjectProbeTestActor::ASkaterAIObjectProbeTestActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->ObjectProbe = CreateDefaultSubobject<USkaterAIObjectProbeComponent>(TEXT("ObjectProbe"));
}

void ASkaterAIObjectProbeTestActor::Probe() const {
}

USkaterAIObjectProbeComponent* ASkaterAIObjectProbeTestActor::GetProbe() const {
    return NULL;
}


