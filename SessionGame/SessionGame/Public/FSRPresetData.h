#pragma once
#include "CoreMinimal.h"
#include "FSRPresetData.generated.h"

USTRUCT(BlueprintType)
struct FFSRPresetData {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText _label;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float _screenPercentage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float _mipMapLODBias;
    
public:
    SESSIONGAME_API FFSRPresetData();
};

