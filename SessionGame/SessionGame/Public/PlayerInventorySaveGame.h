#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SaveGame -FallbackName=SaveGame
#include "CustomizationInventoryPersistentData.h"
#include "DIYObjectsInventoryPersistentData.h"
#include "PlayerInventoryPersistentData.h"
#include "PlayerInventorySaveGame.generated.h"

UCLASS(Blueprintable)
class SESSIONGAME_API UPlayerInventorySaveGame : public USaveGame {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerInventoryPersistentData PlayerInventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCustomizationInventoryPersistentData CustomizationInventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDIYObjectsInventoryPersistentData DIYObjectsInventory;
    
    UPlayerInventorySaveGame();

};

