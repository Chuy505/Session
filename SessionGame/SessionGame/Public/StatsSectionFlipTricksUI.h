#pragma once
#include "CoreMinimal.h"
#include "StatsSectionBaseUI.h"
#include "StatsSectionFlipTricksUI.generated.h"

class UVerticalBox;

UCLASS(Blueprintable, EditInlineNew)
class SESSIONGAME_API UStatsSectionFlipTricksUI : public UStatsSectionBaseUI {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* _flipTricksStatInfoPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* _lateTricksStatInfoPanel;
    
public:
    UStatsSectionFlipTricksUI();

};

