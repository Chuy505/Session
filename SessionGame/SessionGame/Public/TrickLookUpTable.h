#pragma once
#include "CoreMinimal.h"
#include "TrickLookUpTable.generated.h"

USTRUCT(BlueprintType)
struct FTrickLookUpTable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<float, FName> Heelflips;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<float, FName> Kickflips;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<float, FName> Ollies;
    
    SESSIONGAME_API FTrickLookUpTable();
};

