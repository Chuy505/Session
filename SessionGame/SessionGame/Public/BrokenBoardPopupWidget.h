#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "BrokenBoardPopupWidget.generated.h"

class UCanvasPanel;
class UUIAudioSet;
class UUIGamePadButton;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class SESSIONGAME_API UBrokenBoardPopupWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* _showPopupAnimation;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUIGamePadButton* _repairBoardButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* _canvasPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUIAudioSet* _audioSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float _shownDuration;
    
public:
    UBrokenBoardPopupWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void HandleOnPopupHidden();
    
};

