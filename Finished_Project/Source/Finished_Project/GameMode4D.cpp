// Fill out your copyright notice in the Description page of Project Settings.

#include "GameMode4D.h"
#include "DynamicActor4D.h"
#include "Trigger4D.h"

AGameMode4D::AGameMode4D()
{
	mDynmeshToFind = ADynamicActor4D::StaticClass();
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), mDynmeshToFind, Objects4D);

	mVolumesToFind = ATrigger4D::StaticClass();
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), mVolumesToFind, Volumes4D);
}

float AGameMode4D::GetWPosition()
{
	return mPositionW;
}

FRotator AGameMode4D::GetWRotation()
{
	return mRotationW;
}

void AGameMode4D::SetWPosition(float w)
{
	mPositionW = w;
}

void AGameMode4D::SetWRotation(FRotator w)
{
	mRotationW = w;	
}

void AGameMode4D::SetWValues(float w, FRotator rotationW)
{
	if(!mUpdating)
	{
		mUpdating = true;
		mPositionW = w;
		mRotationW = rotationW;

		for (int i = 0; i < Objects4D.Num(); ++i)
		{
			if (Cast<ADynamicActor4D>(Objects4D[i]))
			{
				if (!Cast<ADynamicActor4D>(Objects4D[i])->GetInVolume())
				{
					Cast<ADynamicActor4D>(Objects4D[i])->SetAngleW(mRotationW);
					Cast<ADynamicActor4D>(Objects4D[i])->SetW(mPositionW);
					Cast<ADynamicActor4D>(Objects4D[i])->OnRebuildGeneratedMesh((Cast<ADynamicActor4D>(Objects4D[i]))->GetDynamicMeshComponent()->GetDynamicMesh());
				}
			}
		}

		for (int i = 0; i < Volumes4D.Num(); ++i)
		{
			if (Cast<ATrigger4D>(Volumes4D[i]))
			{
				Cast<ATrigger4D>(Volumes4D[i])->SetWorldPositionW(mPositionW);
				Cast<ATrigger4D>(Volumes4D[i])->SetWorldAngleW(mRotationW);
			}
		}

		DisplayPosition(mPlayerPosition, mPositionW);
		DisplayRotation(mRotationW);

		mUpdating = false;
	}	
}

void AGameMode4D::SetPlayerPosition(FVector player)
{
	mPlayerPosition = player;
	DisplayPosition(mPlayerPosition, mPositionW);
}

void AGameMode4D::DisplayPosition_Implementation(FVector position, float w)
{
}

void AGameMode4D::DisplayRotation_Implementation(FRotator rotation)
{
}
