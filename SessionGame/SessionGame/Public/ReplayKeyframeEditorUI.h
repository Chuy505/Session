#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "ReplayKeyframeEditorConfig.h"
#include "Templates/SubclassOf.h"
#include "ReplayKeyframeEditorUI.generated.h"

class UReplayKeyframeAttributeUI;
class UTextBlock;
class UVerticalBox;

UCLASS(Blueprintable, EditInlineNew)
class SESSIONGAME_API UReplayKeyframeEditorUI : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UReplayKeyframeAttributeUI> _keyframeAttributeBlueprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText _titlePrefix;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FReplayKeyframeEditorConfig> _editorConfigs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* _titleText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* _attributesPanel;
    
public:
    UReplayKeyframeEditorUI();

};

