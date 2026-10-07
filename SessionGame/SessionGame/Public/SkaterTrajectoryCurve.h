#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "SkaterTrajectoryCurve.generated.h"

class USceneComponent;
class USplineComponent;

UCLASS(Blueprintable)
class SESSIONGAME_API ASkaterTrajectoryCurve : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* _root;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USplineComponent* _trajectorySplineFromStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USplineComponent* _trajectorySplineFromHighestPoint;
    
public:
    ASkaterTrajectoryCurve(const FObjectInitializer& ObjectInitializer);

};

