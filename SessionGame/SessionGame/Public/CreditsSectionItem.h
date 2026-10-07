#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "CreditsSectionItem.generated.h"

class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class SESSIONGAME_API UCreditsSectionItem : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* _titleText;
    
public:
    UCreditsSectionItem();

};

