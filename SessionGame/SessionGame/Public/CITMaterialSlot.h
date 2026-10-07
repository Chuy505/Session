#pragma once
#include "CoreMinimal.h"
#include "CITMaterialSlot.generated.h"

USTRUCT(BlueprintType)
struct FCITMaterialSlot {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName _name;
    
public:
    SESSIONGAME_API FCITMaterialSlot();
};

