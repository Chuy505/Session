#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "SkateboardPartsInterface.h"
#include "CustomizationSkateboard.generated.h"

UCLASS(Blueprintable)
class SESSIONGAME_API ACustomizationSkateboard : public AActor, public ISkateboardPartsInterface {
    GENERATED_BODY()
public:
    ACustomizationSkateboard(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

