#pragma once
#include "CoreMinimal.h"
#include "OptionsSettings.generated.h"

USTRUCT(BlueprintType)
struct FOptionsSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LanguageTarget;
    
    SESSIONGAME_API FOptionsSettings();
};

