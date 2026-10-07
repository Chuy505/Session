#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=InputCore -ObjectName=Key -FallbackName=Key
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateColor -FallbackName=SlateColor
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "ETRXControllerKeyWidgetMode.h"
#include "TRXControllerKeyWidget.generated.h"

class UImage;

UCLASS(Blueprintable, EditInlineNew)
class TRX_API UTRXControllerKeyWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Image_Button;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D KeySize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateColor KeyTintColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETRXControllerKeyWidgetMode Mode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey KeyType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName InputActionName;
    
public:
    UTRXControllerKeyWidget();

    UFUNCTION(BlueprintCallable)
    void SetKeyToDisplay(const FKey& Key);
    
    UFUNCTION(BlueprintCallable)
    void SetKeyTintColor(const FSlateColor& newTintColor);
    
    UFUNCTION(BlueprintCallable)
    void SetKeySize(const FVector2D& newKeySize);
    
    UFUNCTION(BlueprintCallable)
    void SetActionToDisplay(const FName& actionOrAxisName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FKey GetKeyType() const;
    
};

