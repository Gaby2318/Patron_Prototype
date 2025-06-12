// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Patron_PrototypeCharacter.generated.h"

UCLASS(config=Game)
class APatron_PrototypeCharacter : public ACharacter
{
	GENERATED_BODY()

	/** Camera boom positioning the camera behind the character */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* CameraBoom;

	/** Follow camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* FollowCamera;
public:
	APatron_PrototypeCharacter();

	/** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Camera)
	float BaseTurnRate;

	/** Base look up/down rate, in deg/sec. Other scaling may affect final rate. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Camera)
	float BaseLookUpRate;
protected:
	// Llamado al comenzar el juego
	virtual void BeginPlay() override;
	// Configuración de los controles de entrada
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;



	// Colocar una bomba
	void ColocarBomba();

	// Clase de la bomba a spawnear
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Bomba")
	TSubclassOf<class AObjetosLaberinto> BombaClass;
	// Distancia a la que se coloca la bomba frente al jugador
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Bomba")
	float DistanciaColocacionBomba= 500.f;


protected:

	/** Resets HMD orientation in VR. */
	void OnResetVR();

	// Mover hacia adelante/atrás
	void MoveForward(float Value);
	// Mover a la derecha/izquierda
	void MoveRight(float Value);
	/** 
	 * Called via input to turn at a given rate. 
	 * @param Rate	This is a normalized rate, i.e. 1.0 means 100% of desired turn rate
	 */
	void TurnAtRate(float Rate);

	/**
	 * Called via input to turn look up/down at a given rate. 
	 * @param Rate	This is a normalized rate, i.e. 1.0 means 100% of desired turn rate
	 */
	void LookUpAtRate(float Rate);

	/** Handler for when a touch input begins. */
	void TouchStarted(ETouchIndex::Type FingerIndex, FVector Location);

	/** Handler for when a touch input stops. */
	void TouchStopped(ETouchIndex::Type FingerIndex, FVector Location);

protected:
	// APawn interface
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	// End of APawn interface

public:
	/** Returns CameraBoom subobject **/
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }
	/** Returns FollowCamera subobject **/
	FORCEINLINE class UCameraComponent* GetFollowCamera() const { return FollowCamera; }

/*	// Add a getter method for CellSize.  
public:
	float GetCellSize() const { return CellSize; }*/
};

