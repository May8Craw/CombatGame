// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "GameFramework/Actor.h"
#include "BulletObjectPool.generated.h"

UINTERFACE(Blueprintable)
class UPoolable : public UInterface
{
	GENERATED_BODY()
};

class IPoolable
{
	GENERATED_BODY()
public:	
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void ActivateFromPool();

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void DeactivateToPool();


};

UCLASS()
class COMBAT_API UBulletObjectPool : public UWorldSubsystem
{
	GENERATED_BODY()

public:
	//Take actor out of the pool
	UFUNCTION(BlueprintCallable, meta = (DeterminesOutputType = "ClassType"))
	AActor* GetFromPool(TSubclassOf<AActor> ClassType);

	//Put actor back into the pool
	UFUNCTION(BlueprintCallable)
	bool ReturnActorToPool(AActor* ActorToReturn);

	//Initialize object pool map
	UFUNCTION(BlueprintCallable)
	void InitializePools(TMap<TSubclassOf<AActor>, int32> StartingPoolSizes);

private:

	//The actual object pool
	TMap<TSubclassOf<AActor>, TArray<AActor*>> Pool;

};
