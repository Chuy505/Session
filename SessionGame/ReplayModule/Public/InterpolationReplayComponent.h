#pragma once
#include "CoreMinimal.h"
#include "ReplayComponentBase.h"
#include "InterpolationReplayComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class REPLAYMODULE_API UInterpolationReplayComponent : public UReplayComponentBase {
    GENERATED_BODY()
public:
    UInterpolationReplayComponent(const FObjectInitializer& ObjectInitializer);

};

