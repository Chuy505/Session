#pragma once
#include "CoreMinimal.h"
#include "ColorCustomizationMaskColorItem.h"
#include "ColorCustomizationMaskPattern.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FColorCustomizationMaskPattern {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> ColorPatternMask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColorCustomizationMaskColorItem Color1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColorCustomizationMaskColorItem Color2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColorCustomizationMaskColorItem Color3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColorCustomizationMaskColorItem Color4;
    
    SESSIONGAME_API FColorCustomizationMaskPattern();
};

