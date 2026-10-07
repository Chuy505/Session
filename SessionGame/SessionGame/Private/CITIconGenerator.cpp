#include "CITIconGenerator.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneCaptureComponent2D -FallbackName=SceneCaptureComponent2D
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent

ACITIconGenerator::ACITIconGenerator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->_folderPath = TEXT("/Game/Customization/CITIcons/");
    this->_compressionSettings = TC_HDR;
    this->_mipGenSettings = TMGS_FromTextureGroup;
    this->_LODBias = -1;
    this->_textureGroup = TEXTUREGROUP_World;
    this->_SRGB = true;
    this->_minAlpha = 0.00f;
    this->_maxAlpha = 1.00f;
    this->_sceneCaptureComponent2d = CreateDefaultSubobject<USceneCaptureComponent2D>(TEXT("IconCaptureComponent2D"));
    this->_amxxHeadRoot = CreateDefaultSubobject<USceneComponent>(TEXT("AMXX_HeadRoot"));
    this->_afxxHeadRoot = CreateDefaultSubobject<USceneComponent>(TEXT("AFXX_HeadRoot"));
    this->_lowerBodyRoot = CreateDefaultSubobject<USceneComponent>(TEXT("LowerBodyRoot"));
    this->_amxxUpperBodyRoot = CreateDefaultSubobject<USceneComponent>(TEXT("AMXX_UpperBodyRoot"));
    this->_afxxUpperBodyRoot = CreateDefaultSubobject<USceneComponent>(TEXT("AFXX_UpperBodyRoot"));
    this->_feetRoot = CreateDefaultSubobject<USceneComponent>(TEXT("FeetRoot"));
    this->_costumeRoot = CreateDefaultSubobject<USceneComponent>(TEXT("CostumeRoot"));
    this->_eyesRoot = CreateDefaultSubobject<USceneComponent>(TEXT("AMXX_EyesRoot"));
    this->_deckGraphicRoot = CreateDefaultSubobject<USceneComponent>(TEXT("DeckGraphicRoot"));
    this->_gripTapeRoot = CreateDefaultSubobject<USceneComponent>(TEXT("GripTapeRoot"));
    this->_riserRoot = CreateDefaultSubobject<USceneComponent>(TEXT("RiserPadRoot"));
    this->_deckRailARoot = CreateDefaultSubobject<USceneComponent>(TEXT("DeckRailARoot"));
    this->_deckRailBRoot = CreateDefaultSubobject<USceneComponent>(TEXT("DeckRailBRoot"));
    this->_truckRoot = CreateDefaultSubobject<USceneComponent>(TEXT("TruckRoot"));
    const FProperty* p__truckPlateRoot_Parent = GetClass()->FindPropertyByName("_truckPlateRoot");
    this->_truckPlateRoot = CreateDefaultSubobject<USceneComponent>(TEXT("TruckPlateRoot"));
    this->_wheelRoot = CreateDefaultSubobject<USceneComponent>(TEXT("WheelRoot"));
    this->_defaultDeckRoot = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultDeckRoot"));
    this->_defaultTruckRoot = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultTruckRoot"));
    this->_defaultTruckPlateRoot = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultTruckPlateRoot"));
    this->_costumeAnimToPlay = NULL;
    this->_costumeAnimInitialPosition = 0.00f;
    this->_truckRoot->SetupAttachment(p__truckPlateRoot_Parent->ContainerPtrToValuePtr<USceneComponent>(this));
}

void ACITIconGenerator::CreateIconFromSelectedAssets() {
}


