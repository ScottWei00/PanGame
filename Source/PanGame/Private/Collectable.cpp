// Fill out your copyright notice in the Description page of Project Settings.


#include "Collectable.h"

// Sets default values
ACollectable::ACollectable()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;//����Tick�Ƿ�ÿִ֡��һ�Σ�true��ÿִ֡��һ�Σ�false��ִ��Tick����
	SetActorEnableCollision(true);
	CollectableMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CollectableMesh"));//ʵ�ֶ������ӵ����
	BaseCollisionComponent = CreateDefaultSubobject<USphereComponent>(TEXT("BaseCollisionComponent"));//ʵ�ֶ�����ײ���������

	CollectableMesh->AttachTo(BaseCollisionComponent);//����ײ��󶨵���̬�����ϣ�����������ͼ�ⶹ��������ײ��

	static ConstructorHelpers::FObjectFinder<UStaticMesh> Sphere(TEXT("StaticMesh'/Engine/BasicShapes/Sphere.Sphere'"));//�ҵ��������ʵ��
	if (Sphere.Succeeded())//����ҵ�������ľ�̬�����򽫶��ӵľ�̬������ľ�̬������Ϊ�����徲̬����
	{
		CollectableMesh->SetStaticMesh(Sphere.Object);

	} 
	CollectableMesh->SetWorldScale3D(FVector(0.3,0.3,0.3));//���þ�̬����Ĵ�С
	BaseCollisionComponent->SetSphereRadius(16);//������ײ��ļ�ⷶΧ
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

