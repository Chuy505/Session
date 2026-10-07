#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotify -FallbackName=AnimNotify
#include "EPopNotifyMode.h"
#include "AnimNotify_Pop.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class SESSIONGAME_API UAnimNotify_Pop : public UAnimNotify {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPopNotifyMode _popMode;
    
public:
    UAnimNotify_Pop();

};

