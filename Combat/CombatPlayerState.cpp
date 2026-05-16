// Fill out your copyright notice in the Description page of Project Settings.


#include "CombatPlayerState.h"

// Sets default values
ACombatPlayerState::ACombatPlayerState()
{
	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	UE_LOG(LogTemp, Warning, TEXT("Player State"));

}

// Called when the game starts or when spawned
void ACombatPlayerState::BeginPlay()
{
	Super::BeginPlay();
	UE_LOG(LogTemp, Warning, TEXT("Player State Begin Play"));
}