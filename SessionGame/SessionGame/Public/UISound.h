#pragma once
#include "CoreMinimal.h"
#include "UISound.generated.h"

class USoundBase;

USTRUCT(BlueprintType)
struct FUISound {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool _mute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* _sound;
    
public:
    SESSIONGAME_API FUISound();
};

