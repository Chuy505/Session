#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "SkaterAITrickDefinition.h"
#include "SkaterAIConditionalTrick.generated.h"

class USkaterAITrickCondition;

USTRUCT(BlueprintType)
struct FSkaterAIConditionalTrick {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkaterAITrickCondition* Condition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSkaterAITrickDefinition Trick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Destination;
    
    CITYLIFE_API FSkaterAIConditionalTrick();
};

