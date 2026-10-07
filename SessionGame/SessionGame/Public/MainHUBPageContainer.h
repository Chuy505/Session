#pragma once
#include "CoreMinimal.h"
#include "MenuPageContainer.h"
#include "MainHUBPageContainer.generated.h"

class UPanelWidget;

UCLASS(Blueprintable, EditInlineNew)
class SESSIONGAME_API UMainHUBPageContainer : public UMenuPageContainer {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* _myNaconAccountStatusPanel;
    
public:
    UMainHUBPageContainer();

};

