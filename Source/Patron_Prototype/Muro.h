// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ObjetosLaberinto.h"
#include "Muro.generated.h"

/**
 * 
 */
UCLASS()
class PATRON_PROTOTYPE_API AMuro : public AObjetosLaberinto
{
	GENERATED_BODY()

public:
	AMuro();
	// Propiedad específica: indica si la pared puede ser destruida
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Muro")
	bool bIndestructible;

	// Implementación del método Clone
	virtual UObject* Clone_Implementation() override;
	
};
