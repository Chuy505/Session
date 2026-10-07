#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "CameraFilterSettings.h"
#include "CameraFiltersDataAsset.generated.h"

UCLASS(Blueprintable)
class SESSIONGAME_API UCameraFiltersDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCameraFilterSettings PauseMenuCameraFilterSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCameraFilterSettings> InGameCameraFilterSettings;
    
    UCameraFiltersDataAsset();

};

