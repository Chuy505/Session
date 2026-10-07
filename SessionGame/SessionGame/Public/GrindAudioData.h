#pragma once
#include "CoreMinimal.h"
#include "GrindAudioData.generated.h"

class USoundCue;

USTRUCT(BlueprintType)
struct FGrindAudioData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* InSoundCue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* LoopSoundCue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* OutSoundCue;
    
    SESSIONGAME_API FGrindAudioData();
};

