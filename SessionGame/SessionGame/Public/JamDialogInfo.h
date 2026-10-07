#pragma once
#include "CoreMinimal.h"
#include "JamDialogTextLineInfo.h"
#include "JamDialogInfo.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FJamDialogInfo {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* _speakerTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FJamDialogTextLineInfo> _dialog;
    
public:
    SESSIONGAME_API FJamDialogInfo();
};

