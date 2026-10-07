#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "Templates/SubclassOf.h"
#include "StatsSectionBaseUI.generated.h"

class UScrollBox;
class UStatsSectionTitleUI;
class UStatsStatInfoUI;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class SESSIONGAME_API UStatsSectionBaseUI : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UStatsSectionTitleUI> _stats_SectionTitleBlueprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UStatsStatInfoUI> _stats_StatInfoBlueprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScrollBox* _sectionScrollBox;
    
public:
    UStatsSectionBaseUI();

};

