// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "OrderScreen.generated.h"

class UWidgetComponent;
class UOrderInfoData;

UCLASS()
class LETEMCOOK_API AOrderScreen : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AOrderScreen();

private:

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
	USceneComponent* SceneRoot;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
	UWidgetComponent* OrderWidget;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* ScreenMesh;

protected:

	virtual void BeginPlay() override;

	UFUNCTION(BlueprintImplementableEvent)
	void OrderAdded(UOrderInfoData* Order);

	UFUNCTION(BlueprintImplementableEvent)
	void OrderRemoved(UOrderInfoData* Order);

private:

	void OnOrderAdded(UOrderInfoData* Order);

	void OnOrderRemoved(UOrderInfoData* Order);

	UFUNCTION(Client, Reliable)
	void Client_OrderAdded(UOrderInfoData* Order);

	UFUNCTION(Client, Reliable)
	void Client_OrderRemoved(UOrderInfoData* Order);
};
