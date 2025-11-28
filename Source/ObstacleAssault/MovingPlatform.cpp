// Fill out your copyright notice in the Description page of Project Settings.


#include "MovingPlatform.h"

// Sets default values
AMovingPlatform::AMovingPlatform()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

void LogCall(int MyIntParam, FString MyStringParam)
{
	UE_LOG(LogTemp, Display, TEXT("My Values are: %d"), MyIntParam);

	UE_LOG(LogTemp, Display, TEXT("My name is: %s"), *MyStringParam);
}

// Called when the game starts or when spawned
void AMovingPlatform::BeginPlay()
{
	Super::BeginPlay();

	FString MyName = GetName();
	LogCall(10, MyName);
} 

// Called every frame
void AMovingPlatform::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// the current location is being populated by the actor's location, then we add the move speed multiplied by delta time to it to achieve velocity independent fps
	FVector CurrentLocation = GetActorLocation();
	CurrentLocation = CurrentLocation + (MoveSpeed * DeltaTime);
	SetActorLocation(CurrentLocation);
}