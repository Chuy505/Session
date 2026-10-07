#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "Templates/SubclassOf.h"
#include "JamSubsystemData.generated.h"

class UJamCountdown;
class UJamDialog;
class UJamLeaderboard;
class UJamTimeLimit;
class ULeaveBoundaryWidget;

UCLASS(Blueprintable)
class SESSIONGAME_API UJamSubsystemData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ULeaveBoundaryWidget> JamLeaveBoundaryClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UJamCountdown> JamCountdownClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UJamTimeLimit> JamTimeLimitClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UJamLeaderboard> JamLeaderboardClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UJamDialog> JamDialogClass;
    
    UJamSubsystemData();

};

