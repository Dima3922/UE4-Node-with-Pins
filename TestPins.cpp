// Fill out your copyright notice in the Description page of Project Settings.


#include "TestPins.h"

// Sets default values
ATestPins::ATestPins()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATestPins::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATestPins::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ATestPins::RandomizeActorSize(AActor * Target, bool isSuccess, TEnumAsByte<EOutcomePins> & Outcome)
{
	if(isSuccess)
	{
		Outcome = EOutcomePins::Success;
	}
	else
	{
		Outcome = EOutcomePins::Failure;
	}
}

