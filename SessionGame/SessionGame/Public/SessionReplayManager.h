#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ReplayModule -ObjectName=ReplayManager -FallbackName=ReplayManager
#include "Templates/SubclassOf.h"
#include "SessionReplayManager.generated.h"

class AReplayCameraPathDisplay;
class ASessionReplayFilmerCamera;
class UMenuPageDefinition;
class USkaterVisualsDefinition;

UCLASS(Blueprintable)
class SESSIONGAME_API ASessionReplayManager : public AReplayManager {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AReplayCameraPathDisplay> _cameraPathDisplayBlueprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ASessionReplayFilmerCamera> _filmerCameraBlueprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ReplayCinematicsDirectoryPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FText> _keyframesText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FText> _inputModesText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FText> _cameraLensFiltersText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMenuPageDefinition* _replayEditorPageDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkaterVisualsDefinition* _cachedVisualDefinition;
    
public:
    ASessionReplayManager(const FObjectInitializer& ObjectInitializer);

};

