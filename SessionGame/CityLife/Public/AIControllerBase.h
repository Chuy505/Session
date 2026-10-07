#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=AIController -FallbackName=AIController
#include "Templates/SubclassOf.h"
#include "AIControllerBase.generated.h"

class UNavigationQueryFilter;

UCLASS(Blueprintable)
class CITYLIFE_API AAIControllerBase : public AAIController {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UNavigationQueryFilter> _moveToQueryFilter;
    
public:
    AAIControllerBase(const FObjectInitializer& ObjectInitializer);

};

