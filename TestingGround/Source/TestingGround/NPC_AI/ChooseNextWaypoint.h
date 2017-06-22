// 13th_Panic 2017

#pragma once

#include "Engine.h"
#include "BehaviorTree/BTTaskNode.h"
#include "ChooseNextWaypoint.generated.h"

//Forward Declarations

/**
 * Chooses the next waypoint for a patrol route and cycles through index
 */
UCLASS()
class TESTINGGROUND_API UChooseNextWaypoint : public UBTTaskNode
{
	GENERATED_BODY()
	

	EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;

protected:
	UPROPERTY(EditAnywhere, Category = "Blackboard")
	struct FBlackboardKeySelector IndexKey;

	UPROPERTY(EditAnywhere, Category = "Blackboard")
	struct FBlackboardKeySelector WaypointKey;
};


