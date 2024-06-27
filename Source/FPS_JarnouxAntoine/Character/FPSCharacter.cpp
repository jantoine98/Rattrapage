// Fill out your copyright notice in the Description page of Project Settings.


#include "FPS_JarnouxAntoine/Character/FPSCharacter.h"
#include "FPS_JarnouxAntoine/Tir/FPSProjectile.h"
#include "EnhancedInputSubsystems.h"
#include "Blueprint/UserWidget.h"
#include "Components/TextBlock.h"

// Sets default values
AFPSCharacter::AFPSCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	
	BaseTurnRate = 10.f;
	BaseLookUpRate = 10.f;

    MuzzleLocation = CreateDefaultSubobject<USceneComponent>(TEXT("MuzzleLocation"));
    MuzzleLocation->SetupAttachment(RootComponent);
    MuzzleLocation->SetRelativeLocation(FVector(100.0f, 0.0f, 0.0f));

    CurrentAmmo = 10;

}

// Called when the game starts or when spawned
void AFPSCharacter::BeginPlay()
{
	Super::BeginPlay();

    if (AmmoWidgetClass)
    {
        AmmoWidget = CreateWidget<UUserWidget>(GetWorld(), AmmoWidgetClass);
        if (AmmoWidget)
        {
            AmmoWidget->AddToViewport();
            UpdateAmmoCount();
        }
    }
	
}

// Called every frame
void AFPSCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AFPSCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
    Super::SetupPlayerInputComponent(PlayerInputComponent);

    PlayerInputComponent->BindAxis("MoveForward", this, &AFPSCharacter::MoveForward);
    PlayerInputComponent->BindAxis("MoveRight", this, &AFPSCharacter::MoveRight);
    PlayerInputComponent->BindAxis("Turn", this, &AFPSCharacter::TurnAtRate);
    PlayerInputComponent->BindAxis("LookUp", this, &AFPSCharacter::LookUpAtRate);

    PlayerInputComponent->BindAction("Fire", IE_Pressed, this, &AFPSCharacter::Fire);

}

void AFPSCharacter::MoveForward(float Value)
{
    if ((Controller != nullptr) && (Value != 0.0f))
    {
        const FRotator Rotation = Controller->GetControlRotation();
        const FRotator YawRotation(0, Rotation.Yaw, 0);

        const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
        AddMovementInput(Direction, Value);
    }
}

void AFPSCharacter::MoveRight(float Value)
{
    if ((Controller != nullptr) && (Value != 0.0f))
    {
        const FRotator Rotation = Controller->GetControlRotation();
        const FRotator YawRotation(0, Rotation.Yaw, 0);

        const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);
        AddMovementInput(Direction, Value);
    }
}

void AFPSCharacter::TurnAtRate(float Rate)
{
    AddControllerYawInput(Rate * BaseTurnRate * GetWorld()->GetDeltaSeconds());
}

void AFPSCharacter::LookUpAtRate(float Rate)
{
    AddControllerPitchInput(Rate * BaseLookUpRate * GetWorld()->GetDeltaSeconds());
}

void AFPSCharacter::Fire()
{
    if (AmmoCount > 0 && ProjectileClass)
    {
        UWorld* World = GetWorld();
        if (World)
        {
            const FRotator SpawnRotation = GetControlRotation();
            const FVector SpawnLocation = ((MuzzleLocation != nullptr) ? MuzzleLocation->GetComponentLocation() : GetActorLocation()) + SpawnRotation.RotateVector(FVector(100.0f, 0.0f, 0.0f));

            FActorSpawnParameters ActorSpawnParams;
            ActorSpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;

            AFPSProjectile* Projectile = World->SpawnActor<AFPSProjectile>(ProjectileClass, SpawnLocation, SpawnRotation, ActorSpawnParams);
            if (Projectile)
            {
                FVector LaunchDirection = SpawnRotation.Vector();
                Projectile->FireInDirection(LaunchDirection);

                AmmoCount--;
                UpdateAmmoCount();
            }
        }
    }
}

void AFPSCharacter::UpdateAmmoCount()
{
    if (AmmoWidget)
    {
        UTextBlock* AmmoText = Cast<UTextBlock>(AmmoWidget->GetWidgetFromName(TEXT("AmmoText")));
        if (AmmoText)
        {
            AmmoText->SetText(FText::FromString(FString::Printf(TEXT("Munitions : %d"), AmmoCount)));
        }
    }
}

