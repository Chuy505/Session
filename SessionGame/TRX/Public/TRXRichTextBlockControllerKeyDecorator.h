#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=RichTextBlockDecorator -FallbackName=RichTextBlockDecorator
#include "TRXRichTextBlockControllerKeyDecorator.generated.h"

class UTexture2D;

UCLASS(Blueprintable)
class TRX_API UTRXRichTextBlockControllerKeyDecorator : public URichTextBlockDecorator {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* DefaultImage;
    
public:
    UTRXRichTextBlockControllerKeyDecorator();

};

