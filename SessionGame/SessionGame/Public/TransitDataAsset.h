#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "NonTransitLevelData.h"
#include "QuestCrossMapData.h"
#include "TransitCityData.h"
#include "TransitNodeData.h"
#include "TransitDataAsset.generated.h"

UCLASS(Blueprintable)
class SESSIONGAME_API UTransitDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTransitCityData> _transitCityData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTransitNodeData> _transitNodeData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNonTransitLevelData> _nonTransitLevelsData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FQuestCrossMapData> _questCrossMapData;
    
public:
    UTransitDataAsset();

};

