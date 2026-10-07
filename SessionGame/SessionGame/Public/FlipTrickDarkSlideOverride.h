#pragma once
#include "CoreMinimal.h"
#include "FlipTrickDarkSlideOverride.generated.h"

class UFlipTrickDefinition;

USTRUCT(BlueprintType)
struct FFlipTrickDarkSlideOverride {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFlipTrickDefinition* FS_Override;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFlipTrickDefinition* BS_Override;
    
    SESSIONGAME_API FFlipTrickDarkSlideOverride();
};

