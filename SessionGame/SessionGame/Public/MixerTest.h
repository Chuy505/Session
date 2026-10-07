#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "MixerTest.generated.h"

UCLASS(Blueprintable)
class SESSIONGAME_API AMixerTest : public AActor {
    GENERATED_BODY()
public:
    AMixerTest(const FObjectInitializer& ObjectInitializer);

};

