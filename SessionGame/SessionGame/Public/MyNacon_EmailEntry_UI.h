#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=ETextCommit -FallbackName=ETextCommit
#include "MyNacon_Base_UI.h"
#include "MyNacon_EmailEntry_UI.generated.h"

class UEditableTextBox;
class UImage;
class UMNPlatformData;
class UTextBlock;
class UUIGamePadButton;

UCLASS(Blueprintable, EditInlineNew)
class SESSIONGAME_API UMyNacon_EmailEntry_UI : public UMyNacon_Base_UI {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUIGamePadButton* _continueButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUIGamePadButton* _returnButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEditableTextBox* _textBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* _welcomeMessage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* _footerWarningMessage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* _invalidEmailMessage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* _loadingImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMNPlatformData* _platformData;
    
public:
    UMyNacon_EmailEntry_UI();

private:
    UFUNCTION(BlueprintCallable)
    void HandleOnTextBoxTextCommited(const FText& newText, TEnumAsByte<ETextCommit::Type> CommitMethod);
    
    UFUNCTION(BlueprintCallable)
    void HandleOnTextBoxTextChanged(const FText& newText);
    
};

