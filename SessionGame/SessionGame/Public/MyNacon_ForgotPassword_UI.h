#pragma once
#include "CoreMinimal.h"
#include "MyNacon_Base_UI.h"
#include "MyNacon_ForgotPassword_UI.generated.h"

class UTextBlock;
class UUIGamePadButton;

UCLASS(Blueprintable, EditInlineNew)
class SESSIONGAME_API UMyNacon_ForgotPassword_UI : public UMyNacon_Base_UI {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUIGamePadButton* _continueButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* _textBlock;
    
public:
    UMyNacon_ForgotPassword_UI();

};

