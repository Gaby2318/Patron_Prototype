// Fill out your copyright notice in the Description page of Project Settings.


#include "GeneradorLaberinto.h"
#include "Muro.h"
#include "Bomba.h"

// Sets default values
AGeneradorLaberinto::AGeneradorLaberinto()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AGeneradorLaberinto::BeginPlay()
{
	Super::BeginPlay();
	// Call the function to generate the maze
	GenerarLaberinto();
	
}

void AGeneradorLaberinto::GenerarLaberinto()
{/*
	// Limpiar objetos existentes
	for (AObjetosLaberinto* Object : LaberintoObjects)
	{
		if (Object)
		{
			Object->Destroy();
		}
		LaberintoObjects.Empty();

		// Generar el laberinto
		for (int32 Row = 0; Row < GridSize; Row++)
		{
			for (int32 Col = 0; Col < GridSize; Col++)
			{
				FVector Location = FVector(Col * CellSize, Row * CellSize, 0.0f);
				TSubclassOf<AObjetosLaberinto> ObjectClass;
				// Alternar entre Muro y Bomba
				if ((Row + Col) % 2 == 0)
				{
					ObjectClass = AMuro::StaticClass();
				}
				else
				{
					ObjectClass = ABomba::StaticClass();
				}
				AObjetosLaberinto* NewObject = GetWorld()->SpawnActor<AObjetosLaberinto>(ObjectClass, Location, FRotator::ZeroRotator);
				if (NewObject)
				{
					LaberintoObjects.Add(NewObject);
				}
			}
		}
	}*/
}
// Example of spawning an object at a specific location
/*AObjetosLaberinto* AGeneradorLaberinto::SpawnObjectAtLocation(TSubclassOf<AObjetosLaberinto> ObjectClass, FVector Location)
{
	if (!PrototypeClass) return nullptr;
    
    // Crear un prototipo temporal para clonar
    AObjetosLaberinto* Prototype = GetWorld()->SpawnActor<AObjetosLaberinto>(PrototypeClass, FVector::ZeroVector, FRotator::ZeroRotator);
    if (!Prototype) return nullptr;
    
    // Clonar el prototipo
   AObjetosLaberinto* NewObject = Cast<AObjetosLaberinto>(Prototype->Clone());
    if (NewObject)
    {
        NewObject->SetActorLocation(Location);
        SpawnedObjects.Add(NewObject);
    }
    
    // Destruir el prototipo temporal
    Prototype->Destroy();
    
    return NewObject;

}*/




// Called every frame
void AGeneradorLaberinto::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

