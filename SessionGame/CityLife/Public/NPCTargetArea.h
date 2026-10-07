#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "NPCTargetArea.generated.h"

class UBoxComponent;

UCLASS(Blueprintable)
class ANPCTargetArea : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* AreaBox;
    
public:
    ANPCTargetArea(const FObjectInitializer& ObjectInitializer);

};

