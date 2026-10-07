#pragma once
#include "CoreMinimal.h"
#include "MenuPageCustomSection.h"
#include "StatsMenuPageCustomSection.generated.h"

class UStatsSectionFlipTricksUI;
class UStatsSectionGlobalUI;
class UStatsSectionGrindsOrSlidesUI;

UCLASS(Blueprintable, EditInlineNew)
class SESSIONGAME_API UStatsMenuPageCustomSection : public UMenuPageCustomSection {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStatsSectionGlobalUI* _globalStats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStatsSectionFlipTricksUI* _flipTricksStats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStatsSectionGrindsOrSlidesUI* _grindsOrSlidesStats;
    
public:
    UStatsMenuPageCustomSection();

};

