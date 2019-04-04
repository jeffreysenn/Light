// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ProceduralMeshComponent.h"
#include "CometProceduralMeshComponent.generated.h"

/**
 * 
 */
UCLASS()
class COMET_API UCometProceduralMeshComponent : public UProceduralMeshComponent
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
	void SomeFunction();
protected:
	
	/* The vertices of the mesh */
	TArray<FVector> Vertices;

	/* The triangles of the mesh */
	TArray<int32> Triangles;

	/* Creates a triangle that connects the given vertices */
	void AddTriangle(int32 V1, int32 V2, int32 V3);

	void GenerateCubeMesh();
};
