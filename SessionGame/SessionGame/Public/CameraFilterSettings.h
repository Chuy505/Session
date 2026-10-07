#pragma once
#include "CoreMinimal.h"
#include "CameraFilterSettings.generated.h"

class UTexture;

USTRUCT(BlueprintType)
struct FCameraFilterSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture* FilterLUTTexture;
    
    SESSIONGAME_API FCameraFilterSettings();
};

