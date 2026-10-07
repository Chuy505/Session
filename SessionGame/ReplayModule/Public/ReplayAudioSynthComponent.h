#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AudioMixer -ObjectName=SynthComponent -FallbackName=SynthComponent
#include "ReplayAudioSynthComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class REPLAYMODULE_API UReplayAudioSynthComponent : public USynthComponent {
    GENERATED_BODY()
public:
    UReplayAudioSynthComponent(const FObjectInitializer& ObjectInitializer);

};

