#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "MenuPageItemDefinition.h"
#include "MenuPageItem.generated.h"

class UBorder;

UCLASS(Blueprintable, EditInlineNew)
class SESSIONGAME_API UMenuPageItem : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBorder* _selectedBorder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float _duplicatedTextDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float _scrollTimeDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float _scrollSpeed;
    
public:
    UMenuPageItem();

    UFUNCTION(BlueprintCallable)
    void SetPageItemDefinition(const FMenuPageItemDefinition& newPageItemDefinition);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMenuPageItemDefinition GetItemDefinition() const;
    
};

