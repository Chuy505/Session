#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameMode -FallbackName=GameMode
#include "Templates/SubclassOf.h"
#include "MainHUBGameMode.generated.h"

class UFadeInUI;

UCLASS(Blueprintable, NonTransient)
class SESSIONGAME_API AMainHUBGameMode : public AGameMode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFadeInUI> _fadeInUI_Blueprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFadeInUI* _fadeInWidgetInstance;
    
public:
    AMainHUBGameMode(const FObjectInitializer& ObjectInitializer);

};

