#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=WorldSubsystem -FallbackName=WorldSubsystem
#include "TRXInputsDisplaySubsystem.generated.h"

class UTRXInputsDisplayLayoutWidget;

UCLASS(Blueprintable)
class TRX_API UTRXInputsDisplaySubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTRXInputsDisplayLayoutWidget* InputsDisplayLayoutWidget;
    
public:
    UTRXInputsDisplaySubsystem();

};

