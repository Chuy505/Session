#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SessionGame -ObjectName=SkaterCharacterBase -FallbackName=SkaterCharacterBase
#include "SkaterCharacterNPC.generated.h"

class USkaterVisualsDefinition;

UCLASS(Blueprintable)
class CITYLIFE_API ASkaterCharacterNPC : public ASkaterCharacterBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkaterVisualsDefinition* BaseVisualDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CrankDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxTrickDuration;
    
public:
    ASkaterCharacterNPC(const FObjectInitializer& ObjectInitializer);

};

