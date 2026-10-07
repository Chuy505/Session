#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "MusicSelector.generated.h"

class UMusicStationDefinition;
class USongDefinition;

UCLASS(Blueprintable)
class SESSIONGAME_API AMusicSelector : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMusicStationDefinition*> _stationSongList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USongDefinition*> _workingSongList;
    
public:
    AMusicSelector(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateSelectedStation(int32 Delta);
    
    UFUNCTION(BlueprintCallable)
    void UpdateSelectedSong(int32 Delta);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentStationIndex(int32 newIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentSongIndex(int32 newIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStationSelectionChangedBP(int32 newIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSongSelectionChangedBP(int32 newIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsReplayEditorActive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMusicOn() const;
    
    UFUNCTION(BlueprintCallable)
    void Init();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentStationIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentSongStationIndex() const;
    
    UFUNCTION(BlueprintCallable)
    void FillWorkingSongList();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanPlayMusic() const;
    
};

