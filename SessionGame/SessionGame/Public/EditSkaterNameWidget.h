#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=ETextCommit -FallbackName=ETextCommit
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "EditSkaterNameWidget.generated.h"

class UEditableTextBox;
class UUIAudioSet;
class UUIGamePadButton;

UCLASS(Blueprintable, EditInlineNew)
class SESSIONGAME_API UEditSkaterNameWidget : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEditableTextBox* _nameEditableText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUIGamePadButton* _confirmButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUIAudioSet* _audioSet;
    
public:
    UEditSkaterNameWidget();

private:
    UFUNCTION(BlueprintCallable)
    void HandleOnSteamVirtualKeyboardClosed(bool wasKeyboardValidated, const FString& enteredText);
    
    UFUNCTION(BlueprintCallable)
    void HandleNameTextCommitted(const FText& newText, TEnumAsByte<ETextCommit::Type> CommitMethod);
    
    UFUNCTION(BlueprintCallable)
    void HandleNameTextChanged(const FText& newText);
    
};

