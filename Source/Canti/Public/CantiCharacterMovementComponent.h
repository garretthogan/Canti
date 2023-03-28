// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "CantiCharacterMovementComponent.generated.h"

/**
 * 
 */
UCLASS()
class CANTI_API UCantiCharacterMovementComponent : public UCharacterMovementComponent
{
	GENERATED_BODY()
	
protected:

	/** @note Movement update functions should only be called through StartNewPhysics()*/
	virtual void PhysWalking(float deltaTime, int32 Iterations) override;

	/** Handle falling movement. */
	virtual void PhysFalling(float deltaTime, int32 Iterations) override;
};
