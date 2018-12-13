// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Target.generated.h"


UCLASS()
class CHASECPPFINAL_API ATarget : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ATarget();

	UPROPERTY(VisibleAnywhere)
	class UBoxComponent* BoxComp;

	UPROPERTY(EditAnywhere)
	class UStaticMeshComponent* CubeComponent;

	UPROPERTY(VisibleAnywhere)
	int pointValue;

	UPROPERTY(EditAnywhere)
	class UMaterialInterface* blueMat;

	UPROPERTY()
	TSubclassOf<class ATarget> MyTargetBlueprint;

	UPROPERTY()
	bool hasHitGoal;

	UFUNCTION()
	void OnCompHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);

	UFUNCTION()
	void ChangeColor();

	UFUNCTION()
	void Wait();

	UFUNCTION()
	void DeleteMiss();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;



};
