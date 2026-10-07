#pragma once
#include "CoreMinimal.h"
#include "JamDialogs.h"
#include "PlayCinematicParameters.h"
#include "JamRound.generated.h"

class AActor;
class AJamBoundaryBox;

USTRUCT(BlueprintType)
struct FJamRound {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AActor> StartLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AJamBoundaryBox> RoundBoundary;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPlayCinematicParameters> CompetitorsClips;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FJamDialogs Dialogs;
    
    SESSIONGAME_API FJamRound();
};

