// Fill out your copyright notice in the Description page of Project Settings.


#include "Bomba.h"

ABomba::ABomba()
{
	// Radio de explosión por defecto
	ExplosionRadius = 200.0f;
	// Establecer tipo de objeto
	ObjectType = FName("Bomba"); // Set the ObjectType to "Bomba"
}
UObject* ABomba::Clone_Implementation()
{
	// Primero clonar las propiedades base usando la implementación del padre
	ABomba* NewBomba = GetWorld()->SpawnActor<ABomba>(GetClass(), GetActorTransform());

	// Copiar propiedades específicas de Bomba
	NewBomba->ExplosionRadius = ExplosionRadius;
	NewBomba->ObjectType = ObjectType;
	// Retornar el nuevo objeto clonado
	return NewBomba;
}
