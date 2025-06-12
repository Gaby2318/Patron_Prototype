// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ObjetosLaberinto.h"
#include "Bomba.generated.h"

/**
 * 
 */
UCLASS()
class PATRON_PROTOTYPE_API ABomba : public AObjetosLaberinto
{
	GENERATED_BODY()

public:
	ABomba();
	// Radio de explosión de la bomba
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Bomba")
	float ExplosionRadius;

	// Implementación del método Clone
	virtual UObject* Clone_Implementation() override;
	
};
