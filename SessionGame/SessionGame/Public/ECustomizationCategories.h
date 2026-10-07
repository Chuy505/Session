#pragma once
#include "CoreMinimal.h"
#include "ECustomizationCategories.generated.h"

UENUM()
enum class ECustomizationCategories : uint16 {
    ECC_Undefined,
    ECC_Head,
    ECC_Upperbody,
    ECC_Lowerbody = 4,
    ECC_Feet = 8,
    ECC_Skateboard = 16,
    ECC_GripTape = 32,
    ECC_DeckLayer = 64,
    ECC_Trucks = 128,
    ECC_Wheels = 256,
    ECC_DeckGraphics = 512,
    ECC_DeckRails = 1024,
    ECC_Risers = 2048,
    ECC_Costume = 4096,
    ECC_Eyes = 8192,
    ECC_Socks = 16384,
};

