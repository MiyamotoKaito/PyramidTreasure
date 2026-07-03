// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "FColordTexture.h"
#include "UserProfile2.generated.h"

/**
 * 
 */
UCLASS(Blueprintable, BlueprintType)
class PYRAMIDTREASURE_API UUserProfile2 : public UObject
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Stats);
	float Armor;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Stats);
	float HpMax;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Stats);
	FString Name;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Unit);
	TSubclassOf<UObject> UClassOfPlayer;
	UPROPERTY(EditAnywhere, meta = (MetaClass = "/Script/Engine.GameMode"), Category = Unit);
	FSoftClassPath UClassName;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = HUD);
	FColordTexture Texture;
};
