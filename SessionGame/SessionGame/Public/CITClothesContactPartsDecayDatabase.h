#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "ClothesContactPartDecayRecord.h"
#include "EClothesContactParts.h"
#include "CITClothesContactPartsDecayDatabase.generated.h"

UCLASS(Blueprintable)
class SESSIONGAME_API UCITClothesContactPartsDecayDatabase : public UDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EClothesContactParts, FClothesContactPartDecayRecord> _contactPartDecayRecords;
    
public:
    UCITClothesContactPartsDecayDatabase();

};

