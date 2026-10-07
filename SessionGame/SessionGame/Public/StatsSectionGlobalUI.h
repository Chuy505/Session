#pragma once
#include "CoreMinimal.h"
#include "StatsSectionBaseUI.h"
#include "StatsSectionGlobalUI.generated.h"

class UStatsStatInfoUI;

UCLASS(Blueprintable, EditInlineNew)
class SESSIONGAME_API UStatsSectionGlobalUI : public UStatsSectionBaseUI {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStatsStatInfoUI* _statInfoCruisingDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStatsStatInfoUI* _statInfoTotalPlayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStatsStatInfoUI* _statInfoMostPlayedMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStatsStatInfoUI* _statInfoMostPlayedMapTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStatsStatInfoUI* _statInfoLeastPlayedMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStatsStatInfoUI* _statInfoLeastPlayedMapTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStatsStatInfoUI* _statInfoTotalFlipTricks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStatsStatInfoUI* _statInfoMostUsedFlipTrick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStatsStatInfoUI* _statInfoLeastUsedFlipTrick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStatsStatInfoUI* _statInfoMostUsedLateTrick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStatsStatInfoUI* _statInfoLeastUsedLateTrick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStatsStatInfoUI* _statInfoTotalGrindsOrSlides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStatsStatInfoUI* _statInfoTotalDistanceGrindsOrSlides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStatsStatInfoUI* _statInfoMostUsedGrindOrSlide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStatsStatInfoUI* _statInfoLeastUsedGrindOrSlide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStatsStatInfoUI* _statInfoLongestGrindOrSlide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStatsStatInfoUI* _statInfoShortestGrindOrSlide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStatsStatInfoUI* _statInfoTotalManualDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStatsStatInfoUI* _statInfoLongestManual;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStatsStatInfoUI* _statInfoLongestNoseManual;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStatsStatInfoUI* _statInfoLongestSwitchManual;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStatsStatInfoUI* _statInfoLongestFakieManual;
    
public:
    UStatsSectionGlobalUI();

};

