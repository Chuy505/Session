#pragma once
#include "CoreMinimal.h"
#include "GameplaySettings.h"
#include "SessionDifficultyConfig.generated.h"

USTRUCT(BlueprintType)
struct FSessionDifficultyConfig {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText _displayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText _displayShortDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText _displaySummary;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplaySettings _settings;
    
public:
    SESSIONGAME_API FSessionDifficultyConfig();
};

