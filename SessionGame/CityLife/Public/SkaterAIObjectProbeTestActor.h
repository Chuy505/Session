#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=VisualLoggerDebugSnapshotInterface -FallbackName=VisualLoggerDebugSnapshotInterface
#include "SkaterAIObjectProbeTestActor.generated.h"

class USkaterAIObjectProbeComponent;

UCLASS(Blueprintable)
class CITYLIFE_API ASkaterAIObjectProbeTestActor : public AActor, public IVisualLoggerDebugSnapshotInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkaterAIObjectProbeComponent* ObjectProbe;
    
public:
    ASkaterAIObjectProbeTestActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void Probe() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USkaterAIObjectProbeComponent* GetProbe() const;
    

    // Fix for true pure virtual functions not being implemented
};

