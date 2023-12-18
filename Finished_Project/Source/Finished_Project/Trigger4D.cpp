// Fill out your copyright notice in the Description page of Project Settings.

#include "Trigger4D.h"
#include "DynamicActor4D.h"
#include "Components/PrimitiveComponent.h"
#include "Kismet/GameplayStatics.h"


void ATrigger4D::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	//if (!mUpdating)
	//{
	//	mUpdating = true;

	//	if (mObjects4D.Num() > 0)
	//	{
	//		for (int i = 0; i < mObjects4D.Num(); ++i)
	//		{
	//			float newW = FMath::Lerp(mPositionW, mWorldPositionW, FVector::Dist(GetActorLocation(), mObjects4D[i]->GetActorLocation()) / 10.0f);
	//			FVector newAngleW = FMath::Lerp(mAngleW, mWorldAngleW, FVector::Dist(GetActorLocation(), mObjects4D[i]->GetActorLocation()) / 10.0f);

	//			mObjects4D[i]->SetAngleW(newAngleW.Rotation());
	//			mObjects4D[i]->SetW(newW);
	//			mObjects4D[i]->OnRebuildGeneratedMesh((Cast<ADynamicActor4D>(mObjects4D[i]))->GetDynamicMeshComponent()->GetDynamicMesh());
	//		}
	//	}

	//	mUpdating = false;
	//}
}

void ATrigger4D::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (Cast<ADynamicActor4D>(OtherActor))
	{
		Cast<ADynamicActor4D>(OtherActor)->SetInVolume(true);
		Cast<ADynamicActor4D>(OtherActor)->SetAngleW(mAngleW.Rotation());
		Cast<ADynamicActor4D>(OtherActor)->SetW(mPositionW);
		Cast<ADynamicActor4D>(OtherActor)->OnRebuildGeneratedMesh((Cast<ADynamicActor4D>(OtherActor))->GetDynamicMeshComponent()->GetDynamicMesh());
		mObjects4D.Add(Cast<ADynamicActor4D>(OtherActor));
	}
}

void ATrigger4D::OnOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	if (Cast<ADynamicActor4D>(OtherActor))
	{
		Cast<ADynamicActor4D>(OtherActor)->SetInVolume(false);
		Cast<ADynamicActor4D>(OtherActor)->SetAngleW(mWorldAngleW.Rotation());
		Cast<ADynamicActor4D>(OtherActor)->SetW(mWorldPositionW);
		Cast<ADynamicActor4D>(OtherActor)->OnRebuildGeneratedMesh((Cast<ADynamicActor4D>(OtherActor))->GetDynamicMeshComponent()->GetDynamicMesh());
		mObjects4D.Remove(Cast<ADynamicActor4D>(OtherActor));
	}
}

void ATrigger4D::SetWorldPositionW(float worldW)
{
	mWorldPositionW = worldW;
	if (mObjects4D.Num() > 0)
	{
		for (int i = 0; i < mObjects4D.Num(); ++i)
		{
			mObjects4D[i]->SetAngleW(mWorldAngleW.Rotation());
			mObjects4D[i]->SetW(mWorldPositionW);
			mObjects4D[i]->OnRebuildGeneratedMesh((Cast<ADynamicActor4D>(mObjects4D[i]))->GetDynamicMeshComponent()->GetDynamicMesh());
		}
	}
}

void ATrigger4D::SetWorldAngleW(FRotator worldAngleW)
{
	mWorldAngleW = worldAngleW.Euler();
	if (mObjects4D.Num() > 0)
	{
		for (int i = 0; i < mObjects4D.Num(); ++i)
		{
			mObjects4D[i]->SetAngleW(mWorldAngleW.Rotation());
			mObjects4D[i]->SetW(mWorldPositionW);
			mObjects4D[i]->OnRebuildGeneratedMesh((Cast<ADynamicActor4D>(mObjects4D[i]))->GetDynamicMeshComponent()->GetDynamicMesh());
		}
	}
}

void ATrigger4D::BeginPlay()
{
	Super::BeginPlay();

	GetCollisionComponent()->OnComponentBeginOverlap.AddDynamic(this, &ATrigger4D::OnOverlapBegin);
	GetCollisionComponent()->OnComponentEndOverlap.AddDynamic(this, &ATrigger4D::OnOverlapEnd);
	
}
