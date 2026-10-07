#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "ContactPartDecayRecord.h"
#include "EGrindContactBoardParts.h"
#include "CITContactPartsDecayDatabase.generated.h"

UCLASS(Blueprintable)
class SESSIONGAME_API UCITContactPartsDecayDatabase : public UDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EGrindContactBoardParts, FContactPartDecayRecord> _contactPartDecayRecords;
    
public:
    UCITContactPartsDecayDatabase();

};

