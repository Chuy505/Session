#pragma once
#include "CoreMinimal.h"
#include "EMNHttpRequestType.generated.h"

UENUM(BlueprintType)
enum class EMNHttpRequestType : uint8 {
    MNHRT_CreateNewUser,
    MNHRT_LoginWithEmail,
    MNHRT_ForgotPassword,
    MNHRT_ResendConfirmationEmail,
    MNHRT_IsEmailAvailable,
    MNHRT_IsUsernameAvailable,
    MNHRT_IsAccountConfirmed,
    MNHRT_AccountLinking,
    MNHRT_LoginWithAccountLink,
    MNHRT_GetUserInfo,
};

