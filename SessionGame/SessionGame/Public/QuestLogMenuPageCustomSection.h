#pragma once
#include "CoreMinimal.h"
#include "MenuPageCustomSection.h"
#include "Templates/SubclassOf.h"
#include "QuestLogMenuPageCustomSection.generated.h"

class UCanvasPanel;
class UHorizontalBox;
class UQuestLogObjectiveUI;
class URichTextBlock;
class UScrollBox;
class UTextBlock;
class UUIGamePadButton;
class UVerticalBox;

UCLASS(Blueprintable, EditInlineNew)
class SESSIONGAME_API UQuestLogMenuPageCustomSection : public UMenuPageCustomSection {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UQuestLogObjectiveUI> _quest_ObjectiveBlueprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* _questInfoPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* _questNameText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URichTextBlock* _questDescriptionText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* _questObjectivesPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScrollBox* _questObjectivesScrollBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* _rewardsPanelRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHorizontalBox* _rewardsPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUIGamePadButton* _trackQuestButton;
    
public:
    UQuestLogMenuPageCustomSection();

};

