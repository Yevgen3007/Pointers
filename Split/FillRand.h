#pragma once
#include "Stdafx.h"
void FillRand(int arr[], int N)
{
	for (int i = 0; i < N; i++)
	{
		arr[i] = rand() % (N + 10);
	}
}
