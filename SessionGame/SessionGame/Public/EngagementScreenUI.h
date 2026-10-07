#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "EngagementScreenUI.generated.h"

class UCanvasPanel;

UCLASS(Blueprintable, EditInlineNew)
class SESSIONGAME_API UEngagementScreenUI : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* _canvasTitleScreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* _canvasGamePreviewDisclaimer;
    
public:
    UEngagementScreenUI();

};

