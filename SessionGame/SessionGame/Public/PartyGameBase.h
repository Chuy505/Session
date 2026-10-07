#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "EventReplyText.h"
#include "Templates/SubclassOf.h"
#include "PartyGameBase.generated.h"

class UMenuPageDefinition;
class UPartyGamesHUD;

UCLASS(Abstract, Blueprintable)
class SESSIONGAME_API APartyGameBase : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPartyGamesHUD> _partyGamesHUDBlueprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEventReplyText> _eventReplyTexts;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMenuPageDefinition* GameSettingsMenuPageDefinition;
    
public:
    APartyGameBase(const FObjectInitializer& ObjectInitializer);

};

