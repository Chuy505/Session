#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "MNOnlineSubsystemTerminology.h"
#include "MNPlatformData.generated.h"

UCLASS(Blueprintable)
class MYNACON_API UMNPlatformData : public UDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FMNOnlineSubsystemTerminology> OnlineSubsystemsTerminology;
    
public:
    UMNPlatformData();

private:
    UFUNCTION(BlueprintCallable)
    static TArray<FName> GetOnlineSubsystemNames();
    
};

