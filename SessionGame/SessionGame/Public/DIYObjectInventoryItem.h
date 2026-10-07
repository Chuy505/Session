#pragma once
#include "CoreMinimal.h"
#include "InventoryItemBasePesistentData.h"
#include "DIYObjectInventoryItem.generated.h"

USTRUCT(BlueprintType)
struct FDIYObjectInventoryItem : public FInventoryItemBasePesistentData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Quantity;
    
    SESSIONGAME_API FDIYObjectInventoryItem();
};

