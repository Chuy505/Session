#pragma once
#include "CoreMinimal.h"
#include "MenuPageCustomSection.h"
#include "Templates/SubclassOf.h"
#include "CreditsScreenUI.generated.h"

class UCreditsDefinition;
class UCreditsEntryItem;
class UCreditsSectionItem;
class UVerticalBox;

UCLASS(Blueprintable, EditInlineNew)
class SESSIONGAME_API UCreditsScreenUI : public UMenuPageCustomSection {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCreditsEntryItem> _credits_EntryItemBlueprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCreditsSectionItem> _credits_MajorSectionItemBlueprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCreditsSectionItem> _credits_SectionItemBlueprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCreditsDefinition* _creditsDb;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* _creditsPanel;
    
public:
    UCreditsScreenUI();

};

