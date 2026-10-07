#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ReplayModule -ObjectName=AnimNotify_PlaySoundRecorded -FallbackName=AnimNotify_PlaySoundRecorded
#include "AnimNotify_PlayCatchSound.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class SESSIONGAME_API UAnimNotify_PlayCatchSound : public UAnimNotify_PlaySoundRecorded {
    GENERATED_BODY()
public:
    UAnimNotify_PlayCatchSound();

};

