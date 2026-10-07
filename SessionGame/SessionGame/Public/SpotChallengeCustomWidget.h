#pragma once
#include "CoreMinimal.h"
#include "PartyGamesCustomWidget.h"
#include "SpotChallengeCustomWidget.generated.h"

class UImage;
class UPartyGamesTrickSelectorWidget;
class UTrickList;

UCLASS(Blueprintable, EditInlineNew)
class SESSIONGAME_API USpotChallengeCustomWidget : public UPartyGamesCustomWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* _reticleImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPartyGamesTrickSelectorWidget* TrickSelector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTrickList* TrickList;
    
public:
    USpotChallengeCustomWidget();

};

