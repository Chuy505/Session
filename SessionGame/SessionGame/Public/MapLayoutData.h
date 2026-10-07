#pragma once
#include "CoreMinimal.h"
#include "MapLayoutData.generated.h"

USTRUCT(BlueprintType)
struct FMapLayoutData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> Layouts;
    
    SESSIONGAME_API FMapLayoutData();
};

