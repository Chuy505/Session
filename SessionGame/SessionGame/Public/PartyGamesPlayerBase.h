#pragma once
#include "CoreMinimal.h"
#include "EStanceType.h"
#include "PartyGamesPlayerBase.generated.h"

USTRUCT(BlueprintType)
struct FPartyGamesPlayerBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStanceType StanceType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ControllerId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Index;
    
    SESSIONGAME_API FPartyGamesPlayerBase();
};

