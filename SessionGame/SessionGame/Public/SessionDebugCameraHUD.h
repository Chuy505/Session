#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DebugCameraHUD -FallbackName=DebugCameraHUD
#include "SessionDebugCameraHUD.generated.h"

UCLASS(Blueprintable, HideDropdown, NonTransient)
class SESSIONGAME_API ASessionDebugCameraHUD : public ADebugCameraHUD {
    GENERATED_BODY()
public:
    ASessionDebugCameraHUD(const FObjectInitializer& ObjectInitializer);

};

