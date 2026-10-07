#pragma once
#include "CoreMinimal.h"
#include "MyNacon_Base_UI.h"
#include "MyNacon_DateOfBirth_UI.generated.h"

class UTextBlock;
class UUIGamePadButton;
class UUINumberSelection;

UCLASS(Blueprintable, EditInlineNew)
class SESSIONGAME_API UMyNacon_DateOfBirth_UI : public UMyNacon_Base_UI {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUIGamePadButton* _continueButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUIGamePadButton* _returnButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUINumberSelection* _daySelection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUINumberSelection* _monthSelection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUINumberSelection* _yearSelection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* _invalidDobMessage;
    
public:
    UMyNacon_DateOfBirth_UI();

};

