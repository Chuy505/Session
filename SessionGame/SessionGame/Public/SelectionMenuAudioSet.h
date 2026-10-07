#pragma once
#include "CoreMinimal.h"
#include "MenuAudioSet.h"
#include "UISound.h"
#include "SelectionMenuAudioSet.generated.h"

class UUIAudioSetBasic;

UCLASS(Blueprintable)
class USelectionMenuAudioSet : public UMenuAudioSet {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUIAudioSetBasic* _parentSelectionMenuAudioSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUISound _onItemSelected;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUIAudioSetBasic* _selectionMenuChild;
    
public:
    USelectionMenuAudioSet();

};

