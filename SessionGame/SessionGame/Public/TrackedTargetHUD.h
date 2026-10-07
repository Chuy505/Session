#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "Templates/SubclassOf.h"
#include "TrackedTargetHUD.generated.h"

class UCanvasPanel;
class UTextBlock;
class UTrackedTargetWidget;

UCLASS(Blueprintable, EditInlineNew)
class SESSIONGAME_API UTrackedTargetHUD : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UTrackedTargetWidget> _trackedTragetBlueprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* _trackedTargetsPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* _text;
    
public:
    UTrackedTargetHUD();

};

