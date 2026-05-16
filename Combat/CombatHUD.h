// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "CombatHUD.generated.h"

/**
 * 
 */
UCLASS()
class COMBAT_API ACombatHUD : public AHUD
{
	GENERATED_BODY()
public:
	// Sets default values for this pawn's properties
	ACombatHUD();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	
};
