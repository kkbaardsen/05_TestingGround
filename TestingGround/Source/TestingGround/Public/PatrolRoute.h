// 13th_Panic 2017

#pragma once

#include "Engine.h"
#include "Components/ActorComponent.h"
#include "PatrolRoute.generated.h"

/*
 * A "Route Card" to help AI choose their next waypoint
 */
UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class TESTINGGROUND_API UPatrolRoute : public UActorComponent
{
	GENERATED_BODY()

public:
	TArray<AActor*> GetPatrolPoints() const;

private:
	UPROPERTY(EditInstanceOnly, Category = "Patrol Route")
	TArray<AActor*> PatrolPoints;
	
};
