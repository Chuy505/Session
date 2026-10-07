#pragma once
#include "CoreMinimal.h"
#include "AdvancedSettings.h"
#include "VersionedSettingsBase.h"
#include "AdvancedSettingsPresets.generated.h"

USTRUCT(BlueprintType)
struct FAdvancedSettingsPresets : public FVersionedSettingsBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ActivePresetIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAdvancedSettings> Presets;
    
    SESSIONGAME_API FAdvancedSettingsPresets();
};

