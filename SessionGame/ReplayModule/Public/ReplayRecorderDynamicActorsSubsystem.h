#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftObjectPath -FallbackName=SoftObjectPath
#include "ReplayRecorderDynamicActorsPool.h"
#include "ReplayRecorderSubsystemBase.h"
#include "ReplayRecorderDynamicActorsSubsystem.generated.h"

UCLASS(Blueprintable)
class REPLAYMODULE_API UReplayRecorderDynamicActorsSubsystem : public UReplayRecorderSubsystemBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FSoftObjectPath, FReplayRecorderDynamicActorsPool> _objectsPool;
    
public:
    UReplayRecorderDynamicActorsSubsystem();

};

