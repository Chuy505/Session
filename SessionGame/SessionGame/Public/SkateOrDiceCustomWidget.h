#pragma once
#include "CoreMinimal.h"
#include "PartyGamesCustomWidget.h"
#include "Templates/SubclassOf.h"
#include "SkateOrDiceCustomWidget.generated.h"

class UDiceWidget;
class UGiveOrTakeWidget;
class UVerticalBox;

UCLASS(Blueprintable, EditInlineNew)
class SESSIONGAME_API USkateOrDiceCustomWidget : public UPartyGamesCustomWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UDiceWidget> _diceWidgetBlueprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* _dicePanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGiveOrTakeWidget* _giveOrTakeWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float _rollStartTimeDilation;
    
public:
    USkateOrDiceCustomWidget();

};

