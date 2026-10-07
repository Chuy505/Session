#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "DatabaseCustomization.generated.h"

class UCustomizationItemDefinition;

UCLASS(Blueprintable)
class SESSIONGAME_API UDatabaseCustomization : public UDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> _sockHeights;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UCustomizationItemDefinition*> _defaultCustomizationItems;
    
public:
    UDatabaseCustomization();

};

