// Fill out your copyright notice in the Description page of Project Settings.


#include "HealthComponent.h"

// Sets default values for this component's properties
UHealthComponent::UHealthComponent()
{
	MaxHealth = 100;
}


// Called when the game starts
void UHealthComponent:: BeginPlay()
{
	Super:: BeginPlay();
	SetHealth(MaxHealth);
	
}
void UHealthComponent:: TakeDamage (int32 Damage)
{
	CurrentHealth = FMath::Clamp(CurrentHealth - Damage, 0, MaxHealth);
	OnHealthUpdate.Broadcast();
	if (CurrentHealth == 0)
	{
		OnDeath.Broadcast();
	}
}
void UHealthComponent::AddHealth (int32 Health)
{
	CurrentHealth = FMath::Clamp(CurrentHealth + Health, 0, MaxHealth);
	OnHealthUpdate.Broadcast();
}
void UHealthComponent::SetHealth (int32 Health)
{
	CurrentHealth = FMath::Clamp(CurrentHealth = Health, 0, MaxHealth);
	OnHealthUpdate.Broadcast();
}

