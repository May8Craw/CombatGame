// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "CombatPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class COMBAT_API ACombatPlayerController : public APlayerController
{
	GENERATED_BODY()
public:
	// Sets default values for this pawn's properties
	ACombatPlayerController();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

};
