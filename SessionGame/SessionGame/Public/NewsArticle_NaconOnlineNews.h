#pragma once
#include "CoreMinimal.h"
#include "NewsArticle.h"
#include "NewsArticle_NaconOnlineNews.generated.h"

class UTexture2DDynamic;

UCLASS(Blueprintable)
class SESSIONGAME_API UNewsArticle_NaconOnlineNews : public UNewsArticle {
    GENERATED_BODY()
public:
    UNewsArticle_NaconOnlineNews();

private:
    UFUNCTION(BlueprintCallable)
    void HandleImageDownloadFailed(UTexture2DDynamic* Texture);
    
    UFUNCTION(BlueprintCallable)
    void HandleImageDownloaded(UTexture2DDynamic* Texture);
    
};

