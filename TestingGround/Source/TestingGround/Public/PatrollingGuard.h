// 13th_Panic 2017

#pragma once

#include "TP_ThirdPerson/TP_ThirdPersonCharacter.h"
#include "PatrollingGuard.generated.h"

//Forward Declarations

/**
 * 
 */
UCLASS()
class TESTINGGROUND_API APatrollingGuard : public ATP_ThirdPersonCharacter
{
	GENERATED_BODY()

	UPROPERTY(EditInstanceOnly, Category = "Patrol Route")
	TArray<AActor*> PatrolPointsCPP;
	
	
};
