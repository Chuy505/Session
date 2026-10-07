#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "TransitMapCityWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class SESSIONGAME_API UTransitMapCityWidget : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Scale;
    
public:
    UTransitMapCityWidget();

};

