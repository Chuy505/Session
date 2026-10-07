#pragma once
#include "CoreMinimal.h"
#include "MenuPageContainer.h"
#include "Templates/SubclassOf.h"
#include "SkateShopMenuPageContainer.generated.h"

class ACharacterCustomization;
class UCanvasPanel;
class UColorCustomizationMenuPageContainer;
class UMenuPageDefinition;
class USkateShopMenuAudioSet;
class USkateShopUI;
class UUIGamePadButton;
class UWheelsOrientationMenuPageContainer;
class UWidgetCustomizationGrid;

UCLASS(Blueprintable, EditInlineNew)
class SESSIONGAME_API USkateShopMenuPageContainer : public UMenuPageContainer {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUIGamePadButton* _rotateGamepadButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUIGamePadButton* _lookAroundGamepadButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUIGamePadButton* _moveInwardGamepadButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UWidgetCustomizationGrid> _gridWidget_Blueprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USkateShopUI> _skateShopUI_Blueprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UWheelsOrientationMenuPageContainer> _wheelsOrientation_Blueprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UColorCustomizationMenuPageContainer> _colorCustomization_Blueprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkateShopMenuAudioSet* _skateboardGearAudioSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkateShopMenuAudioSet* _apparelAudioSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkateShopMenuAudioSet* _DIYAudioSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMenuPageDefinition* _buyPopupDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* CanvasPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ACharacterCustomization* _characterCustomization;
    
public:
    USkateShopMenuPageContainer();

};

