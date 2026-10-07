#pragma once
#include "CoreMinimal.h"
#include "GearQuestRewardLoot.generated.h"

class UCustomizationItemDefinition;

USTRUCT(BlueprintType)
struct FGearQuestRewardLoot {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SelectionWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCustomizationItemDefinition* Item;
    
    SESSIONGAME_API FGearQuestRewardLoot();
};

