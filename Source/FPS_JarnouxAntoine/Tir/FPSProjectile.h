// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FPSProjectile.generated.h"

UCLASS()
class FPS_JARNOUXANTOINE_API AFPSProjectile : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFPSProjectile();

protected:
    // Called when the game starts or when spawned
    virtual void BeginPlay() override;

public:
    // Called every frame
    virtual void Tick(float DeltaTime) override;

    
    void FireInDirection(const FVector& ShootDirection);

private:
    
    UPROPERTY(VisibleDefaultsOnly, Category = Projectile)
    class USphereComponent* CollisionComponent;

    
    UPROPERTY(VisibleAnywhere, Category = Movement)
    class UProjectileMovementComponent* ProjectileMovementComponent;

};
