// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "TestingGrounds/TP_ThirdPerson/TP_ThirdPersonCharacter.h"
// #include "TP_ThirdPerson/TP_ThirdPersonCharacter.h"
#include "PatrollingGuard.generated.h"

/**
 * 
 */
UCLASS()
class TESTINGGROUNDS_API APatrollingGuard : public ATP_ThirdPersonCharacter
{
	GENERATED_BODY()

	UPROPERTY(EditInstanceOnly, Category = "Patrol Routs")
	TArray<AActor*> PatrolPointsCPP;
};
