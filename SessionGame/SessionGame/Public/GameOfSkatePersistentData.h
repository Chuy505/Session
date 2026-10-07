#pragma once
#include "CoreMinimal.h"
#include "GameOfSkateGameSettings.h"
#include "GameOfSkatePersistentData.generated.h"

USTRUCT(BlueprintType)
struct FGameOfSkatePersistentData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Version;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameOfSkateGameSettings GameSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameOfSkateGameSettings CustomGameSettings;
    
    SESSIONGAME_API FGameOfSkatePersistentData();
};

