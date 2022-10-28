#pragma once
#include "stdafx.h"
void FillRand(int arr[], int N)
{
	for (int i = 0; i < N; i++)
	{
		arr[i] = rand() % (N + 10);
	}
}
template<typename T> void PrintArr(T arr[], int N)
{
	for (int i = 0; i < N; i++)
	{
		cout << *(arr + i) << "  ";
	}
	cout << endl;
}
