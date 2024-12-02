// Fill out your copyright notice in the Description page of Project Settings.


#include "MemoryGM.h"

void AMemoryGM::UpdateScore(int32 value)
{
	MemoryScore = MemoryScore + value;
	PairNumber = PairNumber + 1;
	if (PairNumber = 4) {
		EndMiniGame = true;
	}
}

bool AMemoryGM::TestPair(int32 FirstCardValue, int32 SecondCardValue)
{
	bool result = false;

	result = (FirstCardValue == SecondCardValue);
	
	return result;
}