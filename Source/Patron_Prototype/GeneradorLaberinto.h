// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GeneradorLaberinto.generated.h"

UCLASS()
class PATRON_PROTOTYPE_API AGeneradorLaberinto : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AGeneradorLaberinto();
private:
	// Array to store maze objects  
	UPROPERTY()
	TArray<AObjetosLaberinto*> LaberintoObjects;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Array de clases prototipo que se pueden usar para generar el laberinto
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Laberinto")
	TArray<TSubclassOf<AObjetosLaberinto>> BomberPrototypeClasses;

	// Array de objetos instanciados en el laberinto
	UPROPERTY(VisibleAnywhere, Category = "Laberinto")
	TArray<AObjetosLaberinto*> LaberintoObjects;

	// Tamaño de la cuadrícula del laberinto
	UPROPERTY(EditAnywhere, Category = "Laberinto")
	int32 GridSize = 15;

	// Tamaño de cada celda del laberinto
	UPROPERTY(EditAnywhere, Category = "Laberinto")
	float CellSize = 300.0f;

public:
	// Función para generar el laberinto
	UFUNCTION(BlueprintCallable, Category = "Laberinto")
	void GenerarLaberinto();

private:
	// Array to store spawned objects
	UPROPERTY()
	TArray<AObjetosLaberinto*> SpawnedObjects;


public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, Category = "Prototype")
	TSubclassOf<AObjetosLaberinto> PrototypeClass; // Define PrototypeClass here  

	// Función para spawnear objetos a partir de prototipos
	UFUNCTION(BlueprintCallable, Category = "Laberinto")
	AObjetosLaberinto* SpawnObjectAtLocation(TSubclassOf<AObjetosLaberinto> ObjectClass, FVector Location);


};
