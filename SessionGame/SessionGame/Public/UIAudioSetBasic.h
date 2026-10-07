#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "EUIAudioDecoratorType.h"
#include "UISound.h"
#include "UIAudioSetBasic.generated.h"

UCLASS(Blueprintable)
class SESSIONGAME_API UUIAudioSetBasic : public UDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUISound _onOpen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EUIAudioDecoratorType, FUISound> _decorators;
    
public:
    UUIAudioSetBasic();

};

