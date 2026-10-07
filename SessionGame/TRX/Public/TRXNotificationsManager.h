#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameInstanceSubsystem -FallbackName=GameInstanceSubsystem
#include "ETRXNotificationLogLevel.h"
#include "TRXNotificationsManager.generated.h"

UCLASS(Blueprintable)
class TRX_API UTRXNotificationsManager : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UTRXNotificationsManager();

    UFUNCTION(BlueprintCallable)
    void AddNotificationCategorized(const FName& logCategoryName, ETRXNotificationLogLevel logLevel, const FString& Message, float Duration);
    
    UFUNCTION(BlueprintCallable)
    void AddNotification(ETRXNotificationLogLevel logLevel, const FString& Message, float Duration);
    
};

