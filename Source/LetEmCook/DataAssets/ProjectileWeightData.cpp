// Fill out your copyright notice in the Description page of Project Settings.


#include "ProjectileWeightData.h"

FProjectileImpulse UProjectileWeightData::GetProjectileImpulse(EProjectileWeightClass WeightClass) const
{
	switch (WeightClass)
	{
		case EProjectileWeightClass::Bullet:
			return BulletImpulse;
		case EProjectileWeightClass::Light:
			return LightImpulse;
		case EProjectileWeightClass::Medium:
			return MediumImpulse;
		case EProjectileWeightClass::Heavy:
			return HeavyImpulse;

		default:
			UE_LOG(LogTemp, Warning, TEXT("Invalid weight class: %d"), (int32)WeightClass);
			return BulletImpulse;
	}
}
