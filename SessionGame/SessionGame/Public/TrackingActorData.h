#pragma once
#include "CoreMinimal.h"
#include "TrackingActorData.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FTrackingActorData {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* _targetIconTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float _targetIconMinLocationDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float _targetIconMaxLocationDistance;
    
public:
    SESSIONGAME_API FTrackingActorData();
};

