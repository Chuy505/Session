#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DebugCameraController -FallbackName=DebugCameraController
#include "SessionDebugCameraController.generated.h"

UCLASS(Blueprintable)
class SESSIONGAME_API ASessionDebugCameraController : public ADebugCameraController {
    GENERATED_BODY()
public:
    ASessionDebugCameraController(const FObjectInitializer& ObjectInitializer);

};

