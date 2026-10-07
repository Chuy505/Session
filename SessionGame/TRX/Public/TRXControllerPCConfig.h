#pragma once
#include "CoreMinimal.h"
#include "ETRXControllerType.h"
#include "TRXControllerPCConfig.generated.h"

USTRUCT(BlueprintType)
struct FTRXControllerPCConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSupportKeyboardAndMouse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSupportGamepad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETRXControllerType DefaultGamepadType;
    
    TRX_API FTRXControllerPCConfig();
};

