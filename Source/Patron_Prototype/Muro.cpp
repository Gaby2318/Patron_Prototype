// Fill out your copyright notice in the Description page of Project Settings.


#include "Muro.h"

AMuro::AMuro()
{
	// Set default values for properties
	bIndestructible = true; // Example default value, can be changed in the editor
	// Establecer tipo de objeto
	ObjectType = FName("Muro"); // Set the ObjectType to "Muro"
}

UObject* AMuro::Clone_Implementation()
{
	// Primero clonar las propiedades base usando la implementación del padre
	AMuro* NewMuro = GetWorld()->SpawnActor<AMuro>(GetClass(), GetActorTransform());

	// Copiar propiedades específicas de Muro
	NewMuro->bIndestructible = bIndestructible;
	NewMuro->ObjectType = ObjectType;
	// Retornar el nuevo objeto clonado


	return NewMuro;
}

 