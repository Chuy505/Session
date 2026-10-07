#pragma once
#include "CoreMinimal.h"
#include "BaseGameSettings.h"
#include "GameOfSkateGameSettings.generated.h"

USTRUCT(BlueprintType)
struct FGameOfSkateGameSettings : public FBaseGameSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AllowGrinds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MatchingTimeLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumberOfTricks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SettingTimeLimit;
    
    SESSIONGAME_API FGameOfSkateGameSettings();
};

