#pragma once
#include "CoreMinimal.h"
#include "BrandFilterUIData.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FBrandFilterUIData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* DisplayTexture;
    
    SESSIONGAME_API FBrandFilterUIData();
};

