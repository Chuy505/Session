#pragma once
#include "CoreMinimal.h"
#include "CustomizationInventoryItemCustomColorAttribute.h"
#include "CustomizationInventoryItemInstanceAttributes.generated.h"

USTRUCT(BlueprintType)
struct FCustomizationInventoryItemInstanceAttributes {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, float> DirtRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, float> WearRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, bool> WheelGraphicFlip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 SockHeightIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCustomizationInventoryItemCustomColorAttribute CustomColorAttribute;
    
    SESSIONGAME_API FCustomizationInventoryItemInstanceAttributes();
};

