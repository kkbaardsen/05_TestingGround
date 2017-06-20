// 13th_Panic 2017

#include "Public/ChooseNextWaypoint.h"
#include "BehaviorTree/BehaviorTreeComponent.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "TestingGround.h"

EBTNodeResult::Type UChooseNextWaypoint::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	auto BlackboardComp = OwnerComp.GetBlackboardComponent();
	auto Index = BlackboardComp->GetValueAsInt(IndexKey.SelectedKeyName);
	
	//TODO Remove Log
	UE_LOG(LogTemp, Warning, TEXT("Waypoint index: %i"), Index);
	
	return EBTNodeResult::Succeeded;
}
