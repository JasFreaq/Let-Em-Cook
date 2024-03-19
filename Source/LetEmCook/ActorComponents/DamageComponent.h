// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DamageComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class LETEMCOOK_API UDamageComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UDamageComponent();

private:
	UPROPERTY(EditDefaultsOnly, Category = Damage, meta = (AllowPrivate))
	float Damage = 20.f;
	
public:	
	float GetDamage() const { return Damage; }
};
