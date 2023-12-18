// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Kismet/GameplayStatics.h"
#include "GameMode4D.generated.h"

class ADynamicActor4D;
class ATrigger4D;

/**
 * 
 */
UCLASS()
class FINISHED_PROJECT_API AGameMode4D : public AGameModeBase
{
	GENERATED_BODY()
	
public:

	AGameMode4D();

	float GetWPosition();

	FRotator GetWRotation();

	void SetWPosition(float w);

	void SetWRotation(FRotator w);

	void SetWValues(float w, FRotator rotationW);

	void SetPlayerPosition(FVector player);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
		void DisplayPosition(FVector position, float w);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
		void DisplayRotation(FRotator rotation);

private:

	float mPositionW = 0;
	FVector mPlayerPosition = FVector({ 0, 0, 0});
	FRotator mRotationW;

	bool mUpdating = false;

	TSubclassOf<ADynamicActor4D> mDynmeshToFind;
	TArray<AActor*> Objects4D;

	TSubclassOf<ATrigger4D> mVolumesToFind;
	TArray<AActor*> Volumes4D;
};
