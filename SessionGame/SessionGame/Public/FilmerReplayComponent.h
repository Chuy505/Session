#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ReplayModule -ObjectName=CameraReplayComponent -FallbackName=CameraReplayComponent
#include "FilmerReplayComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SESSIONGAME_API UFilmerReplayComponent : public UCameraReplayComponent {
    GENERATED_BODY()
public:
    UFilmerReplayComponent(const FObjectInitializer& ObjectInitializer);

};

