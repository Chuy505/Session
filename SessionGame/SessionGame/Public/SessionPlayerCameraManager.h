#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PlayerCameraManager -FallbackName=PlayerCameraManager
#include "SessionPlayerCameraManager.generated.h"

UCLASS(Blueprintable, NonTransient)
class SESSIONGAME_API ASessionPlayerCameraManager : public APlayerCameraManager {
    GENERATED_BODY()
public:
    ASessionPlayerCameraManager(const FObjectInitializer& ObjectInitializer);

};

