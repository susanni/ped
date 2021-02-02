// Fill out your copyright notice in the Description page of Project Settings.


#include "SaveImageComponent.h"
#include "Serialization.h"


// Sets default values for this component's properties
USaveImageComponent::USaveImageComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
	CaptureComponent->CaptureSource = ESceneCaptureSource::SCS_SceneColorSceneDepth;  // TODO(sni): there are issues with the depth in alpha channel
	CaptureComponent->TextureTarget = TextureTarget;
}


// Called when the game starts
void USaveImageComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	USaveImageComponent();
}


// Called every frame
void USaveImageComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
	++ticks;

	SaveImage(TEXT("/home/swarm/Downloads/Images/"), TEXT("color_"), TEXT("depth_"));
}

void USaveImageComponent::SaveImage(FString& FilePath, FString& ColorName, FString& DepthName) {
	int32 Width = TextureTarget->SizeX;
	int32 Height = TextureTarget->SizeY;

	CaptureComponent->CaptureScene();

	TArray<FColor> Image;
	Image.Reserve(Width * Height);
	TextureTarget->GameThread_GetRenderTargetResource()->ReadPixels(Image);
	Image.Shrink();

	TArray<uint8> ImgData = SerializationUtils::Image2Png(Image, Width, Height);
	FFileHelper::SaveArrayToFile(ImgData, FilePath + ColorName + FString::FromInt(ticks));
}