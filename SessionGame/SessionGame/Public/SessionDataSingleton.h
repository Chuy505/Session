#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "SessionDataSingleton.generated.h"

class UCITClothesContactPartsDecayDatabase;
class UCITContactPartsDecayDatabase;
class UCameraFiltersDataAsset;
class UCameraLensDataAsset;
class UCameraModelsDataAsset;
class UCatchOrientsDatabase;
class UDatabaseCategories;
class UDatabaseCompany;
class UDatabaseCustomization;
class UGrindsDatabase;
class UInputsDatabase;
class UManualsDatabase;
class UPowerSlidesDatabase;
class URevertsDatabase;
class UTricksDatabase;

UCLASS(Blueprintable)
class SESSIONGAME_API USessionDataSingleton : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCatchOrientsDatabase* _catchOrientsDb;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGrindsDatabase* _grindsDb;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputsDatabase* _inputsDb;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UManualsDatabase* _manualsDb;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPowerSlidesDatabase* _powerSlidesDb;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URevertsDatabase* _revertsDb;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTricksDatabase* _tricksDb;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDatabaseCustomization* _customizationDb;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDatabaseCategories* _customizationCategoriesDb;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDatabaseCompany* _customizationCompaniesDb;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCITContactPartsDecayDatabase* _contactPartsDecayDatabase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCITClothesContactPartsDecayDatabase* _clothesContactPartsDecayDatabase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCameraFiltersDataAsset* _cameraFilterSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCameraModelsDataAsset* _cameraModelSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCameraLensDataAsset* _cameraLensSettings;
    
public:
    USessionDataSingleton();

};

