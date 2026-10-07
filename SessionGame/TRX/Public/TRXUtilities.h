#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=InputCore -ObjectName=Key -FallbackName=Key
//CROSS-MODULE INCLUDE V2: -ModuleName=Slate -ObjectName=EStretch -FallbackName=EStretch
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateFontInfo -FallbackName=SlateFontInfo
#include "ETRXControllerType.h"
#include "ETRXPlatform.h"
#include "ETRXStore.h"
#include "TRXUtilities.generated.h"

class UObject;
class UTRXUtilitiesSubsystemInternalOnActiveControllerTypeChanged;
class UTexture2D;

UCLASS(Blueprintable)
class TRX_API UTRXUtilities : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnActiveControllerTypeChangedDelegate, ETRXControllerType, controllerType);
    
    UTRXUtilities();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool SetPause(const UObject* WorldContextObject, bool paused);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ReturnToEngagementScreen(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ETRXStore RetrieveCurrentStore();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ETRXPlatform RetrieveCurrentPlatform();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static ETRXControllerType RetrieveCurrentControllerType(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FString> RetrieveAllowedCultures();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString RemoveProfanities(const FString& textToClean);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString RemoveNonDisplayableCharacters(const FString& textToClean, const FSlateFontInfo& Font);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName GetUIStringTableId();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName GetTRCStringTableId();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UTRXUtilitiesSubsystemInternalOnActiveControllerTypeChanged* GetOnActiveControllerTypeChanged(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GenerateRichTextControllerKeyDecoratorTagFromAction(const FName& actionOrAxisName, int32 widthOverride, int32 heightOverride, float scaleOverride, TEnumAsByte<EStretch::Type> stretch);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GenerateRichTextControllerKeyDecoratorTag(const FKey& Key, int32 widthOverride, int32 heightOverride, float scaleOverride, TEnumAsByte<EStretch::Type> stretch);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText FindLocalizedTextForPlatformFromText(const FText& Text, ETRXPlatform Platform);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText FindLocalizedTextForPlatform(const FName stringTableId, const FString& Key, ETRXPlatform Platform);
    
    UFUNCTION(BlueprintCallable)
    static FKey FindKeyToUseInGivenArrayForGivenControllerType(const TArray<FKey>& keys, ETRXControllerType controllerType);
    
    UFUNCTION(BlueprintCallable)
    static FKey FindKeyToUseForGivenActionAndGivenControllerType(const FName& actionOrAxisName, ETRXControllerType controllerType);
    
    UFUNCTION(BlueprintCallable)
    static UTexture2D* FindControllerKeyIconForControllerType(const FKey& controllerKey, ETRXControllerType controllerType);
    
    UFUNCTION(BlueprintCallable)
    static FKey ConvertGamepadVirtualKey(const FKey& keyToConvert);
    
};

