// Fill out your copyright notice in the Description page of Project Settings.


#include "Muro.h"

AMuro::AMuro()
{
	// Set default values for properties
	bIndestructible = true; // Example default value, can be changed in the editor
	ObjectType = FName("Muro"); // Set the ObjectType to "Muro"
}

// Uncomment if you want to implement Clone functionality
// UObject* AMuro::Clone_Implementation()
// {
//     // Create a new instance of AMuro
//     AMuro* NewMuro = GetWorld()->SpawnActor<AMuro>(GetClass(), GetActorTransform());
//
//     // Copy properties
//     NewMuro->bIndestructible = bIndestructible;
//     NewMuro->ObjectType = ObjectType;
//
// return NewMuro;