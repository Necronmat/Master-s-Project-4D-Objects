// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/TriggerBox.h"
#include "Components/BoxComponent.h"
#include "Trigger4D.generated.h"

class ADynamicActor4D;

/**
 * 
 */
UCLASS()
class FINISHED_PROJECT_API ATrigger4D : public ATriggerBox
{
	GENERATED_BODY()
	
public:

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// declare overlap begin function
	UFUNCTION()
		void OnOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	// declare overlap end function
	UFUNCTION()
		void OnOverlapEnd(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

	void SetWorldPositionW(float worldW);

	void SetWorldAngleW(FRotator worldAngleW);

protected:

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:

	bool mUpdating = false;

	UPROPERTY(EditAnywhere)
		float mPositionW = 0;

	UPROPERTY(EditAnywhere)
		FVector mAngleW = { 0.0f, 0.0f, 0.0f };

	float mWorldPositionW = 0;

	FVector mWorldAngleW = { 0.0f, 0.0f, 0.0f };

	TArray<ADynamicActor4D*> mObjects4D;
};
