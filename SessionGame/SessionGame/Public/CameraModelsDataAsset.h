#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "CameraModelSettings.h"
#include "ECameraModelType.h"
#include "CameraModelsDataAsset.generated.h"

UCLASS(Blueprintable)
class SESSIONGAME_API UCameraModelsDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ECameraModelType, FCameraModelSettings> _cameraModelSettings;
    
public:
    UCameraModelsDataAsset();

};

