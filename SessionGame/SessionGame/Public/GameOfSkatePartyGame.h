#pragma once
#include "CoreMinimal.h"
#include "PartyGameBase.h"
#include "Templates/SubclassOf.h"
#include "GameOfSkatePartyGame.generated.h"

class UGameOfSkateCustomWidget;
class UGrindsDatabase;
class UTricksDatabase;

UCLASS(Blueprintable)
class SESSIONGAME_API AGameOfSkatePartyGame : public APartyGameBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameOfSkateCustomWidget> _customWidgetBlueprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTricksDatabase* _trickDatabase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGrindsDatabase* _grindsDatabase;
    
public:
    AGameOfSkatePartyGame(const FObjectInitializer& ObjectInitializer);

};

