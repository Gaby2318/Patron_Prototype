// Fill out your copyright notice in the Description page of Project Settings.


#include "ObjetosLaberinto.h"
#include "BomberPrototype.h"


// Sets default values
AObjetosLaberinto::AObjetosLaberinto()
{
    // Initialize components
	PrimaryActorTick.bCanEverTick = true;
    MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComponent"));
    RootComponent = MeshComponent;
}

UObject* AObjetosLaberinto::Clone() const
{
    return nullptr;
}

/*
// Clone implementation
UObject* AObjetosLaberinto::Clone_Implementation() const
{ 
// Crear una nueva instancia
    AObjetosLaberinto* NewObject = GetWorld()->SpawnActor<AObjetosLaberinto>(GetClass(), GetActorTransform());

    // Copiar propiedades
    NewObject->ObjectType = ObjectType;

    // Copiar el mesh si existe
    if(MeshComponent)
    {
        NewObject->MeshComponent->SetStaticMesh(MeshComponent->GetStaticMesh());
    }

    return NewObject;
	return nullptr;
}*/

// Called when the game starts or when spawned
void AObjetosLaberinto::BeginPlay()
{
    Super::BeginPlay();
}

// Called every frame
void AObjetosLaberinto::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}
