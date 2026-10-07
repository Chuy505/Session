#pragma once
#include "CoreMinimal.h"
#include "MenuAudioSet.h"
#include "UISound.h"
#include "ApartmentAudioSet.generated.h"

class UUIAudioSetBasic;

UCLASS(Blueprintable)
class UApartmentAudioSet : public UMenuAudioSet {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUIAudioSetBasic* _parentApartmentAudioSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUISound _onNodeTransition;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUIAudioSetBasic* _apartmentChild;
    
public:
    UApartmentAudioSet();

};

