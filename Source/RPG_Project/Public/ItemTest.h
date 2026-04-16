// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ItemTest.generated.h"

UCLASS()
class RPG_PROJECT_API AItemTest : public AActor
{
	GENERATED_BODY()
	
public:	
	AItemTest();
	virtual void Tick(float DeltaTime) override;

protected:
	virtual void BeginPlay() override;



};
