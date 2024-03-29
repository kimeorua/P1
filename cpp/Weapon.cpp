// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapon.h"	
#include "Components/SkeletalMeshComponent.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Engine/EngineTypes.h"

// Sets default values
AWeapon::AWeapon()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	SetRootComponent(Root);

	Mesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Mesh"));
	Mesh->SetupAttachment(Root);
	EquipSocket = " ";
	UnequipSocket = " ";

	UseESkils = nullptr;
	UseQSkils = nullptr;

	EquipNum = 0;
	MaxCombo = 0;

	Combo1 = nullptr;
	Combo2 = nullptr;
	Combo3 = nullptr;
	Combo4 = nullptr;
}

// Called when the game starts or when spawned
void AWeapon::BeginPlay()
{
	Super::BeginPlay();
	
	UseESkils = ESkils[0];
	UseQSkils = QSkils[0];
}

// Called every frame
void AWeapon::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
