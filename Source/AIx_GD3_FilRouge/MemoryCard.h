// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MemoryCard.generated.h"
#include "MemoryGM.h"

UCLASS()
class AIX_GD3_FILROUGE_API AMemoryCard : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMemoryCard();
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	bool bIsClickable = true;

	

	
protected:
	UPROPERTY(EditAnywhere, EditDefaultsOnly, Category = "Memory")
	TObjectPtr<ABP_GM_Memory_C> GM_Ref;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable)
	void TurnCard();

	
};
