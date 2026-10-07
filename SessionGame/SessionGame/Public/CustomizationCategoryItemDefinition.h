#pragma once
#include "CoreMinimal.h"
#include "CategoryCameraSetting.h"
#include "CategoryMeshTransformSetting.h"
#include "EMeshTypes.h"
#include "CustomizationCategoryItemDefinition.generated.h"

USTRUCT(BlueprintType)
struct FCustomizationCategoryItemDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ParentId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMeshTypes MeshType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsPropCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCategoryCameraSetting CameraSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCategoryMeshTransformSetting MeshTransformSetting;
    
    SESSIONGAME_API FCustomizationCategoryItemDefinition();
};

