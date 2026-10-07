#pragma once
#include "CoreMinimal.h"
#include "MyNacon_Base_UI.h"
#include "MyNacon_ToS_UI.generated.h"

class UButton;
class UCheckBox;
class UTextBlock;
class UUIGamePadButton;

UCLASS(Blueprintable, EditInlineNew)
class SESSIONGAME_API UMyNacon_ToS_UI : public UMyNacon_Base_UI {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* _termsOfUseButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* _privacyPolicyButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCheckBox* _acceptToSCheckbox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCheckBox* _acceptNewsletterCheckbox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* _continueButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUIGamePadButton* _selectButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUIGamePadButton* _returnButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* _unacceptedToSText;
    
public:
    UMyNacon_ToS_UI();

private:
    UFUNCTION(BlueprintCallable)
    void HandleOnTermsOfUseButtonClicked();
    
    UFUNCTION(BlueprintCallable)
    void HandleOnPrivacyPolicyButtonClicked();
    
    UFUNCTION(BlueprintCallable)
    void HandleOnContinueButtonClicked();
    
    UFUNCTION(BlueprintCallable)
    void HandleOnAcceptToSCheckboxChanged(bool accepted);
    
};

