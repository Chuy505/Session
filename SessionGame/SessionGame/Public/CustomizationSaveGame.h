#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SaveGame -FallbackName=SaveGame
#include "CustomizationPersistentData.h"
#include "CustomizationSaveGame.generated.h"

UCLASS(Blueprintable)
class SESSIONGAME_API UCustomizationSaveGame : public USaveGame {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCustomizationPersistentData CustomizationData;
    
    UCustomizationSaveGame();

};

