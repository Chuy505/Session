#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "CityLifeBakedObjectPaths.h"
#include "CityLifeObjectsPathsData.generated.h"

UCLASS(Blueprintable, NotPlaceable)
class CITYLIFE_API ACityLifeObjectsPathsData : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TLazyObjectPtr<AActor>, FCityLifeBakedObjectPaths> BakedPaths;
    
public:
    ACityLifeObjectsPathsData(const FObjectInitializer& ObjectInitializer);

};

