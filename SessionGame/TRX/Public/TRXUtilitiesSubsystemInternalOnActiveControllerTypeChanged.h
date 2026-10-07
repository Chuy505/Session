#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "TRXUtilities.h"
#include "TRXUtilitiesSubsystemInternalOnActiveControllerTypeChanged.generated.h"

UCLASS(Blueprintable)
class UTRXUtilitiesSubsystemInternalOnActiveControllerTypeChanged : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTRXUtilities::FOnActiveControllerTypeChangedDelegate OnActiveControllerTypeChanged;
    
    UTRXUtilitiesSubsystemInternalOnActiveControllerTypeChanged();

};

