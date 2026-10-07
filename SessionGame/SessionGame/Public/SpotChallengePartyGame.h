#pragma once
#include "CoreMinimal.h"
#include "PartyGameBase.h"
#include "Templates/SubclassOf.h"
#include "SpotChallengePartyGame.generated.h"

class APartyGamesCamera;
class ASkateEventLocationTriggerBox;
class UFlipTrickDefinition;
class UGrindOrSlideDefinition;
class USpotChallengeCustomWidget;

UCLASS(Blueprintable)
class SESSIONGAME_API ASpotChallengePartyGame : public APartyGameBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ASkateEventLocationTriggerBox> _skateEventLocationTriggerBoxBlueprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float _spotScaleSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float _spotRotationSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFlipTrickDefinition*> Tricks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UGrindOrSlideDefinition*> Grinds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USpotChallengeCustomWidget> _customWidgetBlueprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<APartyGamesCamera> _cameraActorBlueprint;
    
public:
    ASpotChallengePartyGame(const FObjectInitializer& ObjectInitializer);

};

