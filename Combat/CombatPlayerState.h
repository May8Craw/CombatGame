// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "CombatPlayerState.generated.h"

/**
 * 
 */
UCLASS()
class COMBAT_API ACombatPlayerState : public APlayerState
{
	GENERATED_BODY()
public:
	// Sets default values for this pawn's properties
	ACombatPlayerState();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	
};
