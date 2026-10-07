#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "MapSelectData.h"
#include "MapSelectDataAsset.generated.h"

UCLASS(Blueprintable)
class SESSIONGAME_API UMapSelectDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMapSelectData> _maps;
    
public:
    UMapSelectDataAsset();

};

