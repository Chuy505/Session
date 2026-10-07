#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "ETrackingActorDataType.h"
#include "ETrackingVisualParamsType.h"
#include "TrackingActorData.h"
#include "TrackingVisualParams.h"
#include "TrackingVisualParametersData.generated.h"

UCLASS(Blueprintable)
class SESSIONGAME_API UTrackingVisualParametersData : public UDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ETrackingVisualParamsType, FTrackingVisualParams> _allTrackingVisualParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ETrackingActorDataType, FTrackingActorData> _allTrackingActorData;
    
public:
    UTrackingVisualParametersData();

};

