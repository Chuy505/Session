#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "CategoryCameraSetting.h"
#include "CategoryMeshTransformSetting.h"
#include "CustomizationCategoryItemDefinition.h"
#include "DatabaseCategories.generated.h"

UCLASS(Blueprintable)
class SESSIONGAME_API UDatabaseCategories : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText UIDisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCategoryCameraSetting DefaultCameraSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCategoryCameraSetting DefaultSkateboardCameraSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCategoryMeshTransformSetting DefaultMeshTransformSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCustomizationCategoryItemDefinition> Table;
    
    UDatabaseCategories();

};

