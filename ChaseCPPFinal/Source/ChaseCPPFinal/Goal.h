// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Goal.generated.h"


UCLASS()
class CHASECPPFINAL_API AGoal : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AGoal();

	UPROPERTY(EditAnywhere)
	class UBoxComponent* GoalBox;

	UPROPERTY(EditAnywhere)
	class UStaticMeshComponent* GoalModel;

	UPROPERTY()
	FVector origin;

	UPROPERTY(EditAnywhere)
	float moveSpeed;

	UPROPERTY(EditAnywhere)
	class UMaterialInterface* goalMat;

	UPROPERTY()
	TSubclassOf<class ATarget> MyTargetBlueprint;

	FTimerHandle TimerHandle;
	bool isTiming;

	UFUNCTION()
	void Move();

	UFUNCTION()
	void FlipMove();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;



};
