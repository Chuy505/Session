#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "CompanyItemDefinition.h"
#include "DatabaseCompany.generated.h"

UCLASS(Blueprintable)
class SESSIONGAME_API UDatabaseCompany : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText UIDisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCompanyItemDefinition> Table;
    
    UDatabaseCompany();

};

