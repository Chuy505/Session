#pragma once
#include "CoreMinimal.h"
#include "GrindingContactResult.generated.h"

class UPrimitiveComponent;

USTRUCT(BlueprintType)
struct SESSIONGAME_API FGrindingContactResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* ContactPart;
    
    FGrindingContactResult();
};

