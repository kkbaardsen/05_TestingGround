// 13th_Panic 2017

#pragma once

#include "Engine.h"
#include "GameFramework/Actor.h"
#include "Gun.generated.h"

class AProjectile;

UCLASS()
class TESTINGGROUND_API AGun : public AActor
{
	GENERATED_BODY()

	/** Gun mesh: 1st person view (seen only by self) */
	UPROPERTY(VisibleDefaultsOnly, Category = Mesh)
	class USkeletalMeshComponent* FP_Gun;
	
	/** Location on gun mesh where projectiles should spawn. */
	UPROPERTY(VisibleDefaultsOnly, Category = Mesh)
	class USceneComponent* FP_MuzzleLocation;

public:	
	// Sets default values for this actor's properties
	AGun();

	/** Projectile class to spawn */
	UPROPERTY(EditDefaultsOnly, Category = Projectile)
	TSubclassOf<class AProjectile> ProjectileClass;
	
	/** Sound to play each time we fire */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
	class USoundBase* FireSound;
	
	/** AnimMontage to play each time we fire */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
	class UAnimMontage* FireAnimation;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
	class UAnimInstance* AnimInstance;

	/** Fires a projectile. */
	UFUNCTION(BlueprintCallable)
	void OnFire();

protected:
	// Called when the game starts or when spawned
	void BeginPlay() override;

public:	
	// Called every frame
	void Tick(float DeltaTime) override;

		
};
