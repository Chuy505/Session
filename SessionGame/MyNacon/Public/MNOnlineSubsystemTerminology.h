#pragma once
#include "CoreMinimal.h"
#include "MNOnlineSubsystemTerminology.generated.h"

USTRUCT(BlueprintType)
struct FMNOnlineSubsystemTerminology {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText AccountTerminology;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText NetworkTerminology;
    
    MYNACON_API FMNOnlineSubsystemTerminology();
};

