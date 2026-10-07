#pragma once
#include "CoreMinimal.h"
#include "SkateEventLocationTriggerBox.h"
#include "JamBoundaryBox.generated.h"

UCLASS(Blueprintable)
class SESSIONGAME_API AJamBoundaryBox : public ASkateEventLocationTriggerBox {
    GENERATED_BODY()
public:
    AJamBoundaryBox(const FObjectInitializer& ObjectInitializer);

};

