#pragma once
#include "CoreMinimal.h"
#include "GeneralStatsPersistentData.generated.h"

USTRUCT(BlueprintType)
struct FGeneralStatsPersistentData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Version;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FName> VisitedHub;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 BoughtDIYItemCount;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 BoughtCustomizationItemCount;
    
    SESSIONGAME_API FGeneralStatsPersistentData();
};

