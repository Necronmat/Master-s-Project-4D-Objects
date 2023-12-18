// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GeometryActors/GeneratedDynamicMeshActor.h"

#include <CGAL/Exact_predicates_inexact_constructions_kernel.h>
#include <CGAL/Delaunay_triangulation_3.h>

#include "DynamicActor4D.generated.h"

typedef CGAL::Exact_predicates_inexact_constructions_kernel K;
typedef K::Point_3 Point;
typedef CGAL::Delaunay_triangulation_3<K> Triangulation;

UENUM(BlueprintType)
enum class E4DShape : uint8
{
	Cell5,
	Cell8,
	Cell16,
	Cell24,
	Cell120,
	Cell600,
	Random,
	Custom
};

/**
 * 
 */
UCLASS()
class FINISHED_PROJECT_API ADynamicActor4D : public AGeneratedDynamicMeshActor
{
	GENERATED_BODY()

public:

	//Players current w angle and position
	UPROPERTY(BlueprintReadWrite)
		FVector mCurrentAngleW = { 0.0f, 0.0f, 0.0f };

	UPROPERTY(BlueprintReadWrite)
		float mCurrentW = 0;

	//The shapes w scale position and rotation.
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float mScaleW = 1;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float mPositionW = 0;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		FVector mAngleW = { 0.0f, 0.0f, 0.0f };

	//The max and min w value that the shape will appare at
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float mMaxW = 1;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float mMinW = -1;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		E4DShape mShapeType = E4DShape::Cell8;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (EditCondition = "mShapeType == E4DShape::Random", EditConditionHides))
		float mRandPointNum = 100;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (EditCondition = "mShapeType == E4DShape::Custom", EditConditionHides))
	TArray<FVector4f> mPoints4D;

	ADynamicActor4D();

	UFUNCTION(BlueprintCallable, Category = "GeometryScript|Primitives")
		static UPARAM(DisplayName = "Target Mesh") UDynamicMesh*
		Append5Cell(UDynamicMesh* TargetMesh, FVector currentWAngle, float currentWPosition, float wPosition, float wScale, FVector wAngle, float maxW, float minW);

	UFUNCTION(BlueprintCallable, Category = "GeometryScript|Primitives")
		static UPARAM(DisplayName = "Target Mesh") UDynamicMesh*
		Append8Cell(UDynamicMesh* TargetMesh, FVector currentWAngle, float currentWPosition, float wPosition, float wScale, FVector wAngle, float maxW, float minW);

	UFUNCTION(BlueprintCallable, Category = "GeometryScript|Primitives")
		static UPARAM(DisplayName = "Target Mesh") UDynamicMesh*
		Append16Cell(UDynamicMesh* TargetMesh, FVector currentWAngle, float currentWPosition, float wPosition, float wScale, FVector wAngle, float maxW, float minW);

	UFUNCTION(BlueprintCallable, Category = "GeometryScript|Primitives")
		static UPARAM(DisplayName = "Target Mesh") UDynamicMesh*
		Append24Cell(UDynamicMesh* TargetMesh, FVector currentWAngle, float currentWPosition, float wPosition, float wScale, FVector wAngle, float maxW, float minW);

	UFUNCTION(BlueprintCallable, Category = "GeometryScript|Primitives")
		static UPARAM(DisplayName = "Target Mesh") UDynamicMesh*
		Append120Cell(UDynamicMesh* TargetMesh, FVector currentWAngle, float currentWPosition, float wPosition, float wScale, FVector wAngle, float maxW, float minW);

	UFUNCTION(BlueprintCallable, Category = "GeometryScript|Primitives")
		static UPARAM(DisplayName = "Target Mesh") UDynamicMesh*
		Append600Cell(UDynamicMesh* TargetMesh, FVector currentWAngle, float currentWPosition, float wPosition, float wScale, FVector wAngle, float maxW, float minW);

	UFUNCTION(BlueprintCallable, Category = "GeometryScript|Primitives")
		static UPARAM(DisplayName = "Target Mesh") UDynamicMesh*
		AppendRandom4D(UDynamicMesh* TargetMesh, FVector currentWAngle, float currentWPosition, float wPosition, float wScale, FVector wAngle, float maxW, float minW, TArray<FVector4f> points4D);

	UFUNCTION(BlueprintCallable, Category = "GeometryScript|Primitives")
		static UPARAM(DisplayName = "Target Mesh") UDynamicMesh*
		AppendCustom4D(UDynamicMesh* TargetMesh, FVector currentWAngle, float currentWPosition, float wPosition, float wScale, FVector wAngle, float maxW, float minW, TArray<FVector4f> points4D);

	void SetW(float w);

	void SetAngleW(FRotator angleW);

	void SetInVolume(bool volume);

	bool GetInVolume();

protected:

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:

	bool mInVolume = false;

	static FDynamicMesh3 BuildMesh(std::vector<Point> points);

	static std::vector<Point> ProjectPoints(TArray<FVector4f> points, FVector currentWAngle, float currentWPosition, float wPosition, float wScale, FVector wAngle, float maxW, float minW);

	static void AllPermutations(std::array<float, 4> permPoints, TArray <FVector4f> &pointArray);

	static void AllEvenPermutations(std::array<float, 4>& permPoints, TArray <FVector4f> &pointArray);
};
