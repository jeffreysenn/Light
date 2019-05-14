// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MoodComponent.h"
#include "CometCompanion.generated.h"

UCLASS()
class COMET_API ACometCompanion : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACometCompanion();

public:
	UPROPERTY(Category = Mesh, VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class UStaticMeshComponent* CompanionMesh;

	UPROPERTY(Category = Collider, VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class USphereComponent* BrakeShpere;

	bool bIsFree = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EMoodEnum MoodType;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UFUNCTION(BlueprintImplementableEvent)
	void OnSetFree(AActor* Liberator);

	UFUNCTION(BlueprintCallable)
	class UMoodComponent* FindLiberatorMoodComp(AActor* Liberator);

	UFUNCTION()
	void OnBrakeSphereOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	//// Orbit actor around a orbit centre at axis and radius
	//UFUNCTION(BlueprintCallable)
	//void OrbitAroundActor(AActor* CentreActor, FVector Axis, float Radius, float AngleDeg);

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable)
	void SetCometCompanionFree(AActor* Liberator);
};
