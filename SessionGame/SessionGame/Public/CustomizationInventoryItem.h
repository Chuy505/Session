#pragma once
#include "CoreMinimal.h"
#include "CustomizationInventoryItemInstance.h"
#include "InventoryItemBasePesistentData.h"
#include "CustomizationInventoryItem.generated.h"

USTRUCT(BlueprintType)
struct FCustomizationInventoryItem : public FInventoryItemBasePesistentData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCustomizationInventoryItemInstance> InstanceList;
    
    SESSIONGAME_API FCustomizationInventoryItem();
};

