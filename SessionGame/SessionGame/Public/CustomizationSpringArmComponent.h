#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SpringArmComponent -FallbackName=SpringArmComponent
#include "CustomizationSpringArmComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SESSIONGAME_API UCustomizationSpringArmComponent : public USpringArmComponent {
    GENERATED_BODY()
public:
    UCustomizationSpringArmComponent(const FObjectInitializer& ObjectInitializer);

};

