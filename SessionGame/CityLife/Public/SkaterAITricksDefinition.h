#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "SkaterAITrickDefinition.h"
#include "SkaterAITricksDefinition.generated.h"

UCLASS(Blueprintable)
class CITYLIFE_API USkaterAITricksDefinition : public UDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSkaterAITrickDefinition> TricksDefinition;
    
public:
    USkaterAITricksDefinition();

};

