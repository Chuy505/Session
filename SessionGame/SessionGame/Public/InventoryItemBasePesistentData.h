#pragma once
#include "CoreMinimal.h"
#include "InventoryItemBasePesistentData.generated.h"

USTRUCT(BlueprintType)
struct FInventoryItemBasePesistentData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 IsNew: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 IsOwned: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 IsUnlocked: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 IsVisible: 1;
    
    SESSIONGAME_API FInventoryItemBasePesistentData();
};

