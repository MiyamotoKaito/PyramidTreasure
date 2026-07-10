// Fill out your copyright notice in the Description page of Project Settings.


#include "UECookbookGameModeBase.h"
#include "MyFirstActor.h"

void AUECookbookGameModeBase::BeginPlay()
{
	Super::BeginPlay();
	
	GEngine->AddOnScreenDebugMessage(-1, 10, FColor::Red, TEXT("Actor Spawning"));
	
	FTransform SpawnLocation;
	GetWorld()->SpawnActor<AActor>(MyActorClass->StaticClass(), SpawnLocation);
}
