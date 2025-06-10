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

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Laberinto")
	//TArray<TSubclassOf<AObjetosLaberinto>> BomberPrototypeClasses;

	UPROPERTY(VisibleAnywhere, Category = "Laberinto")
	//TArray<AObjetosLaberinto*> LaberintoObjects;

	UPROPERTY(EditAnywhere, Category = "Laberinto")
	int32 GridSize = 15;

	UPROPERTY(EditAnywhere, Category = "Laberinto")
	float CellSize = 300.0f;
public:

	UFUNCTION(BlueprintCallable, Category = "Laberinto")
	void GenerarLaberinto();

	UFUNCTION(BlueprintCallable, Category = "Laberinto")
	//AObjetosLaberinto* SpawnObjectAtLocation(TSubclassOf<AObjetosLaberinto> ObjectClass, FVector Location);

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
