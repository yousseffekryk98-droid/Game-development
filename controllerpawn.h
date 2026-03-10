// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "controllerpawn.generated.h"

class UCapsuleComponent;
class USpringArmComponent;
class UCameraComponent;

UCLASS()
class TOPDOWN_UTILITIES_API Acontrollerpawn : public APawn
{
	GENERATED_BODY()

private:
	//Capsule component
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Collision, meta = (AllowPrivateAccess = "true"))
	UCapsuleComponent* CapsuleComponent;

	//Spring Arm positioning the camera behind the Character
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Camera, meta = (AllowPrivateAccess = "true"))
	USpringArmComponent* SpringArm;

	//Follow Camera
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Camera, meta= (AllowPrivateAccess = "true"))
	UCameraComponent* Camera;


public:
	// Sets default values for this pawn's properties
	Acontrollerpawn();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
