// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameStateBase.h"
#include "CombatGameState.generated.h"

/**
 * 
 */
UCLASS()
class COMBAT_API ACombatGameState : public AGameStateBase
{
	GENERATED_BODY()
public:
	// Sets default values for this pawn's properties
	ACombatGameState();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	
};
