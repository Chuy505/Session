#pragma once
#include "CoreMinimal.h"
#include "ReplayComponentBase.h"
#include "ActorReplayComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class REPLAYMODULE_API UActorReplayComponent : public UReplayComponentBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool _recordRootComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool _recordLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool _recordRotation;
    
public:
    UActorReplayComponent(const FObjectInitializer& ObjectInitializer);

};

