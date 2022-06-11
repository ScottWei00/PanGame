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
	ACollectable();//构造函数

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;//开始前运行一次

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;//每帧执行一次

	
	UPROPERTY(VisibleAnywhere, Category=Collectable)
	UStaticMeshComponent* CollectableMesh;//静态网格组件,用来创建静态网格

	
	UPROPERTY(EditDefaultsOnly, Category=Collectable)
	USphereComponent* BaseCollisionComponent;//球体组件，用于碰撞检测

	UPROPERTY(EditAnywhere, Category=Collectable)
	bool bIsSuperCollectable;

};
