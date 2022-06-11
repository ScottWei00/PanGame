// Fill out your copyright notice in the Description page of Project Settings.


#include "Collectable.h"

// Sets default values
ACollectable::ACollectable()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;//设置Tick是否每帧执行一次，true则每帧执行一次，false则不执行Tick函数
	SetActorEnableCollision(true);
	CollectableMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CollectableMesh"));//实现豆子样子的组件
	BaseCollisionComponent = CreateDefaultSubobject<USphereComponent>(TEXT("BaseCollisionComponent"));//实现豆子碰撞检测体的组件

	CollectableMesh->AttachTo(BaseCollisionComponent);//将碰撞体绑定到静态网格上，将豆子物体和检测豆子物体碰撞绑定

	static ConstructorHelpers::FObjectFinder<UStaticMesh> Sphere(TEXT("StaticMesh'/Engine/BasicShapes/Sphere.Sphere'"));//找到球的物体实例
	if (Sphere.Succeeded())//如果找到该球体的静态网格，则将豆子的静态体组件的静态体设置为该球体静态网格
	{
		CollectableMesh->SetStaticMesh(Sphere.Object);

	} 
	CollectableMesh->SetWorldScale3D(FVector(0.3,0.3,0.3));//设置静态组件的大小
	BaseCollisionComponent->SetSphereRadius(16);//设置碰撞体的检测范围
}

// Called when the game starts or when spawned
void ACollectable::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACollectable::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

