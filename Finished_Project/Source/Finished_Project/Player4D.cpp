// Fill out your copyright notice in the Description page of Project Settings.

#include "Player4D.h"
#include "Components/SphereComponent.h"
#include "Camera/CameraComponent.h"

// Sets default values
APlayer4D::APlayer4D()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	mCollision = CreateDefaultSubobject<USphereComponent>(TEXT("Sphere Collision"));
	mCollision->InitSphereRadius(15.0f);
	// Set the root component to be the collision component.
	RootComponent = mCollision;

	mCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("ThirdPerson Camera"));
	mCamera->SetupAttachment(RootComponent);
}

// Called when the game starts or when spawned
void APlayer4D::BeginPlay()
{
	Super::BeginPlay();
	
	mGameMode = Cast<AGameMode4D>(GetWorld()->GetAuthGameMode());
	mGameMode->SetWValues(mPositionW, mRotationW);
	mGameMode->SetPlayerPosition(GetActorLocation());
}

// Called every frame
void APlayer4D::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// Called to bind functionality to input
void APlayer4D::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis(TEXT("Strafe Forwards"), this, &APlayer4D::StrafeForwards);
	PlayerInputComponent->BindAxis(TEXT("Strafe Sideways"), this, &APlayer4D::StrafeSideways);
	PlayerInputComponent->BindAxis(TEXT("Look Vertical"), this, &APlayer4D::LookVertical);
	PlayerInputComponent->BindAxis(TEXT("Look Hroizontal"), this, &APlayer4D::LookHroizontal);
	PlayerInputComponent->BindAxis(TEXT("Strafe Vertical"), this, &APlayer4D::StrafeVertical);
	PlayerInputComponent->BindAxis(TEXT("Roll"), this, &APlayer4D::RollW);
	PlayerInputComponent->BindAxis(TEXT("Pitch"), this, &APlayer4D::PitchW);
	PlayerInputComponent->BindAxis(TEXT("Yaw"), this, &APlayer4D::YawW);


	PlayerInputComponent->BindAction(TEXT("Rotate4D"), IE_Pressed, this, &APlayer4D::Movement4D);
	PlayerInputComponent->BindAction(TEXT("Rotate4D"), IE_Released, this, &APlayer4D::Movement4D);
}

void APlayer4D::StrafeForwards(float AxisAmount)
{
	if (mMoving4D)
	{
		mPositionW += AxisAmount * 0.01f;
		mGameMode->SetWValues(mPositionW, mRotationW);
		UE_LOG(LogTemp, Warning, TEXT("W position is: %f"), float(mPositionW));
	}
	else
	{
		SetActorLocation(GetActorLocation() + (GetActorForwardVector() * AxisAmount * mSpeed));
		mGameMode->SetPlayerPosition(GetActorLocation());
	}
}

void APlayer4D::StrafeSideways(float AxisAmount)
{
	SetActorLocation(GetActorLocation() + (GetActorRightVector() * AxisAmount * mSpeed));
	mGameMode->SetPlayerPosition(GetActorLocation());
}

void APlayer4D::LookVertical(float AxisAmount)
{
	AddControllerPitchInput(AxisAmount);
}

void APlayer4D::LookHroizontal(float AxisAmount)
{
	AddControllerYawInput(AxisAmount);
}

void APlayer4D::RollW(float AxisAmount)
{
	mRotationW.Add(0, 0, AxisAmount / 100);
	mGameMode->SetWValues(mPositionW, mRotationW);
}

void APlayer4D::PitchW(float AxisAmount)
{
	mRotationW.Add(-AxisAmount / 100, 0, 0);
	mGameMode->SetWValues(mPositionW, mRotationW);
}

void APlayer4D::YawW(float AxisAmount)
{
	mRotationW.Add(0, AxisAmount / 100, 0);
	mGameMode->SetWValues(mPositionW, mRotationW);
}

void APlayer4D::StrafeVertical(float AxisAmount)
{
	SetActorLocation(GetActorLocation() + (GetActorUpVector() * AxisAmount * mSpeed));
	mGameMode->SetPlayerPosition(GetActorLocation());
}

void APlayer4D::Movement4D()
{
	mMoving4D = !mMoving4D;
}

