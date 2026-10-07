#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=WorldSubsystem -FallbackName=WorldSubsystem
#include "JamSubsystem.generated.h"

class UJamCountdown;
class UJamDialog;
class UJamLeaderboard;
class UJamSubsystemData;
class UJamTimeLimit;
class ULeaveBoundaryWidget;

UCLASS(Blueprintable)
class SESSIONGAME_API UJamSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UJamSubsystemData* SubsystemData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULeaveBoundaryWidget* JamLeaveBoundaryWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UJamCountdown* JamCountdownWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UJamTimeLimit* JamTimeLimitWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UJamLeaderboard* JamLeaderboardWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UJamDialog* JamDialogWidget;
    
public:
    UJamSubsystem();

};

