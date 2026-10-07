#pragma once
#include "CoreMinimal.h"
#include "FlipTrickAnimNotifyData.generated.h"

USTRUCT(BlueprintType)
struct FFlipTrickAnimNotifyData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PopNotifyTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TrickStartPitchNotifyTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TrickEndPitchNotifyTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GrindStartPitchNotifyTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GrindEndPitchNotifyTime;
    
    SESSIONGAME_API FFlipTrickAnimNotifyData();
};

