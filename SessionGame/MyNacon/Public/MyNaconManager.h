#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameInstanceSubsystem -FallbackName=GameInstanceSubsystem
#include "MyNaconManager.generated.h"

UCLASS(Blueprintable)
class MYNACON_API UMyNaconManager : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UMyNaconManager();

};

