#pragma once
#include "CoreMinimal.h"
#include "ReplayScrubberMarkerTextureInfo.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FReplayScrubberMarkerTextureInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName KeyframeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CustomKeyframeIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* MarkerTexture;
    
    SESSIONGAME_API FReplayScrubberMarkerTextureInfo();
};

