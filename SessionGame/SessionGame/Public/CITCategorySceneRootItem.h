#pragma once
#include "CoreMinimal.h"
#include "CITCategorySceneRootItem.generated.h"

class USceneComponent;

USTRUCT(BlueprintType)
struct FCITCategorySceneRootItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CategoryId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CharacterType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* Root;
    
    SESSIONGAME_API FCITCategorySceneRootItem();
};

