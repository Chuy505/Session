#pragma once
#include "CoreMinimal.h"
#include "CatchOrientSettings.h"
#include "ECatchFootType.h"
#include "ECatchOrientState.h"
#include "CatchOrientDefinition.generated.h"

USTRUCT(BlueprintType)
struct FCatchOrientDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECatchOrientState CatchState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECatchFootType CatchFootType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCatchOrientSettings BackSideSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCatchOrientSettings FrontSideSettings;
    
    SESSIONGAME_API FCatchOrientDefinition();
};

