// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Collectable.generated.h"

UCLASS()
class PANGAME_API ACollectable : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACollectable();//���캯��

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;//��ʼǰ����һ��

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;//ÿִ֡��һ��

	
	UPROPERTY(VisibleAnywhere, Category=Collectable)
	UStaticMeshComponent* CollectableMesh;//��̬�������,����������̬����

	
	UPROPERTY(EditDefaultsOnly, Category=Collectable)
	USphereComponent* BaseCollisionComponent;//���������������ײ���

	UPROPERTY(EditAnywhere, Category=Collectable)
	bool bIsSuperCollectable;

};
