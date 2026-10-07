#pragma once
#include "CoreMinimal.h"
#include "UIAudioSet.h"
#include "UISound.h"
#include "MenuAudioSet.generated.h"

class UUIAudioSetBasic;

UCLASS(Blueprintable)
class UMenuAudioSet : public UUIAudioSet {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUIAudioSetBasic* _parentMenuAudioSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUISound _onSelectionChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUISound _onMultiSelectionChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUISound _onProgressBarValueChange;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUIAudioSetBasic* _menuChild;
    
public:
    UMenuAudioSet();

};

