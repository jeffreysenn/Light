// Fill out your copyright notice in the Description page of Project Settings.

#include "CometCompanion.h"

#include "Kismet/GameplayStatics.h"

// Sets default values
ACometCompanion::ACometCompanion()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACometCompanion::BeginPlay()
{
	Super::BeginPlay();
}

UMoodComponent* ACometCompanion::FindLiberatorMoodComp(AActor* Liberator)
{
	if (Liberator)
	{
		return Liberator->FindComponentByClass<UMoodComponent>();
	}

	return nullptr;
}

// Called every frame
void ACometCompanion::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ACometCompanion::SetCometCompanionFree(AActor* Liberator)
{
	bIsFree = true;
	OnSetFree(Liberator);
}
