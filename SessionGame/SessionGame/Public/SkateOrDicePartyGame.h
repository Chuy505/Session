#pragma once
#include "CoreMinimal.h"
#include "PartyGameBase.h"
#include "Templates/SubclassOf.h"
#include "SkateOrDicePartyGame.generated.h"

class USkateOrDiceCustomWidget;

UCLASS(Blueprintable)
class SESSIONGAME_API ASkateOrDicePartyGame : public APartyGameBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USkateOrDiceCustomWidget> _customWidgetBlueprint;
    
public:
    ASkateOrDicePartyGame(const FObjectInitializer& ObjectInitializer);

};

