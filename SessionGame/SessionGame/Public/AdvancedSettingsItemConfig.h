#pragma once
#include "CoreMinimal.h"
#include "AdvancedSettingsItemConfig.generated.h"

USTRUCT(BlueprintType)
struct FAdvancedSettingsItemConfig {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float _minValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float _maxValue;
    
public:
    SESSIONGAME_API FAdvancedSettingsItemConfig();
};

