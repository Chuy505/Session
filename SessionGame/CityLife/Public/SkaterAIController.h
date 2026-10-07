#pragma once
#include "CoreMinimal.h"
#include "AIControllerBase.h"
#include "SkaterAIController.generated.h"

class USkaterAIBehavior;
class USkaterAIObjectProbeComponent;
class USkaterAITricksHandlerComponent;

UCLASS(Blueprintable)
class CITYLIFE_API ASkaterAIController : public AAIControllerBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkaterAITricksHandlerComponent* TricksHandler;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkaterAIObjectProbeComponent* ObjectProbe;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkaterAIBehavior* Behavior;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinimumZPosition;
    
public:
    ASkaterAIController(const FObjectInitializer& ObjectInitializer);

};

