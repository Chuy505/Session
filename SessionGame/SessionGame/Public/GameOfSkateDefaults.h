#pragma once
#include "CoreMinimal.h"
#include "GameOfSkateGameSettings.h"
#include "PartyGameDefaults.h"
#include "GameOfSkateDefaults.generated.h"

USTRUCT(BlueprintType)
struct FGameOfSkateDefaults : public FPartyGameDefaults {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxTrickSequences;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameOfSkateGameSettings GameSettings;
    
    SESSIONGAME_API FGameOfSkateDefaults();
};

