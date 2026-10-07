#pragma once
#include "CoreMinimal.h"
#include "MenuAudioSet.h"
#include "UISound.h"
#include "CustomizationMenuAudioSet.generated.h"

class UUIAudioSetBasic;

UCLASS(Blueprintable)
class UCustomizationMenuAudioSet : public UMenuAudioSet {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUIAudioSetBasic* _parentCustomizationAudioSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUISound _onChangeBrand;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUIAudioSetBasic* _customizationChild;
    
public:
    UCustomizationMenuAudioSet();

};

