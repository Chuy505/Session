#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "MyNacon_Base_UI.generated.h"

class UMyNacon_OpenVirtualKeyboardButton;

UCLASS(Blueprintable, EditInlineNew)
class SESSIONGAME_API UMyNacon_Base_UI : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMyNacon_OpenVirtualKeyboardButton* _openKeyboardButton;
    
public:
    UMyNacon_Base_UI();

};

