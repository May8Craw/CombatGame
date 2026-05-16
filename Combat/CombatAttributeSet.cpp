// Fill out your copyright notice in the Description page of Project Settings.


#include "CombatAttributeSet.h"

void UCombatAttributeSet::PreAttributeChange(const FGameplayAttribute& Attribute, float& NewValue)
{
	const float MAX_SPEED = 7500.0f;

	Super::PreAttributeChange(Attribute, NewValue);

	if (Attribute == GetMoveSpeedAttribute())
	{
		//Change movement speed and apply, but restrict the value first
		NewValue = FMath::Clamp(NewValue, 0.0f, MAX_SPEED);
	}
}