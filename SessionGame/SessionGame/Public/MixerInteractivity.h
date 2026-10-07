#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "MixerInteractivity.generated.h"

class UGrindsDatabase;
class UMixerDataAsset;
class UTricksDatabase;

UCLASS(Blueprintable)
class SESSIONGAME_API AMixerInteractivity : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGrindsDatabase* GrindsDb;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTricksDatabase* TricksDb;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMixerDataAsset* MixerDb;
    
public:
    AMixerInteractivity(const FObjectInitializer& ObjectInitializer);

};

