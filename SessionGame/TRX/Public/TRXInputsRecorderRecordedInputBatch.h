#pragma once
#include "CoreMinimal.h"
#include "TRXInputsRecorderRecordedInput.h"
#include "TRXInputsRecorderRecordedInputBatch.generated.h"

USTRUCT(BlueprintType)
struct FTRXInputsRecorderRecordedInputBatch {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double timestamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTRXInputsRecorderRecordedInput> RecordedInputs;
    
    TRX_API FTRXInputsRecorderRecordedInputBatch();
};

