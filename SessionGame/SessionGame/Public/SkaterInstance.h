#pragma once
#include "CoreMinimal.h"
#include "SkaterInstance.generated.h"

class USkaterVisualsDefinition;

USTRUCT(BlueprintType)
struct SESSIONGAME_API FSkaterInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkaterVisualsDefinition* BaseVisualDefinition;
    
    FSkaterInstance();
};

