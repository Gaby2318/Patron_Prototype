// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "BomberPrototype.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UBomberPrototype : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class PATRON_PROTOTYPE_API IBomberPrototype
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	UFUNCTION(BlueprintNativeEvent, Category = "Prototype")
	UObject* Clone();

	virtual UObject* Clone_Implementation() { return nullptr; }
};
