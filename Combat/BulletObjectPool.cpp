// Fill out your copyright notice in the Description page of Project Settings.


#include "BulletObjectPool.h"


AActor* UBulletObjectPool::GetFromPool(TSubclassOf<AActor> ClassType)
{
	AActor* FoundActor = nullptr;

	if (Pool.Contains(ClassType)) 
	{
		if (Pool[ClassType].Num() > 0)
		{
			FoundActor = Pool[ClassType].Pop(true);
			if (FoundActor->GetClass()->ImplementsInterface(UPoolable::StaticClass()))
			{
				IPoolable::Execute_ActivateFromPool(FoundActor);
			}
		}
	}

	return FoundActor;
}

bool UBulletObjectPool::ReturnActorToPool(AActor* ActorToReturn)
{
	return true;
}

void UBulletObjectPool::InitializePools(TMap<TSubclassOf<AActor>, int32> StartingPoolSizes)
{
	//TODO: Handle case where the pool is already initialized

	FActorSpawnParameters SpawnParams;
	SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

	for (auto& Elem : StartingPoolSizes)
	{
		Pool.Add(Elem.Key);
		for (int i = 0; i < Elem.Value; i++) 
		{
			AActor* NewActor = GetWorld()->SpawnActor<AActor>(Elem.Key, SpawnParams);
			Pool[Elem.Key].Push(NewActor);
			
			if (Elem.Key->ImplementsInterface(UPoolable::StaticClass()))
			{
				IPoolable::Execute_DeactivateToPool(NewActor);
			}
		} 
	}

}
