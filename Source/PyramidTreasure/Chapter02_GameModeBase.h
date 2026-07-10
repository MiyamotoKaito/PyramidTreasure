// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "UserProfile.h"
#include "EnumName.h"
#include "Chapter02_GameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class PYRAMIDTREASURE_API AChapter02_GameModeBase : public AGameModeBase
{
protected:
	virtual void BeginPlay() override;

private:
	GENERATED_BODY()

public:
	void OnTimerElapsed(UUserProfile* TargetActor);
	void ActorElimination(UUserProfile* TargetActor);
	FTimerHandle TimerHandle;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = UclassNames)
	TSubclassOf<UUserProfile> UPBlueprintClassName;	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Status)
	TEnumAsByte<Status> Enum;
};