// Fill out your copyright notice in the Description page of Project Settings.


#include "CombatCameraActor.h"

// Sets default values
ACombatCameraActor::ACombatCameraActor()
{
	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	UE_LOG(LogTemp, Warning, TEXT("Camera"));

}

// Called when the game starts or when spawned
void ACombatCameraActor::BeginPlay()
{
	Super::BeginPlay();
	UE_LOG(LogTemp, Warning, TEXT("Camera Begin Play"));
}