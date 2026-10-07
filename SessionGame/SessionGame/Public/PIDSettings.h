#pragma once
#include "CoreMinimal.h"
#include "PIDSettings.generated.h"

USTRUCT(BlueprintType)
struct SESSIONGAME_API FPIDSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float P;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float I;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float D;
    
    FPIDSettings();
};

