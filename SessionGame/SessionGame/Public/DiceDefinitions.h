#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "DiceDefinition.h"
#include "DiceDefinitions.generated.h"

UCLASS(Blueprintable)
class SESSIONGAME_API UDiceDefinitions : public UDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDiceDefinition _definitions;
    
public:
    UDiceDefinitions();

};

