#pragma once
#include "CoreMinimal.h"
#include "MenuAudioSet.h"
#include "UISound.h"
#include "PauseMenuAudioSet.generated.h"

class UUIAudioSetBasic;

UCLASS(Blueprintable)
class UPauseMenuAudioSet : public UMenuAudioSet {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUIAudioSetBasic* _parentPauseMenuAudioSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUISound _onTrackQuestToggle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUISound _onDeleteReplay;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUIAudioSetBasic* _PauseMenuChild;
    
public:
    UPauseMenuAudioSet();

};

