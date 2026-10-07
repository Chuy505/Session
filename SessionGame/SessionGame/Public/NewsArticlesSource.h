#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "NewsArticlesSource.generated.h"

class UNewsArticle;

UCLASS(Blueprintable)
class SESSIONGAME_API UNewsArticlesSource : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UNewsArticle*> _newsArticles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool _isRefreshing;
    
public:
    UNewsArticlesSource();

};

