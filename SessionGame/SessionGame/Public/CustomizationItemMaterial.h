#pragma once
#include "CoreMinimal.h"
#include "CITMaterialSlot.h"
#include "CustomizationItemMaterialVariant.h"
#include "CustomizationItemMaterial.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct FCustomizationItemMaterial {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCITMaterialSlot MaterialSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialInterface> Material;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCustomizationItemMaterialVariant> MaterialVariants;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialInterface> Material_AFXX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCustomizationItemMaterialVariant> MaterialVariants_AFXX;
    
    SESSIONGAME_API FCustomizationItemMaterial();
};

