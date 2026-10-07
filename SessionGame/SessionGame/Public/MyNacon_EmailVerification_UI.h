#pragma once
#include "CoreMinimal.h"
#include "MyNacon_Base_UI.h"
#include "MyNacon_EmailVerification_UI.generated.h"

class UImage;
class UTextBlock;
class UUIGamePadButton;

UCLASS(Blueprintable, EditInlineNew)
class SESSIONGAME_API UMyNacon_EmailVerification_UI : public UMyNacon_Base_UI {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUIGamePadButton* _continueButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUIGamePadButton* _resendEmailButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* _instructionText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* _loadingImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float _desiredResendEmailButtonHoldTime;
    
public:
    UMyNacon_EmailVerification_UI();

};

