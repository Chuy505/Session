#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "Templates/SubclassOf.h"
#include "TrackingManager.generated.h"

class ATrackedArea;
class UTrackedTargetHUD;
class UTrackingVisualParametersData;

UCLASS(Blueprintable)
class SESSIONGAME_API ATrackingManager : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UTrackedTargetHUD> _trackedTargetHUDBlueprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATrackedArea> _trackedAreaDefaultBlueprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTrackingVisualParametersData* _trackingVisualParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool _projectPlayerViewportRelative;
    
public:
    ATrackingManager(const FObjectInitializer& ObjectInitializer);

};

