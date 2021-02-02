// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Containers/UnrealString.h"
#include "Engine.h"  // USceneCaptureComponent2D
#include "SaveImageComponent.generated.h"

// Utilities for SceneCaptureComponent2D to save color + depth images to disk.
UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PED_API USaveImageComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	USaveImageComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

    /**
	 * Writes color and depth images to disk.
	 * FilePath: Absolute path to directory where images should be saved i.e. /home/swarm/Downloads/Images/
	 * ColorName: Prefix to name of color image. Suffix will tick number.
	 * DepthName: Prefix to name of depth image. Suffix will tick number.
	 */
	void SaveImage(FString& FilePath, FString& ColorName, FString& DepthName);

	UPROPERTY(EditAnywhere)
	    USceneCaptureComponent2D* CaptureComponent;

	UPROPERTY(EditAnywhere)
		UTextureRenderTarget2D* TextureTarget;

	UPROPERTY(EditAnywhere)
	    bool DisableSaving;  // If true, don't save images to disk.

private:
	int64 ticks;  // count of number of ticks that have passed since game started.
};
