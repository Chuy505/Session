#pragma once
#include "CoreMinimal.h"
#include "BrokenBoardMeshReferenceData.h"
#include "BrokenBoardData.generated.h"

class UStaticMesh;

USTRUCT(BlueprintType)
struct FBrokenBoardData {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* _normalBoardStaticMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBrokenBoardMeshReferenceData> _brokenBoardStaticMeshes;
    
public:
    SESSIONGAME_API FBrokenBoardData();
};

