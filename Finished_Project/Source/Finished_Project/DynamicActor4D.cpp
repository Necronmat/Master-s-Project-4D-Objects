// Fill out your copyright notice in the Description page of Project Settings.
#pragma once

#include "DynamicActor4D.h"

#include "DynamicMesh/DynamicMesh3.h"
#include "DynamicMesh/MeshNormals.h"
#include "DynamicMesh/MeshTransforms.h"
#include "DynamicMesh/MeshAttributeUtil.h"
#include "DynamicMeshEditor.h"
#include "UDynamicMesh.h"

#include <algorithm>
#include <limits>

ADynamicActor4D::ADynamicActor4D()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	GetDynamicMeshComponent()->FastNotifyColorsUpdated();
}

UPARAM(DisplayName = "Target Mesh")UDynamicMesh* ADynamicActor4D::Append5Cell(UDynamicMesh* TargetMesh, FVector currentWAngle, float currentWPosition, float wPosition, float wScale, FVector wAngle, float maxW, float minW)
{
	if (TargetMesh == nullptr)
	{
		UE_LOG(LogTemp, Warning, TEXT("Append5Cell: TargetMesh is Null"));
		return TargetMesh;
	}

	TArray <FVector4f> points4D;

	float sqr10 = sqrt(10.0f);
	float sqr6 = sqrt(6.0f);
	float sqr3 = sqrt(3.0f);

	points4D.Add(FVector4f(1 / sqr10, 1 / sqr6, 1 / sqr3, 1));
	points4D.Add(FVector4f(1 / sqr10, 1 / sqr6, 1 / sqr3, -1));
	points4D.Add(FVector4f(1 / sqr10, 1 / sqr6, -2 / sqr3, 0));
	points4D.Add(FVector4f(1 / sqr10, -sqrt(3.0f / 2.0f), 0, 0));
	points4D.Add(FVector4f(-2 * sqrt(2.0f / 5.0f), 0, 0, 0));

	std::vector<Point> projPoints = ProjectPoints(points4D, currentWAngle, currentWPosition, wPosition, wScale, wAngle, maxW, minW);

	TargetMesh->SetMesh(BuildMesh(projPoints));

	return TargetMesh;
}

UPARAM(DisplayName = "Target Mesh")UDynamicMesh* ADynamicActor4D::Append8Cell(UDynamicMesh* TargetMesh, FVector currentWAngle, float currentWPosition, float wPosition, float wScale, FVector wAngle, float maxW, float minW)
{
	if (TargetMesh == nullptr)
	{
		UE_LOG(LogTemp, Warning, TEXT("Append8Cell: TargetMesh is Null"));
		return TargetMesh;
	}

	TArray <FVector4f> points4D;

	points4D.Add(FVector4f(1.0f, 1.0f, 1.0f, 1.0f));
	points4D.Add(FVector4f(-1.0f, -1.0f, -1.0f, -1.0f));

	std::array<float, 4> temp = { -1.0f, 1.0f, 1.0f, 1.0f };
	AllPermutations(temp, points4D);

	temp = { -1.0f, -1.0f, 1.0f, 1.0f };
	AllPermutations(temp, points4D);

	temp = { -1.0f, -1.0f, -1.0f, 1.0f };
	AllPermutations(temp, points4D);

	std::vector<Point> projPoints = ProjectPoints(points4D, currentWAngle, currentWPosition, wPosition, wScale, wAngle, maxW, minW);

	TargetMesh->SetMesh(BuildMesh(projPoints));

	return TargetMesh;
}

UPARAM(DisplayName = "Target Mesh")UDynamicMesh* ADynamicActor4D::Append16Cell(UDynamicMesh* TargetMesh, FVector currentWAngle, float currentWPosition, float wPosition, float wScale, FVector wAngle, float maxW, float minW)
{
	if (TargetMesh == nullptr)
	{
		UE_LOG(LogTemp, Warning, TEXT("Append16Cell: TargetMesh is Null"));
		return TargetMesh;
	}

	TArray <FVector4f> points4D;

	std::array<float, 4> temp = { 1.0f, 0.0f, 0.0f, 0.0f };
	AllPermutations(temp, points4D);

	temp = { -1.0f, 0.0f, 0.0f, 0.0f };
	AllPermutations(temp, points4D);

	std::vector<Point> projPoints = ProjectPoints(points4D, currentWAngle, currentWPosition, wPosition, wScale, wAngle, maxW, minW);

	TargetMesh->SetMesh(BuildMesh(projPoints));

	return TargetMesh;
}

UPARAM(DisplayName = "Target Mesh")UDynamicMesh* ADynamicActor4D::Append24Cell(UDynamicMesh* TargetMesh, FVector currentWAngle, float currentWPosition, float wPosition, float wScale, FVector wAngle, float maxW, float minW)
{
	if (TargetMesh == nullptr)
	{
		UE_LOG(LogTemp, Warning, TEXT("Append24Cell: TargetMesh is Null"));
		return TargetMesh;
	}

	TArray <FVector4f> points4D;

	std::array<float, 4> temp = { 1.0f, 1.0f, 0.0f, 0.0f };
	AllPermutations(temp, points4D);

	temp = { -1.0f, 1.0f, 0.0f, 0.0f };
	AllPermutations(temp, points4D);

	temp = { -1.0f, -1.0f, 0.0f, 0.0f };
	AllPermutations(temp, points4D);

	std::vector<Point> projPoints = ProjectPoints(points4D, currentWAngle, currentWPosition, wPosition, wScale, wAngle, maxW, minW);

	TargetMesh->SetMesh(BuildMesh(projPoints));

	return TargetMesh;
}

UPARAM(DisplayName = "Target Mesh")UDynamicMesh* ADynamicActor4D::Append120Cell(UDynamicMesh* TargetMesh, FVector currentWAngle, float currentWPosition, float wPosition, float wScale, FVector wAngle, float maxW, float minW)
{
	if (TargetMesh == nullptr)
	{
		UE_LOG(LogTemp, Warning, TEXT("Append120Cell: TargetMesh is Null"));
		return TargetMesh;
	}

	TArray <FVector4f> points4D;

	float gold = (1 + sqrt(5)) / 2;
	float gold2 = gold * gold;
	float goldNeg1 = pow(gold, -1);
	float goldNeg2 = pow(gold, -2);

	std::array<float, 4> temp = { 2.0f, 2.0f, 0.0f, 0.0f };
	AllPermutations(temp, points4D);
	temp = { -2.0f, 2.0f, 0.0f, 0.0f };
	AllPermutations(temp, points4D);
	temp = { -2.0f, -2.0f, 0.0f, 0.0f };
	AllPermutations(temp, points4D);

	float sqr5 = sqrt(5);
	temp = { sqr5, 1.0f, 1.0f, 1.0f };
	AllPermutations(temp, points4D);
	temp = { sqr5, 1.0f, 1.0f, -1.0f };
	AllPermutations(temp, points4D);
	temp = { sqr5, 1.0f, -1.0f, -1.0f };
	AllPermutations(temp, points4D);
	temp = { sqr5, -1.0f, -1.0f, -1.0f };
	AllPermutations(temp, points4D);
	temp = { -sqr5, 1.0f, 1.0f, 1.0f };
	AllPermutations(temp, points4D);
	temp = { -sqr5, 1.0f, 1.0f, -1.0f };
	AllPermutations(temp, points4D);
	temp = { -sqr5, 1.0f, -1.0f, -1.0f };
	AllPermutations(temp, points4D);
	temp = { -sqr5, -1.0f, -1.0f, -1.0f };
	AllPermutations(temp, points4D);

	temp = { gold, gold, gold, goldNeg2 };
	AllPermutations(temp, points4D);
	temp = { -gold, gold, gold, goldNeg2 };
	AllPermutations(temp, points4D);
	temp = { -gold, -gold, gold, goldNeg2 };
	AllPermutations(temp, points4D);
	temp = { -gold, -gold, -gold, goldNeg2 };
	AllPermutations(temp, points4D);
	temp = { gold, gold, gold, -goldNeg2 };
	AllPermutations(temp, points4D);
	temp = { -gold, gold, gold, -goldNeg2 };
	AllPermutations(temp, points4D);
	temp = { -gold, -gold, gold, -goldNeg2 };
	AllPermutations(temp, points4D);
	temp = { -gold, -gold, -gold, -goldNeg2 };
	AllPermutations(temp, points4D);

	temp = { gold2, goldNeg1, goldNeg1, goldNeg1 };
	AllPermutations(temp, points4D);
	temp = { gold2, -goldNeg1, goldNeg1, goldNeg1 };
	AllPermutations(temp, points4D);
	temp = { gold2, -goldNeg1, -goldNeg1, goldNeg1 };
	AllPermutations(temp, points4D);
	temp = { gold2, -goldNeg1, -goldNeg1, -goldNeg1 };
	AllPermutations(temp, points4D);
	temp = { -gold2, goldNeg1, goldNeg1, goldNeg1 };
	AllPermutations(temp, points4D);
	temp = { -gold2, -goldNeg1, goldNeg1, goldNeg1 };
	AllPermutations(temp, points4D);
	temp = { -gold2, -goldNeg1, -goldNeg1, goldNeg1 };
	AllPermutations(temp, points4D);
	temp = { -gold2, -goldNeg1, -goldNeg1, -goldNeg1 };
	AllPermutations(temp, points4D);

	temp = { gold2, goldNeg2, 1.0f, 0.0f };
	AllEvenPermutations(temp, points4D);
	temp = { -gold2, goldNeg2, 1.0f, 0.0f };
	AllEvenPermutations(temp, points4D);
	temp = { gold2, -goldNeg2, 1.0f, 0.0f };
	AllEvenPermutations(temp, points4D);
	temp = { gold2, goldNeg2, -1.0f, 0.0f };
	AllEvenPermutations(temp, points4D);
	temp = { -gold2, -goldNeg2, 1.0f, 0.0f };
	AllEvenPermutations(temp, points4D);
	temp = { -gold2, goldNeg2, -1.0f, 0.0f };
	AllEvenPermutations(temp, points4D);
	temp = { gold2, -goldNeg2, -1.0f, 0.0f };
	AllEvenPermutations(temp, points4D);
	temp = { -gold2, -goldNeg2, -1.0f, 0.0f };
	AllEvenPermutations(temp, points4D);

	temp = { sqr5, goldNeg1, gold, 0.0f };
	AllEvenPermutations(temp, points4D);
	temp = { -sqr5, goldNeg1, gold, 0.0f };
	AllEvenPermutations(temp, points4D);
	temp = { sqr5, -goldNeg1, gold, 0.0f };
	AllEvenPermutations(temp, points4D);
	temp = { sqr5, goldNeg1, -gold, 0.0f };
	AllEvenPermutations(temp, points4D);
	temp = { -sqr5, -goldNeg1, gold, 0.0f };
	AllEvenPermutations(temp, points4D);
	temp = { -sqr5, goldNeg1, -gold, 0.0f };
	AllEvenPermutations(temp, points4D);
	temp = { sqr5, -goldNeg1, -gold, 0.0f };
	AllEvenPermutations(temp, points4D);
	temp = { -sqr5, -goldNeg1, -gold, 0.0f };
	AllEvenPermutations(temp, points4D);

	temp = { 2.0f, 1.0f, gold, goldNeg1 };
	AllEvenPermutations(temp, points4D);
	temp = { -2.0f, 1.0f, gold, goldNeg1 };
	AllEvenPermutations(temp, points4D);
	temp = { 2.0f, -1.0f, gold, goldNeg1 };
	AllEvenPermutations(temp, points4D);
	temp = { 2.0f, 1.0f, -gold, goldNeg1 };
	AllEvenPermutations(temp, points4D);
	temp = { 2.0f, 1.0f, gold, -goldNeg1 };
	AllEvenPermutations(temp, points4D);
	temp = { -2.0f, -1.0f, gold, goldNeg1 };
	AllEvenPermutations(temp, points4D);
	temp = { -2.0f, 1.0f, -gold, goldNeg1 };
	AllEvenPermutations(temp, points4D);
	temp = { -2.0f, 1.0f, gold, -goldNeg1 };
	AllEvenPermutations(temp, points4D);
	temp = { 2.0f, -1.0f, -gold, goldNeg1 };
	AllEvenPermutations(temp, points4D);
	temp = { 2.0f, -1.0f, gold, -goldNeg1 };
	AllEvenPermutations(temp, points4D);
	temp = { 2.0f, 1.0f, -gold, -goldNeg1 };
	AllEvenPermutations(temp, points4D);
	temp = { -2.0f, -1.0f, -gold, goldNeg1 };
	AllEvenPermutations(temp, points4D);
	temp = { -2.0f, -1.0f, gold, -goldNeg1 };
	AllEvenPermutations(temp, points4D);
	temp = { -2.0f, 1.0f, -gold, -goldNeg1 };
	AllEvenPermutations(temp, points4D);
	temp = { 2.0f, -1.0f, -gold, -goldNeg1 };
	AllEvenPermutations(temp, points4D);
	temp = { -2.0f, -1.0f, -gold, -goldNeg1 };
	AllEvenPermutations(temp, points4D);

	std::vector<Point> projPoints = ProjectPoints(points4D, currentWAngle, currentWPosition, wPosition, wScale, wAngle, maxW, minW);

	TargetMesh->SetMesh(BuildMesh(projPoints));

	return TargetMesh;
}

UPARAM(DisplayName = "Target Mesh")UDynamicMesh* ADynamicActor4D::Append600Cell(UDynamicMesh* TargetMesh, FVector currentWAngle, float currentWPosition, float wPosition, float wScale, FVector wAngle, float maxW, float minW)
{
	if (TargetMesh == nullptr)
	{
		UE_LOG(LogTemp, Warning, TEXT("Append600Cell: TargetMesh is Null"));
		return TargetMesh;
	}

	TArray <FVector4f> points4D;

	points4D.Add(FVector4f(1.0f, 1.0f, 1.0f, 1.0f));
	points4D.Add(FVector4f(-1.0f, -1.0f, -1.0f, -1.0f));

	std::array<float, 4> temp = { -1.0f, 1.0f, 1.0f, 1.0f };
	AllPermutations(temp, points4D);

	temp = { -1.0f, -1.0f, 1.0f, 1.0f };
	AllPermutations(temp, points4D);

	temp = { -1.0f, -1.0f, -1.0f, 1.0f };
	AllPermutations(temp, points4D);

	temp = { 2.0f, 0.0f, 0.0f, 0.0f };
	AllPermutations(temp, points4D);
	temp = { -2.0f, 0.0f, 0.0f, 0.0f };
	AllPermutations(temp, points4D);

	float gold = (1 + sqrt(5)) / 2;

	temp = { gold, 1.0f, pow(gold, -1.0f), 0 };
	AllEvenPermutations(temp, points4D);
	temp = { -gold, 1.0f, pow(gold, -1.0f), 0 };
	AllEvenPermutations(temp, points4D);
	temp = { gold, -1.0f, pow(gold, -1.0f), 0 };
	AllEvenPermutations(temp, points4D);
	temp = { gold, 1.0f, -pow(gold, -1.0f), 0 };
	AllEvenPermutations(temp, points4D);
	temp = { -gold, -1.0f, pow(gold, -1.0f), 0 };
	AllEvenPermutations(temp, points4D);
	temp = { -gold, 1.0f, -pow(gold, -1.0f), 0 };
	AllEvenPermutations(temp, points4D);
	temp = { gold, -1.0f, -pow(gold, -1.0f), 0 };
	AllEvenPermutations(temp, points4D);
	temp = { -gold, -1.0f, -pow(gold, -1.0f), 0 };
	AllEvenPermutations(temp, points4D);

	std::vector<Point> projPoints = ProjectPoints(points4D, currentWAngle, currentWPosition, wPosition, wScale, wAngle, maxW, minW);

	TargetMesh->SetMesh(BuildMesh(projPoints));

	return TargetMesh;
}

UPARAM(DisplayName = "Target Mesh")UDynamicMesh* ADynamicActor4D::AppendRandom4D(UDynamicMesh* TargetMesh, FVector currentWAngle, float currentWPosition, float wPosition, float wScale, FVector wAngle, float maxW, float minW, TArray<FVector4f> points4D)
{
	if (TargetMesh == nullptr)
	{
		UE_LOG(LogTemp, Warning, TEXT("AppendRandom4D: TargetMesh is Null"));
		return TargetMesh;
	}

	std::vector<Point> projPoints = ProjectPoints(points4D, currentWAngle, currentWPosition, wPosition, wScale, wAngle, maxW, minW);

	TargetMesh->SetMesh(BuildMesh(projPoints));

	return TargetMesh;
}

UPARAM(DisplayName = "Target Mesh")UDynamicMesh* ADynamicActor4D::AppendCustom4D(UDynamicMesh* TargetMesh, FVector currentWAngle, float currentWPosition, float wPosition, float wScale, FVector wAngle, float maxW, float minW, TArray<FVector4f> points4D)
{
	if (TargetMesh == nullptr)
	{
		UE_LOG(LogTemp, Warning, TEXT("AppendCustom4D: TargetMesh is Null"));
		return TargetMesh;
	}

	std::vector<Point> projPoints = ProjectPoints(points4D, currentWAngle, currentWPosition, wPosition, wScale, wAngle, maxW, minW);

	TargetMesh->SetMesh(BuildMesh(projPoints));

	return TargetMesh;
}

void ADynamicActor4D::SetW(float w)
{
	mCurrentW = w;
}

void ADynamicActor4D::SetAngleW(FRotator angleW)
{
	mCurrentAngleW = angleW.Euler();
}

void ADynamicActor4D::SetInVolume(bool volume)
{
	mInVolume = volume;
}

bool ADynamicActor4D::GetInVolume()
{
	return mInVolume;
}

void ADynamicActor4D::BeginPlay()
{
	Super::BeginPlay();

	if (mShapeType == E4DShape::Random)
	{
		mPoints4D.Empty();

		for (int i = 0; i < mRandPointNum; ++i)
		{
			mPoints4D.Add(FVector4f(FMath::FRandRange(-5.0f, 5.0f), FMath::FRandRange(-5.0f, 5.0f), FMath::FRandRange(-5.0f, 5.0f), FMath::FRandRange(-5.0f, 5.0f)));
		}
	}
}

FDynamicMesh3 ADynamicActor4D::BuildMesh(std::vector<Point> projPoints)
{
	//Perform a 3D Delaunay triangulation on the projected points
	Triangulation t(projPoints.begin(), projPoints.end());

	FDynamicMesh3 builder(true, true, true, false);
	builder.EnableAttributes();
	builder.Attributes()->EnablePrimaryColors();
	builder.EnableVertexColors({ 0.5f, 0.0f, 0.5f });

	int triNum = 0;
	for (auto i = t.finite_facets_begin(); i != t.finite_facets_end(); ++i)
	{
		builder.AppendVertex({ (i->first->vertex((i->second + 1) % 4)->point()).x(), (i->first->vertex((i->second + 1) % 4)->point()).y(), (i->first->vertex((i->second + 1) % 4)->point()).z() });
		builder.AppendVertex({ (i->first->vertex((i->second + 2) % 4)->point()).x(), (i->first->vertex((i->second + 2) % 4)->point()).y(), (i->first->vertex((i->second + 2) % 4)->point()).z() });
		builder.AppendVertex({ (i->first->vertex((i->second + 3) % 4)->point()).x(), (i->first->vertex((i->second + 3) % 4)->point()).y(), (i->first->vertex((i->second + 3) % 4)->point()).z() });
		builder.SetVertexUV(triNum * 3, { 0.0f, 0.0f });
		builder.SetVertexUV(1 + triNum * 3, { 1.0f, 0.0f });
		builder.SetVertexUV(2 + triNum * 3, { 0.0f, 1.0f });
		builder.AppendTriangle((0) + triNum * 3, (1) + triNum * 3, (2) + triNum * 3);
		FVector ab = { (i->first->vertex((i->second + 2) % 4)->point() - i->first->vertex((i->second + 1) % 4)->point()).x(),
				(i->first->vertex((i->second + 2) % 4)->point() - i->first->vertex((i->second + 1) % 4)->point()).y(),
				(i->first->vertex((i->second + 2) % 4)->point() - i->first->vertex((i->second + 1) % 4)->point()).z() };
		FVector ac = { (i->first->vertex((i->second + 3) % 4)->point() - i->first->vertex((i->second + 1) % 4)->point()).x(),
						(i->first->vertex((i->second + 3) % 4)->point() - i->first->vertex((i->second + 1) % 4)->point()).y(),
						(i->first->vertex((i->second + 3) % 4)->point() - i->first->vertex((i->second + 1) % 4)->point()).z() };
		FVector3f norm = (FVector3f)(ab.Cross(ac));
		norm.Normalize();
		norm *= -1;
		builder.SetVertexNormal(triNum * 3, norm);
		builder.SetVertexNormal(1 + triNum * 3, norm);
		builder.SetVertexNormal(2 + triNum * 3, norm);
		builder.SetVertexColor((0) + triNum * 3, { 0.5f, 0.0f, 0.5f });
		builder.SetVertexColor((1) + triNum * 3, { 0.5f, 0.0f, 0.5f });
		builder.SetVertexColor((2) + triNum * 3, { 0.5f, 0.0f, 0.5f });
		++triNum;
	}
	{
		//Create the surface mesh from the list of projectted points
//Point_vector points;

  // Shape detection
//Efficient_ransac ransac;
//ransac.set_input(points);
//ransac.add_shape_factory<Plane>();

//ransac.detect();
//Efficient_ransac::Plane_range planes = ransac.planes();
//std::size_t num_planes = planes.size();

//// Stores the plane index of each point as the third element of the tuple.
//Point_to_shape_index_map shape_index_map(points, planes);
//for (std::size_t i = 0; i < points.size(); ++i) 
//{
//	// Uses the get function from the property map that accesses the 3rd element of the tuple.
//	int plane_index = get(shape_index_map, i);
//	points[i].get<2>() = plane_index;
//}

//Polygonal_surface_reconstruction algo(points, Point_map(), Normal_map(),Plane_index_map());

//Surface_mesh model;
//algo.reconstruct<MIP_Solver>(model)
	}	

	UE::Geometry::CopyVertexUVsToOverlay(builder, *builder.Attributes()->PrimaryUV());

	UE::Geometry::CopyVertexNormalsToOverlay(builder, *builder.Attributes()->PrimaryNormals());

	//There isn't a copy function for colours so do it manually
	if (builder.HasVertexColors())
	{
		if (builder.Attributes()->PrimaryColors()->ElementCount() > 0)
		{
			builder.Attributes()->PrimaryColors()->ClearElements();
		}

		builder.Attributes()->PrimaryColors()->BeginUnsafeElementsInsert();
		for (int32 Vid : builder.VertexIndicesItr())
		{
			FVector3f colour = builder.GetVertexColor(Vid);
			builder.Attributes()->PrimaryColors()->InsertElement(Vid, &colour.X, true);
		}
		builder.Attributes()->PrimaryColors()->EndUnsafeElementsInsert();

		for (int32 Tid : builder.TriangleIndicesItr())
		{
			builder.Attributes()->PrimaryColors()->SetTriangle(Tid, builder.GetTriangle(Tid));
		}
	}

	return builder;
}

std::vector<Point> ADynamicActor4D::ProjectPoints(TArray<FVector4f> points, FVector currentWAngle, float currentWPosition, float wPosition, float wScale, FVector wAngle, float maxW, float minW)
{
	//Matrix Structures
	struct Matrix4x4
	{
		FVector4f m0 = FVector4f(1, 0, 0, 0);
		FVector4f m1 = FVector4f(0, 1, 0, 0);
		FVector4f m2 = FVector4f(0, 0, 1, 0);
		FVector4f m3 = FVector4f(0, 0, 0, 1);

		FVector4f VectorMul(FVector4f p)
		{
			FVector4f newP;
			newP.X = Dot4(p, FVector4f(m0.X, m1.X, m2.X, m3.X));
			newP.Y = Dot4(p, FVector4f(m0.Y, m1.Y, m2.Y, m3.Y));
			newP.Z = Dot4(p, FVector4f(m0.Z, m1.Z, m2.Z, m3.Z));
			newP.W = Dot4(p, FVector4f(m0.W, m1.W, m2.W, m3.W));

			return newP;
		}

		void ScalarMul(float s)
		{
			m0 *= s;
			m1 *= s;
			m2 *= s;
			m3 *= s;
		}

		Matrix4x4 MatrixMul(Matrix4x4 m)
		{
			Matrix4x4 newM;
			newM.m0 = FVector4f(Dot4(m0, FVector4f(m.m0.X, m.m1.X, m.m2.X, m.m3.X)),
				Dot4(m0, FVector4f(m.m0.Y, m.m1.Y, m.m2.Y, m.m3.Y)),
				Dot4(m0, FVector4f(m.m0.Z, m.m1.Z, m.m2.Z, m.m3.Z)),
				Dot4(m0, FVector4f(m.m0.W, m.m1.W, m.m2.W, m.m3.W)));

			newM.m1 = FVector4f(Dot4(m1, FVector4f(m.m0.X, m.m1.X, m.m2.X, m.m3.X)),
				Dot4(m1, FVector4f(m.m0.Y, m.m1.Y, m.m2.Y, m.m3.Y)),
				Dot4(m1, FVector4f(m.m0.Z, m.m1.Z, m.m2.Z, m.m3.Z)),
				Dot4(m1, FVector4f(m.m0.W, m.m1.W, m.m2.W, m.m3.W)));

			newM.m2 = FVector4f(Dot4(m2, FVector4f(m.m0.X, m.m1.X, m.m2.X, m.m3.X)),
				Dot4(m2, FVector4f(m.m0.Y, m.m1.Y, m.m2.Y, m.m3.Y)),
				Dot4(m2, FVector4f(m.m0.Z, m.m1.Z, m.m2.Z, m.m3.Z)),
				Dot4(m2, FVector4f(m.m0.W, m.m1.W, m.m2.W, m.m3.W)));

			newM.m3 = FVector4f(Dot4(m3, FVector4f(m.m0.X, m.m1.X, m.m2.X, m.m3.X)),
				Dot4(m3, FVector4f(m.m0.Y, m.m1.Y, m.m2.Y, m.m3.Y)),
				Dot4(m3, FVector4f(m.m0.Z, m.m1.Z, m.m2.Z, m.m3.Z)),
				Dot4(m3, FVector4f(m.m0.W, m.m1.W, m.m2.W, m.m3.W)));

			return newM;
		}
	};

	struct Matrix4x3
	{
		FVector4f m0 = FVector4f(1, 0, 0, 0);
		FVector4f m1 = FVector4f(0, 1, 0, 0);
		FVector4f m2 = FVector4f(0, 0, 1, 0);

		FVector VectorMul(FVector4f p)
		{
			FVector newP;
			newP.X = Dot4(m0, p);
			newP.Y = Dot4(m1, p);
			newP.Z = Dot4(m2, p);

			return newP;
		}

		void ScalarMul(float s)
		{
			m0 *= s;
			m1 *= s;
			m2 *= s;
		}
	};

	Matrix4x3 mProjection;

	Matrix4x4 mRotationXW;

	Matrix4x4 mRotationYW;

	Matrix4x4 mRotationZW;
	//XW Rotation
	mRotationXW.m2 = FVector4f(0, 0, FMath::Cos(wAngle.X + currentWAngle.X), -FMath::Sin(wAngle.X + currentWAngle.X));
	mRotationXW.m3 = FVector4f(0, 0, FMath::Sin(wAngle.X + currentWAngle.X), FMath::Cos(wAngle.X + currentWAngle.X));

	//YW Rotation
	mRotationYW.m1 = FVector4f(0, FMath::Cos(wAngle.Y + currentWAngle.Y), 0, FMath::Sin(wAngle.Y + currentWAngle.Y));
	mRotationYW.m3 = FVector4f(0, -FMath::Sin(wAngle.Y + currentWAngle.Y), 0, FMath::Cos(wAngle.Y + currentWAngle.Y));

	//ZW Rotation
	mRotationZW.m1 = FVector4f(0, FMath::Cos(wAngle.Z + currentWAngle.Z), -FMath::Sin(wAngle.Z + currentWAngle.Z), 0);
	mRotationZW.m2 = FVector4f(0, FMath::Sin(wAngle.Z + currentWAngle.Z), FMath::Cos(wAngle.Z + currentWAngle.Z), 0);

	//Get the final transformation matrix
	Matrix4x4 transform = mRotationXW.MatrixMul(mRotationYW.MatrixMul(mRotationZW));

	//Apply the transformation to all the points
	TArray<FVector4f> goodPoints;
	TArray<FVector4f> badPoints;
	for (int i = 0; i < points.Num(); ++i)
	{
		FVector4f temp = transform.VectorMul(points[i]);
		if ((temp.W * wScale) + wPosition > currentWPosition + maxW  || (temp.W * wScale) + wPosition < currentWPosition + minW)
		{
			badPoints.Add(temp);
		}
		else
		{
			goodPoints.Add(temp);
		}
	}

	//Project points down to 3D
	std::vector<Point> finalPoints;

	if (goodPoints.Num() > 0)
	{
		for (int i = 0; i < goodPoints.Num(); ++i)
		{
			//Set the projecttion matrix
			float p = (2 - goodPoints[i].W);

			//Avoid dividing by 0
			if (p >= 0 && p < 0.25f)
			{
				p = 1 / -0.25f;
			}
			else if (p < 0 && p > -0.25f)
			{
				p = 1 / 0.25f;
			}
			else
			{
				p = 1 / p;
			}

			mProjection.m0 = FVector4f(p, 0, 0, 0);
			mProjection.m1 = FVector4f(0, p, 0, 0);
			mProjection.m2 = FVector4f(0, 0, p, 0);

			FVector temp = (mProjection.VectorMul(goodPoints[i]));
			finalPoints.push_back({ temp.X, temp.Y, temp.Z });
		}
	}

	if (badPoints.Num() > 0)
	{
		for (int i = 0; i < badPoints.Num(); ++i)
		{
			//Set the projecttion matrix
			float p = (2 - badPoints[i].W);

			//Avoid dividing by 0
			if (p >= 0 && p < 0.25f)
			{
				p = 1 / -0.25f;
			}
			else if (p < 0 && p > -0.25f)
			{
				p = 1 / 0.25f;
			}
			else
			{
				p = 1 / p;
			}

			mProjection.m0 = FVector4f(p, 0, 0, 0);
			mProjection.m1 = FVector4f(0, p, 0, 0);
			mProjection.m2 = FVector4f(0, 0, p, 0);

			FVector temp = (mProjection.VectorMul(badPoints[i]));

			//Get the alpha for the lerp
			float lerpAlpha = 0;
			if ((badPoints[i].W * wScale) + wPosition > currentWPosition + maxW)
			{
				lerpAlpha = FMath::Clamp(abs((badPoints[i].W * wScale) + wPosition - (maxW + currentWPosition)), 0.0f, 1.0f);
			}
			else
			{
				lerpAlpha = FMath::Clamp(abs((badPoints[i].W * wScale) + wPosition - (minW + currentWPosition)), 0.0f, 1.0f);
			}

			FVector tempPoint = FVector(FMath::Lerp(temp.X, 0.0f, lerpAlpha), FMath::Lerp(temp.Y, 0.0f, lerpAlpha), FMath::Lerp(temp.Z, 0.0f, lerpAlpha));

			if (tempPoint != FVector(0.0f, 0.0f, 0.0f))
			{
				finalPoints.push_back({ tempPoint.X, tempPoint.Y, tempPoint.Z });
			}
		}
	}

	return finalPoints;
}

void ADynamicActor4D::AllPermutations(std::array<float, 4> permPoints, TArray <FVector4f> &pointArray)
{
	std::sort(permPoints.begin(), permPoints.end());

	do
	{
		pointArray.Add(FVector4f(permPoints.at(0), permPoints.at(1), permPoints.at(2), permPoints.at(3)));
	} while (std::next_permutation(permPoints.begin(), permPoints.end()));
}

void ADynamicActor4D::AllEvenPermutations(std::array<float, 4>& permPoints, TArray <FVector4f> &pointArray)
{
	bool ret = true;
	sort(permPoints.begin(), permPoints.end());
	do
	{
		pointArray.Add(FVector4f(permPoints.at(0), permPoints.at(1), permPoints.at(2), permPoints.at(3)));

		if (permPoints.begin() == permPoints.end())
		{
			return;
		}
		auto i = permPoints.begin();
		++i;
		if (i == permPoints.end())
		{
			return;
		}

		// Enumerate all permutations until we reach an even one.
		bool parity = false;
		do {
			// Find last increasing pair of elements in the range.
			i = permPoints.end();
			auto j = --i;
			--i;

			long n = 1;
			while (i != permPoints.begin() && *j < *i) {
				j = i;
				++n;
				--i;
			}

			if (*j < *i) {
				// Entire range is decreasing: it's the
				// lexicographically greatest. So wrap around.
				j = permPoints.begin();
				n++;
				ret = false;
			}
			else {
				// Find last element larger than *i and swap them.
				auto k = permPoints.end();
				while (!(*i < *--k));
				{
					std::iter_swap(i, k);
				}
				parity = !parity;
			}

			// Reverse last decreasing range to get lexicographically next
			// smallest permutation.
			std::reverse(j, permPoints.end());
			if ((n / 2) % 2 == 1)
			{
				parity = !parity;
			}
		} while (parity);

	} while (ret);
}