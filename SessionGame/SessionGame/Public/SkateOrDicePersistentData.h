#pragma once
#include "CoreMinimal.h"
#include "SkateOrDiceGameSettings.h"
#include "SkateOrDicePersistentData.generated.h"

USTRUCT(BlueprintType)
struct FSkateOrDicePersistentData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Version;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSkateOrDiceGameSettings GameSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSkateOrDiceGameSettings CustomGameSettings;
    
    SESSIONGAME_API FSkateOrDicePersistentData();
};

