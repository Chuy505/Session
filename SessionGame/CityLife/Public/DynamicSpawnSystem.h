#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "DynamicSpawnSystem.generated.h"

UCLASS(Blueprintable, Within=SpawnerManager)
class CITYLIFE_API UDynamicSpawnSystem : public UObject {
    GENERATED_BODY()
public:
    UDynamicSpawnSystem();

};

