#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "SpotMarkerVisuals.generated.h"

class UMaterialInstance;

UCLASS(Blueprintable)
class SESSIONGAME_API ASpotMarkerVisuals : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstance* _spotMarkerGroundMarker_OnBoard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstance* _spotMarkerGroundMarker_OnFoot;
    
    ASpotMarkerVisuals(const FObjectInitializer& ObjectInitializer);

};

