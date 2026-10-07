#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "CameraLensSetting.h"
#include "ECameraLensType.h"
#include "CameraLensDataAsset.generated.h"

UCLASS(Blueprintable)
class SESSIONGAME_API UCameraLensDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ECameraLensType, FCameraLensSetting> _cameraLensSettings;
    
public:
    UCameraLensDataAsset();

};

