#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "SkaterAIBehavior.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class CITYLIFE_API USkaterAIBehavior : public UObject {
    GENERATED_BODY()
public:
    USkaterAIBehavior();

};

