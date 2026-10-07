#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "ETRXSteamFloatingGamepadTextInputMode.h"
#include "ETRXSteamGamepadTextInputLineMode.h"
#include "ETRXSteamGamepadTextInputMode.h"
#include "TRXUtilitiesSteam.generated.h"

UCLASS(Blueprintable)
class TRX_API UTRXUtilitiesSteam : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnGamepadTextInputClosedDelegate, bool, wasKeyboardValidated, const FString&, enteredText);
    
    UTRXUtilitiesSteam();

    UFUNCTION(BlueprintCallable)
    static bool ShowGamepadTextInput(ETRXSteamGamepadTextInputMode InputMode, ETRXSteamGamepadTextInputLineMode lineInputMode, const FString& Description, const FString& defaultText, const UTRXUtilitiesSteam::FOnGamepadTextInputClosedDelegate& onClosed);
    
    UFUNCTION(BlueprintCallable)
    static bool ShowFloatingGamepadTextInput(ETRXSteamFloatingGamepadTextInputMode keyboardType, const FVector2D& textFieldPosition, const FVector2D& textFieldDimension);
    
    UFUNCTION(BlueprintCallable)
    static bool IsRunningOnSteamDeck();
    
};

