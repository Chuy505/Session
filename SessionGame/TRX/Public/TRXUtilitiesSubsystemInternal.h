#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameInstanceSubsystem -FallbackName=GameInstanceSubsystem
#include "TRXUtilitiesSubsystemInternal.generated.h"

class UTRXUtilitiesSubsystemInternalOnActiveControllerTypeChanged;

UCLASS(Blueprintable)
class TRX_API UTRXUtilitiesSubsystemInternal : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTRXUtilitiesSubsystemInternalOnActiveControllerTypeChanged* OnActiveControllerTypeChangedObject;
    
public:
    UTRXUtilitiesSubsystemInternal();

};

