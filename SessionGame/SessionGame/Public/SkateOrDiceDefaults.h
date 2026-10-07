#pragma once
#include "CoreMinimal.h"
#include "PartyGameDefaults.h"
#include "SkateOrDiceGameSettings.h"
#include "SkateOrDiceDefaults.generated.h"

USTRUCT(BlueprintType)
struct FSkateOrDiceDefaults : public FPartyGameDefaults {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumberOfDice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSkateOrDiceGameSettings GameSettings;
    
    SESSIONGAME_API FSkateOrDiceDefaults();
};

