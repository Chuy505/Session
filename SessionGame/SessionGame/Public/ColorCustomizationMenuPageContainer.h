#pragma once
#include "CoreMinimal.h"
#include "MenuPageContainer.h"
#include "Templates/SubclassOf.h"
#include "ColorCustomizationMenuPageContainer.generated.h"

class UColorSelectorWidget;

UCLASS(Blueprintable, EditInlineNew)
class SESSIONGAME_API UColorCustomizationMenuPageContainer : public UMenuPageContainer {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UColorSelectorWidget> _colorSelector_Blueprint;
    
public:
    UColorCustomizationMenuPageContainer();

};

