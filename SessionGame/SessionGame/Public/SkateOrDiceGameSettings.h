#pragma once
#include "CoreMinimal.h"
#include "BaseGameSettings.h"
#include "EDiceResultModes.h"
#include "SkateOrDiceGameSettings.generated.h"

USTRUCT(BlueprintType)
struct FSkateOrDiceGameSettings : public FBaseGameSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TimeLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumberOfTries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDiceResultModes DiceResultMode;
    
    SESSIONGAME_API FSkateOrDiceGameSettings();
};

