#pragma once
#include "CoreMinimal.h"
#include "EventLocation.generated.h"

USTRUCT(BlueprintType)
struct FEventLocation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StartLocationName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EndLocationName;
    
    SESSIONGAME_API FEventLocation();
};

