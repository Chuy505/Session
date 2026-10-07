#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InputCore -ObjectName=Key -FallbackName=Key
#include "ETRXControllerType.h"
#include "TRXControllerKeyIconsConfig.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FTRXControllerKeyIconsConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETRXControllerType controllerType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideFallbackConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETRXControllerType OverridenFallbackConfigControllerType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKey, TSoftObjectPtr<UTexture2D>> Icons;
    
    TRX_API FTRXControllerKeyIconsConfig();
};

