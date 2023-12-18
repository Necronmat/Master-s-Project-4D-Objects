// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "GameMode4D.h"
#include "Player4D.generated.h"

class USphereComponent;
class UCameraComponent;

UCLASS()
class FINISHED_PROJECT_API APlayer4D : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	APlayer4D();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	void StrafeForwards(float AxisAmount);
	void StrafeSideways(float AxisAmount);
	void LookVertical(float AxisAmount);
	void LookHroizontal(float AxisAmount);
	void RollW(float AxisAmount);
	void PitchW(float AxisAmount);
	void YawW(float AxisAmount);
	void StrafeVertical(float AxisAmount);
	void Movement4D();

private:

	UPROPERTY(VisibleDefaultsOnly)
		USphereComponent* mCollision;

	UPROPERTY(EditAnywhere)
		UCameraComponent* mCamera;

	UPROPERTY(EditAnywhere)
		AGameMode4D* mGameMode;

	UPROPERTY(EditAnywhere)
		float mSpeed = 10;

	float mPositionW = 0;

	bool mMoving4D = false;
	FRotator mRotationW = {0, 0, 0};
};
