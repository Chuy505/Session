#include "SkateShop.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CameraComponent -FallbackName=CameraComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ChildActorComponent -FallbackName=ChildActorComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent

ASkateShop::ASkateShop(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->_rootComponent = (USceneComponent*)RootComponent;
    this->_boxComponentTrigger = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComponent"));
    this->_customizationSkateboardRoot = CreateDefaultSubobject<USceneComponent>(TEXT("CustomizationSkateboardRoot"));
    this->_customizationSkaterRoot = CreateDefaultSubobject<USceneComponent>(TEXT("CustomizationSkaterRoot"));
    this->_skateShopCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("SkateShopCamera"));
    this->_skateShopSkaterApparelCamera = CreateDefaultSubobject<UChildActorComponent>(TEXT("SkateShopSkaterApparelCamera"));
    this->_skateShopSkateboardGearCamera = CreateDefaultSubobject<UChildActorComponent>(TEXT("SkateShopSkateboardGearCamera"));
    this->_skateShopDIYCamera = CreateDefaultSubobject<UChildActorComponent>(TEXT("SkateShopDIYCamera"));
    this->_characterCustomization_Blueprint = NULL;
    this->_skateShopRootPage = NULL;
    this->_skateShopCustomizationCategory = ECustomizationCategories::ECC_Undefined;
    this->_skateShopCameraTransitionInTime = 1.25f;
    this->_skateShopCameraTransitionOutTime = 1.00f;
    this->_optionalPromptText = FText::FromString(TEXT("Shop"));
    this->_objectPlacementRoot = CreateDefaultSubobject<USceneComponent>(TEXT("ObjectPlacementRoot"));
    this->_diyBoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("DIY BoxComponent"));
    this->_skaterApparelCameraInterpSpeed = 2.75f;
    this->_skateboardMoveTimePeriod = 1.25f;
    this->_boxComponentTrigger->SetupAttachment(RootComponent);
    this->_customizationSkateboardRoot->SetupAttachment(RootComponent);
    this->_customizationSkaterRoot->SetupAttachment(RootComponent);
    this->_diyBoxComponent->SetupAttachment(RootComponent);
    this->_objectPlacementRoot->SetupAttachment(RootComponent);
    this->_skateShopCamera->SetupAttachment(RootComponent);
    this->_skateShopDIYCamera->SetupAttachment(RootComponent);
    this->_skateShopSkateboardGearCamera->SetupAttachment(RootComponent);
    this->_skateShopSkaterApparelCamera->SetupAttachment(RootComponent);
}

void ASkateShop::OnOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void ASkateShop::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}


