#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "XboxUserProfileUI.generated.h"

class UTRXProfileSwitchWidget;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class SESSIONGAME_API UXboxUserProfileUI : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* _userNameText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTRXProfileSwitchWidget* _profileSwitchWidget;
    
public:
    UXboxUserProfileUI();

};

