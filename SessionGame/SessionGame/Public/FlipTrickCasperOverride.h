#pragma once
#include "CoreMinimal.h"
#include "FlipTrickCasperOverride.generated.h"

class UFlipTrickDefinition;

USTRUCT(BlueprintType)
struct FFlipTrickCasperOverride {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFlipTrickDefinition* Casper;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFlipTrickDefinition* AntiCasper;
    
    SESSIONGAME_API FFlipTrickCasperOverride();
};

