#pragma once
#include "CoreMinimal.h"
#include "AIControllerBase.h"
#include "PedestrianController.generated.h"

class UEnvQuery;

UCLASS(Blueprintable)
class APedestrianController : public AAIControllerBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AvoidanceMaxAngle;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnvQuery* _EQ_RunAway;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float _trickReactionCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float _runAwayResetDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float _runAwayCheckCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float _minAvoidanceDistance;
    
public:
    APedestrianController(const FObjectInitializer& ObjectInitializer);

};

