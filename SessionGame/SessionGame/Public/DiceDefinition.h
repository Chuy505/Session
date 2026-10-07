#pragma once
#include "CoreMinimal.h"
#include "DiceData.h"
#include "DiceFaceData.h"
#include "EPartyGameGameModes.h"
#include "DiceDefinition.generated.h"

USTRUCT(BlueprintType)
struct FDiceDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDiceFaceData> FaceData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EPartyGameGameModes, FDiceData> Map;
    
    SESSIONGAME_API FDiceDefinition();
};

