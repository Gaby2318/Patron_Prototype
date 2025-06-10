// Fill out your copyright notice in the Description page of Project Settings.


#include "Bomba.h"

ABomba::ABomba()
{
	// Set default values for properties
	ExplosionRadius = 200.0f; // Example default value, can be changed in the editor
	ObjectType = FName("Bomba"); // Set the ObjectType to "Bomba"
}
// Uncomment if you want to implement Clone functionality
// UObject* ABomba::Clone_Implementation()
// {
//     // Create a new instance of ABomba
//     ABomba* NewBomba = GetWorld()->SpawnActor<ABomba>(GetClass(), GetActorTransform());
//
//     // Copy properties
//     NewBomba->ExplosionRadius = ExplosionRadius;
//     NewBomba->ObjectType = ObjectType;
// return NewBomba;