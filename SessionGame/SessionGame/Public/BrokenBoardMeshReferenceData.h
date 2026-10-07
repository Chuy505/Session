#pragma once
#include "CoreMinimal.h"
#include "EBrokenBoardState.h"
#include "BrokenBoardMeshReferenceData.generated.h"

class UStaticMesh;

USTRUCT(BlueprintType)
struct FBrokenBoardMeshReferenceData {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBrokenBoardState _brokenState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UStaticMesh*> _brokenBoardStaticMeshes;
    
public:
    SESSIONGAME_API FBrokenBoardMeshReferenceData();
};

