#pragma once
#include "CoreMinimal.h"
#include "CustomizationInventoryItemInstanceAttributes.h"
#include "CustomizationInventoryItemInstance.generated.h"

USTRUCT(BlueprintType)
struct FCustomizationInventoryItemInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCustomizationInventoryItemInstanceAttributes ItemAttributes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 VariantId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 IsConsumed: 1;
    
    SESSIONGAME_API FCustomizationInventoryItemInstance();
};

