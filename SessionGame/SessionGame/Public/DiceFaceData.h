#pragma once
#include "CoreMinimal.h"
#include "DiceFaceData.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FDiceFaceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* FaceTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Value;
    
    SESSIONGAME_API FDiceFaceData();
};

