// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ObjetosLaberinto.generated.h"

UCLASS()
class PATRON_PROTOTYPE_API AObjetosLaberinto : public AActor//, public IBomberPrototype // Ensure the interface is implemented
{
GENERATED_BODY()

public:	
// Sets default values for this actor's properties
AObjetosLaberinto();

// Implement the IBomberPrototype interface
UFUNCTION(BlueprintNativeEvent, Category = "Prototype")
UObject* Clone() const; // Ensure the function signature matches the interface
//virtual UObject* Clone_Implementation() const override;

protected:
UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Prototype")
FName ObjectType;

UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Prototype")
UStaticMeshComponent* MeshComponent;

protected:
// Called when the game starts or when spawned
virtual void BeginPlay() override;

public:	
// Called every frame
virtual void Tick(float DeltaTime) override;

};
   

