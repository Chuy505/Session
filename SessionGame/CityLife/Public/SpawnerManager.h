#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "SpawnerManager.generated.h"

class UDynamicSpawnSystem;

UCLASS(Blueprintable, Within=CityLifeManager)
class USpawnerManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDynamicSpawnSystem* DynamicSpawnSystem;
    
public:
    USpawnerManager();

};

