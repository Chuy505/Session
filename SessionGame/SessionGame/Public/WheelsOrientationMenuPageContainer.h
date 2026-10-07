#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
#include "MenuPageContainer.h"
#include "SkateShopSkateboardSettings.h"
#include "WheelsOrientationMenuPageContainer.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class SESSIONGAME_API UWheelsOrientationMenuPageContainer : public UMenuPageContainer {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSkateShopSkateboardSettings> _skateshopWheelCameraSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRotator> _hubWheelCameraSettings;
    
public:
    UWheelsOrientationMenuPageContainer();

};

