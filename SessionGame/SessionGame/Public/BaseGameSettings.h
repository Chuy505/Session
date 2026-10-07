#pragma once
#include "CoreMinimal.h"
#include "EPartyGameGameModes.h"
#include "BaseGameSettings.generated.h"

USTRUCT(BlueprintType)
struct FBaseGameSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPartyGameGameModes GameMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText GameWord;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumberOfChances;
    
    SESSIONGAME_API FBaseGameSettings();
};

