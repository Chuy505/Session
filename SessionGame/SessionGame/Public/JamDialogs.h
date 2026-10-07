#pragma once
#include "CoreMinimal.h"
#include "JamDialogInfo.h"
#include "JamDialogs.generated.h"

USTRUCT(BlueprintType)
struct FJamDialogs {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FJamDialogInfo _failRoundDialog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FJamDialogInfo _successRoundDialog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FJamDialogInfo _failRoundLeadDialog;
    
public:
    SESSIONGAME_API FJamDialogs();
};

