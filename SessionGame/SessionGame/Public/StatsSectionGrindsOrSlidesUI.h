#pragma once
#include "CoreMinimal.h"
#include "StatsSectionBaseUI.h"
#include "StatsSectionGrindsOrSlidesUI.generated.h"

class UVerticalBox;

UCLASS(Blueprintable, EditInlineNew)
class SESSIONGAME_API UStatsSectionGrindsOrSlidesUI : public UStatsSectionBaseUI {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* _grindsRegularStatInfoPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* _grindsSwitchStatInfoPanel;
    
public:
    UStatsSectionGrindsOrSlidesUI();

};

