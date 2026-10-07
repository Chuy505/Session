#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PlayerController -FallbackName=PlayerController
#include "CustomizationPlayerController.generated.h"

UCLASS(Blueprintable)
class SESSIONGAME_API ACustomizationPlayerController : public APlayerController {
    GENERATED_BODY()
public:
    ACustomizationPlayerController(const FObjectInitializer& ObjectInitializer);

};

