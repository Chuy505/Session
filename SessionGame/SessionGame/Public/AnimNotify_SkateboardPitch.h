#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotify -FallbackName=AnimNotify
#include "EPitchMode.h"
#include "AnimNotify_SkateboardPitch.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class SESSIONGAME_API UAnimNotify_SkateboardPitch : public UAnimNotify {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPitchMode _pitchMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float _pitchTimeMultiplier;
    
public:
    UAnimNotify_SkateboardPitch();

};

