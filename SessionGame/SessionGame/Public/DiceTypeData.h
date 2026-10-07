#pragma once
#include "CoreMinimal.h"
#include "DiceTypeData.generated.h"

USTRUCT(BlueprintType)
struct FDiceTypeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> DisplayTexts;
    
    SESSIONGAME_API FDiceTypeData();
};

