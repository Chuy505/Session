#pragma once
#include "CoreMinimal.h"
#include "CustomizationMenuAudioSet.h"
#include "UISound.h"
#include "SkateShopMenuAudioSet.generated.h"

class UUIAudioSetBasic;

UCLASS(Blueprintable)
class USkateShopMenuAudioSet : public UCustomizationMenuAudioSet {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUIAudioSetBasic* _parentSkateShopAudioSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUISound _onPurchase;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUIAudioSetBasic* _skateShopChild;
    
public:
    USkateShopMenuAudioSet();

};

