// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "PacManCharacter.generated.h"

UCLASS()
class PANGAME_API APacManCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	APacManCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input //人物移动和按键绑定的函数
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	void MoveXAxis(float AxisValue);//x轴移动函数
	void MoveYAxis(float AxisValue);//y轴移动函数

	void Restart();

	void Pause();

	void NewGame();

	FVector CurrentVelocity;//速度
 
};
