// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "AbilitySystemComponent.h"
#include "CombatAttributeSet.generated.h"

/**
 * 
 */
UCLASS()
class COMBAT_API UCombatAttributeSet : public UAttributeSet
{
	GENERATED_BODY()

	public:
		UPROPERTY(EditAnywhere, BlueprintReadOnly) FGameplayAttributeData MoveSpeed;
		ATTRIBUTE_ACCESSORS_BASIC(UCombatAttributeSet, MoveSpeed);
		UPROPERTY(EditAnywhere, BlueprintReadOnly) FGameplayAttributeData RotateSpeed;
		ATTRIBUTE_ACCESSORS_BASIC(UCombatAttributeSet, RotateSpeed);

		virtual void PreAttributeChange(const FGameplayAttribute& Attribute, float& NewValue) override;
};
