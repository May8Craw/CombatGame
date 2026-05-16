// Fill out your copyright notice in the Description page of Project Settings.


#include "CombatGameMode.h"

// Sets default values
ACombatGameMode::ACombatGameMode()
{
	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	UE_LOG(LogTemp, Warning, TEXT("Game Mode"));

}

// Called when the game starts or when spawned
void ACombatGameMode::BeginPlay()
{
	Super::BeginPlay();
	UE_LOG(LogTemp, Warning, TEXT("Game Mode Begin Play"));
}