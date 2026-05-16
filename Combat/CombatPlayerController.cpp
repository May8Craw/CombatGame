// Fill out your copyright notice in the Description page of Project Settings.


#include "CombatPlayerController.h"

// Sets default values
ACombatPlayerController::ACombatPlayerController()
{
	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	UE_LOG(LogTemp, Warning, TEXT("Player Controller"));

}

// Called when the game starts or when spawned
void ACombatPlayerController::BeginPlay()
{
	Super::BeginPlay();
	UE_LOG(LogTemp, Warning, TEXT("Player Controller Begin Play"));
}