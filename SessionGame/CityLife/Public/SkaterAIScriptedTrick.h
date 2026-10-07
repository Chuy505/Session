#pragma once
#include "CoreMinimal.h"
#include "SkaterAIScriptedTrick.generated.h"

USTRUCT(BlueprintType)
struct FSkaterAIScriptedTrick {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TrickName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SuccessRatio;
    
    CITYLIFE_API FSkaterAIScriptedTrick();
};

