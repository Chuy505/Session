#pragma once
#include "CoreMinimal.h"
#include "ReplayComponentBase.h"
#include "AnimInstanceReplayComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class REPLAYMODULE_API UAnimInstanceReplayComponent : public UReplayComponentBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool _addAllBones;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> _boneNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> _excludedBoneNameFilters;
    
public:
    UAnimInstanceReplayComponent(const FObjectInitializer& ObjectInitializer);

};

