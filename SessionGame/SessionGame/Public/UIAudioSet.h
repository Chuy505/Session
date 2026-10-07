#pragma once
#include "CoreMinimal.h"
#include "UIAudioSetBasic.h"
#include "UISound.h"
#include "UIAudioSet.generated.h"

UCLASS(Blueprintable)
class SESSIONGAME_API UUIAudioSet : public UUIAudioSetBasic {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUIAudioSetBasic* _parentAudioSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUISound _onClose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUISound _onConfirm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUISound _onCancel;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUIAudioSetBasic* _setChild;
    
public:
    UUIAudioSet();

};

