#pragma once
#include "CoreMinimal.h"
#include "ObjectDropperObjectInformation.h"
#include "ObjectDropperObjectCategory.generated.h"

USTRUCT(BlueprintType)
struct FObjectDropperObjectCategory {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText _displayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FObjectDropperObjectInformation> _objectList;
    
public:
    SESSIONGAME_API FObjectDropperObjectCategory();
};

