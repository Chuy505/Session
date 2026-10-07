#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "ObjectDropperObjectCategory.h"
#include "ObjectDropperObjectsDatabase.generated.h"

UCLASS(Blueprintable)
class SESSIONGAME_API UObjectDropperObjectsDatabase : public UDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FObjectDropperObjectCategory> _objectCategories;
    
public:
    UObjectDropperObjectsDatabase();

};

