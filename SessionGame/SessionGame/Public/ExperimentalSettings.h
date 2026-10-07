#pragma once
#include "CoreMinimal.h"
#include "ECaspersMode.h"
#include "ExperimentalSettings.generated.h"

USTRUCT(BlueprintType)
struct FExperimentalSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Version;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsGrabsEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECaspersMode CaspersMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsPrimosEnabled;
    
    SESSIONGAME_API FExperimentalSettings();
};

