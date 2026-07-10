// Fill out your copyright notice in the Description page of Project Settings.


#include "Chapter02_GameModeBase.h"
#include "TimerManager.h"
#include "UAction.h"

void AChapter02_GameModeBase::BeginPlay()
{
	Super::BeginPlay();
 
	// 1. UUserProfileの生成 (所有者をthisに設定してメモリ管理を安定化)
	UUserProfile* NewObjectPtr = NewObject<UUserProfile>(this, UUserProfile::StaticClass());
    UUAction* Action = NewObject<UUAction>(GetTransientPackage(), UUAction::StaticClass());
	if (NewObjectPtr)
	{
		UE_LOG(LogTemp, Warning, TEXT("Target Spawned"));
 
		// 2. 引数付きタイマーのためのデリゲート作成
		FTimerDelegate TimerDel;
		// BindUObjectの第3引数以降に、関数に渡したい変数を記述します
		TimerDel.BindUObject(this, &AChapter02_GameModeBase::OnTimerElapsed, NewObjectPtr);
 
		// 3. タイマーのセット (関数ポインタではなくデリゲートを渡す)
		GetWorldTimerManager().SetTimer(TimerHandle, TimerDel, 2.0f, false);
	}
	if (Action)
	{
		UE_LOG(LogTemp, Warning, TEXT("Action Spawned"));
	}
}
void AChapter02_GameModeBase::OnTimerElapsed(UUserProfile* TargetActor)
{
	if (IsValid((TargetActor)))
	{
		ActorElimination(TargetActor);
	}
	else
	{
		GetWorldTimerManager().ClearTimer(TimerHandle);
	}
}

void AChapter02_GameModeBase::ActorElimination(UUserProfile* TargetActor)
{
	
		if (IsValid(TargetActor))
		{
			// UE5では ConditionalBeginDestroy よりも MarkAsGarbage が推奨されます
			TargetActor->MarkAsGarbage();
        
			UE_LOG(LogTemp, Warning, TEXT("Target Elimination complete."));
		}
}
