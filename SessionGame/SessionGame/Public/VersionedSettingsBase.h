#pragma once
#include "CoreMinimal.h"
#include "VersionedSettingsBase.generated.h"

USTRUCT(BlueprintType)
struct FVersionedSettingsBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Version;
    
    SESSIONGAME_API FVersionedSettingsBase();
};

