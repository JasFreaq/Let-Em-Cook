// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "HealthComponent.generated.h"


UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class LETEMCOOK_API UHealthComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UHealthComponent();

private:
	UPROPERTY(EditDefaultsOnly, Category = Damage, meta = (AllowPrivate))
	float FullHealth = 100.f;

	UPROPERTY(Replicated)
	float CurrentHealth;

public:
	void ApplyDamage(float Damage);

	UFUNCTION(BlueprintCallable)
	float GetCurrentHealth() const { return CurrentHealth; }

	UFUNCTION(BlueprintCallable)
	float GetCurrentHealthRatio() const { return CurrentHealth / FullHealth; }

protected:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
};
