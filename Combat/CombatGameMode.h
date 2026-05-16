// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "CombatGameMode.generated.h"

/**
 * 
 */
UCLASS()
class COMBAT_API ACombatGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ACombatGameMode();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	
};
