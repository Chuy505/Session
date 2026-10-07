#pragma once
#include "CoreMinimal.h"
#include "CITMaterialSlot.h"
#include "CustomizationSocksVariantDetails.h"
#include "CustomizationSocksDetails.generated.h"

USTRUCT(BlueprintType)
struct FCustomizationSocksDetails {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCITMaterialSlot MaterialSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasStripes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StripeWidth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StripePos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StripeCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCustomizationSocksVariantDetails> Variants;
    
    SESSIONGAME_API FCustomizationSocksDetails();
};

