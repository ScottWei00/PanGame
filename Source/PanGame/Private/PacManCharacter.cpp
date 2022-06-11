// Fill out your copyright notice in the Description page of Project Settings.


#include "PacManCharacter.h"

// Sets default values
APacManCharacter::APacManCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APacManCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APacManCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void APacManCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis("MoveX", this, &APacManCharacter::MoveXAxis);//����������MoveX�ƶ������ʹ�����MoveXAxis������
	PlayerInputComponent->BindAxis("MoveY", this, &APacManCharacter::MoveYAxis);
}

void APacManCharacter::MoveXAxis(float AxisValue)//x���ƶ�
{
	CurrentVelocity.X = AxisValue;
	AddMovementInput(CurrentVelocity);
}

void APacManCharacter::MoveYAxis(float AxisValue)//y���ƶ�
{
	CurrentVelocity.Y = AxisValue;
	AddMovementInput(CurrentVelocity);
}

