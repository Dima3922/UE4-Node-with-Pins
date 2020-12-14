// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TestPins.generated.h"

UENUM(BlueprintType)
enum EOutcomePins
{
	Failure,
    Success
};


UCLASS()
class TESTFEROX_API ATestPins : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATestPins();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	
	UFUNCTION(BlueprintCallable, meta = (ExpandEnumAsExecs = "Outcome"))
    static void RandomizeActorSize(AActor * Target, bool isSuccess, TEnumAsByte<EOutcomePins> & Outcome);


	/*


	UFUNCTION(BlueprintCallable, meta = (ExpandEnumAsExecs = "Outcome"))
	static void RandomizeActorSize(AActor * Target, float & NewSizeZ, bool isSuccess, TEnumAsByte<EOutcomePins> & Outcome);
	 
	 */
	
};
